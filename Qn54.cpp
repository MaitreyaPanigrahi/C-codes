# include<iostream>
using namespace std;
float area(int r)
{
    float are=3.14*r*r;
    return are;
}
float circumference(int r)
{
    float circum=2*3.14*r;
    return circum;
}
int main()
{
    float r;
    cin>>r;
    cout<<area(r)<<endl;
    cout<<circumference(r)<<endl;
}