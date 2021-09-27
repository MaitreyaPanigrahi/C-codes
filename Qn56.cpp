# include<iostream>
using namespace std;
void evenodd(int num)
{
    if(num%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}
int main()
{
    int num;
    cin>>num;
    evenodd(num);
}