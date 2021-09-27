# include<iostream>
using namespace std;
int product(int a,int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=product(a,b);
    cout<<c<<endl;
}