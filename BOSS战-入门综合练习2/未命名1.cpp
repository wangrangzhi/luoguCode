#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    double s,x,len=0;//本题所用到的数据皆∈R（实数），所以这里用了double
    cin>>s>>x;//输入s,x
    for(int i=1;i<=10000;i++)//开始循环测试碰到探测器时的时间
    {
//len在这里作累加器
        if(len>=s-x)//当小鱼进入到探测器的范围时
        {
            if(s+x<len+7*pow(0.98,i-1))//计算再走一秒后是否可以逃出
            {
                cout<<"n"<<endl;
                i=10000;//停止循环
            }
            else
            {
                cout<<"y"<<endl;
                i=10000;//同上
            }
        }
        len+=7*pow(0.98,i-1);
    }
    return 0;
}
