
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
int x=0,n;
string s;
cin>>n;
for(int i=0;i<n;i++)
{

cin>>s;
if(s[1]=='+'){

x++;

}
else
{
x--;

}
}

cout<<x;

return 0;
}
