#  include<iostream>
using namespace std;
int main()
{
    int x=2;
    int y=5;
    int z=0;
    cout<<bool (x==2)<<endl;
    cout<<bool (x!=5)<<endl;
    cout<<bool(x!=5 && y>=5)<<endl;
    cout<<bool (z!=0 || x==2)<<endl;
    cout<<bool (!(y<10))<<endl;
}