# include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9;i++)
    {
        int k=1;
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i && j>=i-4)
            {
                cout<<k;
                k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}