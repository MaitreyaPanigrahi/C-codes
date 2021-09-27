# include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int r=0;
    while(num>0)
    {
    int lastdigit=num%10;
    r=r*10+lastdigit;
    num=num/10;
    };
    cout<<r<<endl;


}