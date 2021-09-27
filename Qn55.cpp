# include<iostream>
using namespace std;
void max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<endl;
    }
    else
    cout<<c<<endl;
}
void min(int a,int b,int c)
{
    if(a<b && a<c)
    {
        cout<<a<<endl;
    }
    else if(b<a && b<c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    max(a,b,c);
    min(a,b,c);
}