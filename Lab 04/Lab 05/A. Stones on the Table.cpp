
#include<iostream>
#include<string>
using namespace std;
int main()
{


    int num,c=0;
    cin>>num;
    string s;
    cin>>s;

    for(int i=0;i<num;i++)
    {

    if(s[i]==s[i+1])
    {

       c++;
    }

    }
    cout<<c<<endl;
    return 0;
}
