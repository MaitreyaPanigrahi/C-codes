# include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        cout<<" ";
        char k='A';
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                cout<<k;
                j<4?k++:k--;
            }
            else
            {
                cout<<" ";
                if(j==4)
                {
                    k--;
                }
                
            }
        }
        cout<<endl;
    }
}