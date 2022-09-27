#ifndef DATASTR_H
#define DATASTR_H

#include <stdlib.h>
#include<QApplication>
#include<QStandardItemModel>
#include<QFile>
#include<QTextStream>
using namespace std;

struct UserType{
    int attribute;
    QString username;
    QString password;
    struct LinkNode *mycourse;
};
struct CourseType{
    int courseid;
    QString coursename;
    QString courseteacher;
    QString coursetime;
    QString courseroom;
    int coursemax;
    int coursepop;
    struct LinkNode *mystudent;
};
struct ElemType{
    UserType usertype;
    CourseType coursetype;
};
struct LinkNode {
    ElemType data;
    LinkNode *next;
};
class course{
    public:
        LinkNode *userhead[4];
        LinkNode *coursehead;
        LinkNode *mycoursehead;
        ElemType user;
        int inor;
        int attribute;
        QString username;
        QString password;
        int courseid;
        int nowid;
        void init();
};
void InitList(LinkNode *&L);
int LocateElem(LinkNode *L, QString e,int index);
void ListInsertF(LinkNode *&L,ElemType a);
bool GetElem(LinkNode *L, int i, ElemType &e);
void UpdateListT(LinkNode *&L,LinkNode *T,QString x);
void UpdateListS(LinkNode *&L,LinkNode *T,QString x);
int ListLength(LinkNode *L);
bool ListDelete(LinkNode *&L, int i, ElemType &e);
bool GetElem(LinkNode *L,int i,LinkNode *&p);
int LocateElem(LinkNode *L,int e,int index);
void ListInsertR(LinkNode *&L,ElemType a);
void DispListFile(LinkNode *L,ofstream &outfile);
void DispElem(ElemType e, QTextStream &outfile);
void DispHead(LinkNode *L, QTextStream &outfile);
bool ReadIn(LinkNode *&cr,LinkNode *u[],QString k,int &courseid);

#endif
