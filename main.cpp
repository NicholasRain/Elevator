#include <iostream>
#include "adele.h"
#include "date.h"
using namespace std;
adele dt;
CDate data;
void error()
{
    cout<<"-----��Ч����-----"<<endl;
}
void exit()
{
    exit(0);
}
void memu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
    cout<<" ***��ѡ�����*** "<<endl;
    cout<<"| 1.����         |"<<endl;
    cout<<"| 2.�½�         |"<<endl;
    cout<<"| 3.�˳�         |"<<endl;
    cout<<" **************** "<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void init()
{
    cout<<"������"<<data.format("DDD")<<endl;
    cout<<"�õ���һ��10��, ��ӭ����ʹ�ã�"<<endl;
    //cout<<"���أ�"<<dt.getmaxweight()<<"kg"<<endl;
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
