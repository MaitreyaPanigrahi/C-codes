# include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        // cout<<" ";
        int k=1;
        for(int j=1;j<=7;j++)
        {
            cout<<" ";
            if(j>=5-i && j<=3+i && j>=i-3 && j<=11-i)
            {
                cout<<k;
                j<4?k++:k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}