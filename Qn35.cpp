# include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<" ";
            if(j<=i && j<=8-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}