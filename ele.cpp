#include "ele.h"
#include <iostream>
using namespace std;

elevator::elevator(int floor):floor(floor),up(0),down(0),nowfloor(1){}
elevator::~elevator(){}
void elevator::sub()      //上行按钮
{
    int n=gnf();          //得到当前层数
    int ff;                //想要到达层数
    cout<<"当前电梯正停在"<<n<<"层"<<endl;
    cout<<"请输入要到达的楼层:"<<endl;
    scanf("%d",&ff);
    if(ff<1||ff>10)
        cout<<"您输入的楼层不存在，请重新选择"<<endl;
    else if(n>=ff)
        cout<<"您不能上行！"<<endl;
    else
    {
        up=1;
        sfn(ff);
        nowfloor=ff;
        up=0;
    }
}
void elevator::sdb()      //下行按钮
{
    int n=gnf();          //得到当前层数
    int ff;               //想要到达层数
    cout<<"当前电梯正停在"<<n<<"层"<<endl;
    cout<<"请输入要到达的楼层:"<<endl;
    scanf("%d",&ff);
    if(ff<1||ff>10)
        cout<<"您输入的楼层不存在，请重新选择"<<endl;
    else if(n<=ff)
        cout<<"您不能下行！"<<endl;
    else
    {
        down=1;
        sfn(ff);
        nowfloor=ff;
        down=0;
    }
}
void elevator::sfn(int fn) //电梯开始运行
{
    if(up)
    {
        for(int i=nowfloor;i<fn;++i)
        {
            cout<<"↑↑↑↑↑"<<i<<"↑↑↑↑↑"<<endl<<endl;
            Sleep(666);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        cout<<"第"<<fn<<"层到了"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    if(down)
    {
        for(int i=nowfloor;i>fn;--i)
        {
            cout<<"↓↓↓↓↓"<<i<<"↓↓↓↓↓"<<endl<<endl;
            Sleep(666);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        cout<<"第"<<fn<<"层到了"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
     nowfloor=fn;
}
int elevator::gnf()   //获得当前所在楼层
{
    return nowfloor;
}
void elevator::setup(bool up)
{
    this->up=up;
}
void elevator::setdown(bool down)
{
    this->down=down;
}
bool elevator::getup()
{
    return up;
}
bool elevator::getdown()
{
    return down;
}
int elevator::getfloor()
{
    return floor;
}
