
#include<iostream>
using namespace std;
int main()
{
    int k,n,w,a,mul,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+i;
    }

    mul=k*sum;
    int ans=mul-n;
    if(ans<=0)
        ans=0;
    cout<<ans<<endl;


    return 0;
}
