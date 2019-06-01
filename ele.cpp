#include "ele.h"
#include <iostream>
using namespace std;

elevator::elevator(int floor):floor(floor),up(0),down(0),nowfloor(1){}
elevator::~elevator(){}
void elevator::sub()      //���а�ť
{
    int n=gnf();          //�õ���ǰ����
    int ff;                //��Ҫ�������
    cout<<"��ǰ������ͣ��"<<n<<"��"<<endl;
    cout<<"������Ҫ�����¥��:"<<endl;
    scanf("%d",&ff);
    if(ff<1||ff>10)
        cout<<"�������¥�㲻���ڣ�������ѡ��"<<endl;
    else if(n>=ff)
        cout<<"���������У�"<<endl;
    else
    {
        up=1;
        sfn(ff);
        nowfloor=ff;
        up=0;
    }
}
void elevator::sdb()      //���а�ť
{
    int n=gnf();          //�õ���ǰ����
    int ff;               //��Ҫ�������
    cout<<"��ǰ������ͣ��"<<n<<"��"<<endl;
    cout<<"������Ҫ�����¥��:"<<endl;
    scanf("%d",&ff);
    if(ff<1||ff>10)
        cout<<"�������¥�㲻���ڣ�������ѡ��"<<endl;
    else if(n<=ff)
        cout<<"���������У�"<<endl;
    else
    {
        down=1;
        sfn(ff);
        nowfloor=ff;
        down=0;
    }
}
void elevator::sfn(int fn) //���ݿ�ʼ����
{
    if(up)
    {
        for(int i=nowfloor;i<fn;++i)
        {
            cout<<"����������"<<i<<"����������"<<endl<<endl;
            Sleep(666);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        cout<<"��"<<fn<<"�㵽��"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    if(down)
    {
        for(int i=nowfloor;i>fn;--i)
        {
            cout<<"����������"<<i<<"����������"<<endl<<endl;
            Sleep(666);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        cout<<"��"<<fn<<"�㵽��"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
     nowfloor=fn;
}
int elevator::gnf()   //��õ�ǰ����¥��
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
