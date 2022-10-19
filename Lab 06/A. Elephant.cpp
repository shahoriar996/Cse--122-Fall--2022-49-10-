
#include<iostream>
using namespace std;
int main()
{
    int x,s,d;
    cin>>x;
    if(1<=x && x<=1000000){



    s=x/5;
    if(x<=5)
    {
        cout<<1<<endl;

    }
    else if (5*s!=x)
    {
        d=s+1;
        cout<<d<<endl;
    }
    else if(5*s==x)
    {
        cout<<s<<endl;
    }
    }
    return 0;
}
