#ifndef ADELE_H_INCLUDED
#define ADELE_H_INCLUDED
#include "ele.h"
#include "person.h"
#include <vector>
class adele:public elevator
{
public:
    adele();
    //adele(double weight);
    ~adele();
    //void  setmaxweight();
    //double getmaxweight();
    void sub();
    void sdb();
//private:
    //double maxweight;
};

#endif // ADELE_H_INCLUDED
