# include<iostream>
using namespace std;
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=sum(a,b);
    cout<<c<<endl;
}