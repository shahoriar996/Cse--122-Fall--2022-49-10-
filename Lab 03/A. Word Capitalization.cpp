
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int len=strlen(s);
    if(len<=1000){


    for(int i=0;i<=len;i++)
    {
        if(i==0)

        {
            if(s[i]>='a'&&s[i]<='z')

                s[i]=s[i]-32;
            cout<<s<<endl;

        }
    }
    }
    return 0;

}
