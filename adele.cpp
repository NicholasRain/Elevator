#include "adele.h"

adele::adele():elevator(10){}//,maxweight(1000.0){}
/*adele::adele(double we):maxweight(we),elevator(10)
{

}*/
adele::~adele()
{
    cout<<"лл��˱�����"<<endl;
}
void adele::sub()
{
    int dq=gnf();
    cout<<"�������ж����˽���˱��ε��ݣ�";
    int n=0;
    cin>>n;
    person ren[n];
    cout<<"������ÿ�������ڵ�¥���Ŀ��¥��"<<endl;
    cout<<"��ǰ����ͣ��"<<dq<<"��"<<endl;
    int xx,mm;
    //double ww;
    //double sumw=0.0;
    int t[500]={0};
    //bool vis[500]={0};
    vector<person> in[500],out[500];
    for(int i=1;i<=n;++i)
    {
        scanf("%d %d",&xx,&mm);
        while(xx<1||xx<dq||xx>floor||xx>=mm||/*ww>maxweight||*/dq>=mm||mm>floor||mm<1)
        {
            /*if(ww>maxweight)
            {
                cout<<"�����ܳ��������ݣ�����"<<getmaxweight()<<"kg"<<"���������룺"<<endl;
            }*/
            if(xx<1||xx<dq||dq>=mm||xx>=mm)
            {
                cout<<"���������У����������룺"<<endl;
            }
            else
            {
                cout<<"û������¥������벻�Ϸ������������룺"<<endl;
            }
            scanf("%d %d",&xx,&mm);
        }
        ren[i]=person(i,xx,mm);
        t[xx]++;
        t[mm]++;
        //in[xx].push_back(ren[i]);
        //out[mm].push_back(ren[i]);
    }
    /*for(int i=0,l=in[dq].size();i<l;++i)
    {
        /*if(maxweight-sumw>=in[dq][i].getwe())
        {
            vis[in[dq][i].getid()]=1;
            sumw+=in[dq][i].getwe();
        }
        else
        {
            cout<<"������"<<endl;
            cout<<"idΪ"<<in[dq][i].getid()<<"�ĳ˿Ͳ�������"<<endl;
        }
    }*/
    for(int i=dq;i<=floor;++i)
    {
        if(t[i])
        {
            up=1;
            sfn(i);
            up=0;
            /*for(int j=0,l=out[i].size();j<l;++j)
            {
                if(vis[out[i][j].getid()])
                {
                    sumw-=out[i][j].getwe();
                    vis[out[i][j].getid()]=0;
                }
            }
            for(int j=0,l=in[i].size();j<l;++j)
            {
                if(maxweight>=sumw+in[i][j].getwe())
                {
                    sumw+=in[i][j].getwe();
                    vis[in[i][j].getid()]=1;
                }
                else
                {
                    cout<<"������"<<endl;
                    cout<<"idΪ"<<in[i][j].getid()<<"�ĳ˿Ͳ�������"<<endl;
                }
            }*/
        }
    }
}

void adele::sdb()
{
    int dq=gnf();
    cout<<"�������ж����˽���˱��ε��ݣ�";
    int n=0;
    cin>>n;
    person ren[n];
    cout<<"������ÿ�������ڵ�¥���Ŀ��¥��"<<endl;
    cout<<"��ǰ����ͣ��"<<dq<<"��"<<endl;
    int xx,mm;
    //double ww;
    //double sumw=0.0;
    int t[500]={0};
    //bool vis[500]={0};
    vector<person> in[500],out[500];
    for(int i=1;i<=n;++i)
    {
        scanf("%d %d",&xx,&mm);
        while(xx<1||xx>dq||xx>floor||xx<=mm||/*ww>maxweight||*/dq<=mm||mm>floor||mm<1)
        {
            /*if(ww>maxweight)
            {
                cout<<"�����ܳ��������ݣ�����"<<getmaxweight()<<"kg"<<"���������룺"<<endl;
            }*/
            if(xx<1||xx<dq||dq<=mm||xx<=mm)
            {
                cout<<"���������У����������룺"<<endl;
            }
            else
            {
                cout<<"û������¥������벻�Ϸ������������룺"<<endl;
            }
            scanf("%d %d",&xx,&mm);
        }
        ren[i]=person(i,xx,mm);
        t[xx]++;
        t[mm]++;
        //in[xx].push_back(ren[i]);
        //out[mm].push_back(ren[i]);
    }
    /*for(int i=0,l=in[dq].size();i<l;++i)
    {
        if(maxweight-sumw>=in[dq][i].getwe())
        {
            vis[in[dq][i].getid()]=1;
            sumw+=in[dq][i].getwe();
        }
        else
        {
            cout<<"������"<<endl;
            cout<<"idΪ"<<in[dq][i].getid()<<"�ĳ˿Ͳ�������"<<endl;
        }
    }*/
    for(int i=dq;i>=1;--i)
    {
        if(t[i])
        {
            down=1;
            sfn(i);
            down=0;
            /*for(int j=0,l=out[i].size();j<l;++j)
            {
                if(vis[out[i][j].getid()])
                {
                    sumw-=out[i][j].getwe();
                    vis[out[i][j].getid()]=0;
                }
            }
            for(int j=0,l=in[i].size();j<l;++j)
            {
                if(maxweight>=sumw+in[i][j].getwe())
                {
                    sumw+=in[i][j].getwe();
                    vis[in[i][j].getid()]=1;
                }
                else
                {
                    cout<<"������"<<endl;
                    cout<<"idΪ"<<in[i][j].getid()<<"�ĳ˿Ͳ�������"<<endl;
                }
            }*/
        }
    }
}
/*double adele::getmaxweight()
{
    return maxweight;
}*/
