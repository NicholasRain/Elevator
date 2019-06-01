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
    void sub();//按下上行按钮
    void sdb(); //按下下行按钮
    void sfn(int fn);//根据要进入的楼层电梯开始运行，并逐层显示经过的楼层
    void setup(bool up);
    void setdown(bool down);
    int gnf(); //获得当前所在楼层
    bool getup();
    bool getdown();
    int getfloor();

};

#endif // ELE_H_INCLUDED
