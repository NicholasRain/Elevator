#ifndef ELE_H_INCLUDED
#define ELE_H_INCLUDED
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
class elevator{
protected:
    int floor=10;
    bool up=0;
    bool down=0;
    int nowfloor=1;
public:
    elevator(int floor);
    ~elevator();
    void sub();//�������а�ť
    void sdb(); //�������а�ť
    void sfn(int fn);//����Ҫ�����¥����ݿ�ʼ���У��������ʾ������¥��
    void setup(bool up);
    void setdown(bool down);
    int gnf(); //��õ�ǰ����¥��
    bool getup();
    bool getdown();
    int getfloor();

};

#endif // ELE_H_INCLUDED
