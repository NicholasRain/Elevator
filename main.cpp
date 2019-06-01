#include <iostream>
#include "adele.h"
#include "date.h"
using namespace std;
adele dt;
CDate data;
void error()
{
    cout<<"-----无效操作-----"<<endl;
}
void exit()
{
    exit(0);
}
void memu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
    cout<<" ***请选择操作*** "<<endl;
    cout<<"| 1.上升         |"<<endl;
    cout<<"| 2.下降         |"<<endl;
    cout<<"| 3.退出         |"<<endl;
    cout<<" **************** "<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void init()
{
    cout<<"今天是"<<data.format("DDD")<<endl;
    cout<<"该电梯一共10层, 欢迎您的使用！"<<endl;
    //cout<<"限重："<<dt.getmaxweight()<<"kg"<<endl;
}
int main()
{
    init();
    while(1)
    {
        int x;
        memu();
        scanf("%d",&x);
        switch(x)
        {
            case 1:dt.sub();break;
            case 2:dt.sdb();break;
            case 3:exit();break;
            default:error();break;
        }
    }
    return 0;
}
