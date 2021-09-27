# include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int factorial=1;
    if(num==0||num==1)
    {
        factorial=1;
    }
    for(int i=2;i<=num;i++)
    {
        factorial*=i;
    }
    cout<<factorial<<endl;
}