
#include<iostream>
using namespace std;

int main()
{
    int M,N,A,B;
    cin>>M>>N;
    A=2;
    B=1;
    int sum=0;

    if(1<=M && M<=N && 1<=N && N<=16)
    {
        sum=M*N;
       int add=sum/A*B;
        {
            cout<<add<<endl;
        }
    }
    return 0;
}
