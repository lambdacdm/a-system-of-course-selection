#include <stdlib.h>
#include "datastr.h"
#include<iostream>
#include<QStandardItemModel>
#include<QFile>
#include<QTextStream>
#include<QDebug>
using namespace std;
void InitList(LinkNode *&L)
{
    L = new LinkNode;
    L->next = NULL;
}
int LocateElem(LinkNode *L, QString e,int index)
{
    int i=1;
    LinkNode *p=new LinkNode;
    p = L->next;
    if(index==1)
    {
        while (p != NULL && p->data.usertype.username!=e)//按用户名查找
        {
            p = p->next;
            ++i;
        }
    }
    if(index==2)
    {
        while (p != NULL && p->data.coursetype.courseid!=e.toInt())//按课程编号查找
        {
            p = p->next;
            ++i;
        }
    }
    if (p == NULL) return 0;
    return i;
}
void ListInsertF(LinkNode *&L,ElemType a)
{
    LinkNode *s;
    s=new LinkNode;
    s->data=a;
    s->next=L->next;
    L->next=s;
}
bool GetElem(LinkNode *L, int i, ElemType &e)
{
    if (i <= 0) return false;
    int j = 0;
    LinkNode *p = L;
    while (p != NULL && j < i)
    {
        ++j;
        p = p->next;
    }
    if (p == NULL) return false;
    e = p->data;
    return true;
}
void UpdateListS(LinkNode *&L,LinkNode *T,QString x)//从总数据库动态更新学生数据
{
    LinkNode *s,*r,*p;
    L=new LinkNode;
    r=L;
    p=T->next;
    while(p!=NULL)
    {
        if(LocateElem(p->data.coursetype.mystudent,x,1)!=0)
        {
            s=new LinkNode;
            s->data=p->data;
            r->next=s;
            r=s;
        }
        p=p->next;
    }
    r->next=NULL;
}
void UpdateListT(LinkNode *&L,LinkNode *T,QString x)//从总数据库动态更新老师数据
{
    LinkNode *s,*r,*p;
    L=new LinkNode;
    r=L;
    p=T;
    while(p!=NULL)
    {
        if(p->data.coursetype.courseteacher==x)
        {
            s=new LinkNode;
            s->data=p->data;
            r->next=s;
            r=s;
        }
        p=p->next;
    }
    r->next=NULL;
}
int ListLength(LinkNode *L)
{
    LinkNode *p = L->next;
    int n = 0;
    while (p != NULL)
    {
        ++n;
        p = p->next;
    }
    return n;
}
bool ListDelete(LinkNode *&L, int i, ElemType &e)
{
    if (i <= 0) return false;
    int j = 0;
    LinkNode *p = L,*q;
    while (p != NULL && j < i-1)
    {
        ++j;
        p = p->next;
    }
    if (p == NULL) return false;
    q = p->next;
    if (q == NULL) return false;
    e = q->data;
    p->next = q->next;
    delete q;
    return true;
}
bool GetElem(LinkNode *L,int i,LinkNode *&p)
{
    if (i <= 0) return false;
    int j = 0;
    p = L;
    while (p != NULL && j < i)
    {
        ++j;
        p = p->next;
    }
    if (p == NULL) return false;
    return true;
}
int LocateElem(LinkNode *L,int e,int index)//按课程编号查找，重载
{
    int i=1;
    LinkNode *p = L->next;
    if(index==2)
    {
        while (p != NULL && p->data.coursetype.courseid!=e)
        {
            p = p->next;
            ++i;
        }
    }
    if (p == NULL) return 0;
    return i;
}
void ListInsertR(LinkNode *&L,ElemType a)
{
    LinkNode *s,*r;
    r=L;
    while(r->next!=NULL)
    {
        r=r->next;
    }
    s=new LinkNode;
    s->data=a;
    r->next=s;
    r=s;
    r->next=NULL;
}
void DispListFile(LinkNode *L,QTextStream &outfile)
{
    LinkNode *p=L->next;
    while (p != NULL)
    {
        outfile << p->data.usertype.username<<' ';
        p =p->next;
    }
}
void DispElem(ElemType e,QTextStream &outfile)
{
    outfile<<QString("NewItemSign")<<' '<<QString::number(e.usertype.attribute)<<' ';
    if(e.usertype.attribute>0)
    {
        outfile<<e.usertype.username<<' '<<e.usertype.password<<' ';
    }
    else
    {
        outfile<<QString::number(e.coursetype.courseid)<<' '
              <<e.coursetype.coursename<<' '<<e.coursetype.courseteacher
             <<' '<<e.coursetype.coursetime<<' '<<e.coursetype.courseroom<<' '
            <<QString::number(e.coursetype.coursemax)<<' '
        <<QString::number(e.coursetype.coursepop)<<' ';
        DispListFile(e.coursetype.mystudent,outfile);//学生名单
    }
    outfile<<QString("EndItemSign")<<' ';
}
void DispHead(LinkNode *L,QTextStream &outfile)
{
    LinkNode *p=L->next;
    while (p != NULL)
    {
        DispElem(p->data,outfile);
        p =p->next;
    }
}
bool ReadIn(LinkNode *&cr, LinkNode *u[], QString k, int &courseid)
{
    courseid=0;
    ElemType e,se;
    QStringList strlist=k.split(" ");
    int attribute=0;
    int p;
    int i=0;
    QString c;
    while(i<strlist.length()-1)
    {
        c=strlist[i];
        if(c=="EndItemSign")
        {
            if(attribute>0)
            {
                ListInsertF(u[attribute],e);
            }
            else if(attribute==0)
            {
                ListInsertF(cr,e);
            }
            else
            {
                qDebug()<<"i="<<i<<" here1";
                return false;
            }
        }
        else if(c=="NewItemSign")
        {
            ElemType temp;
            e=temp;
            InitList(e.coursetype.mystudent);
            ++i;
            if(i>=strlist.length())
            {
                qDebug()<<"i="<<i<<" here2";
                return false;
            }
            c=strlist[i];
            if(c.toInt()>0)
            {
                attribute=c.toInt();
                e.usertype.attribute=attribute;
                if(i+2>=strlist.length()) return false;
                e.usertype.username=strlist[i+1];
                e.usertype.password=strlist[i+2];
                i=i+2;
                c=strlist[i];
            }
            else if(c.toInt()==0)
            {
                attribute=0;
                e.usertype.attribute=attribute;
                if(i+7>=strlist.length()) return false;
                e.coursetype.courseid=strlist[i+1].toInt();
                courseid=max(courseid,e.coursetype.courseid);
                e.coursetype.coursename=strlist[i+2];
                e.coursetype.courseteacher=strlist[i+3];
                e.coursetype.coursetime=strlist[i+4];
                e.coursetype.courseroom=strlist[i+5];
                e.coursetype.coursemax=strlist[i+6].toInt();
                e.coursetype.coursepop=strlist[i+7].toInt();
                i=i+7;
                c=strlist[i];
            }
            else
            {
                qDebug()<<"i="<<i<<" here3";
                return false;
            }
        }
        else
        {
            if(attribute==0)
            {
                p=LocateElem(u[1],c,1);
                GetElem(u[1],p,se);
                ListInsertR(e.coursetype.mystudent,se);
            }
            else
            {
                qDebug()<<"i="<<i<<" here4";
                return false;
            }
        }
        ++i;
    }
    ++courseid;
    return true;
}

void course::init()
{
    for(int i=0;i<4;++i)
    {
        InitList(userhead[i]);
        InitList(userhead[i]->data.coursetype.mystudent);
    }
    InitList(coursehead);
    InitList(coursehead->data.coursetype.mystudent);
    InitList(mycoursehead);
}
