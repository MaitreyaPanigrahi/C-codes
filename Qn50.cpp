#include<iostream>
using namespace std;
void fib(int num)
{
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=6;i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main()
{
    int num;
    cin>>num;
    fib(num);
}