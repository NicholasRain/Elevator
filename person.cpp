#include "person.h"

person::person(){}
person::person(int id,int x,int d):id(id),x(x),d(d)//,we(50.0)
{

}
/*person::person(int id,int x,int d,double we):id(id),x(x),d(d),we(we)
{

}*/
person::~person(){}
void person::setid(int ID)
{
    id=ID;
}
void person::setx(int X)
{
    x=X;
}
void person::setd(int D)
{
    d=D;
}
/*void person::setwe(double WE)
{
    we=WE;
}*/
int person::getid()
{
    return id;
}
int person::getx()
{
    return x;
}
int person::getd()
{
    return d;
}
/*double person::getwe()
{
    return we;
}*/
