#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cstdio>
using namespace std;
class person
{
public:
    person();
    person(int id,int x,int d);
    //person(int id,int x,int d,double we);
    ~person();
    void setid(int ID);
    void setx(int X);
    void setd(int D);
    //void setwe(double WE);
    int getid();
    int getx();
    int getd();
    //double getwe();
private:
    int id;           //���
    int x;            //����¥��
    int d;            //Ŀ��¥��
    //double we;        //����

};


#endif // PERSON_H_INCLUDED
