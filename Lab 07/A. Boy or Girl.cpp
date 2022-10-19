
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,a=0;
    for(i=0;i<s.length()-1;i++)


    {
        for(j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                a++;
                break;
            }
        }

    }
   int result = s.length()-a;
        if(result%2==0)
        {
            cout<<"CHAT WITH HER!"<<endl;

        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }


    return 0;
}
