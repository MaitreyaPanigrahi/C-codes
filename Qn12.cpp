# include<iostream>
using namespace std;
int main()
{
    int ageA,ageB,ageC;
    cin>>ageA>>ageB>>ageC;
    if(ageA>ageB)
    {
        if(ageA>ageC)
        {
            cout<<"A is older"<<endl;
        }
        else
        {
            cout<<"C is older"<<endl;
        }
    }
    else if(ageB>ageC)
    {
        cout<<"B is older"<<endl;
    }
    else 
    {
        cout<<"C is older"<<endl;
    }
}