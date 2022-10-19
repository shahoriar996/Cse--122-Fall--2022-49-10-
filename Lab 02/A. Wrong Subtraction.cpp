#include<iostream>
using namespace std;

int main()
{
   int a=0,b=0,t,i;
   cin>>a>>b;
   for(i=0;i<b;i++)
   {
       t=a%10;
       if(t==0)
       {
           a=a/10;
       }
       else
       {
           a=a-1;
       }
   }
cout<<a<<endl;
   return 0;
}
