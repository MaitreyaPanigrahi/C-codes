# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i;
    int n=0;
    int f=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"Non Prime"<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Prime"<<endl;
    }
    
}