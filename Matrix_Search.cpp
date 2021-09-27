# include<iostream>
using namespace std;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;
    bool f=false;
    while(r<n && c>0)
    {
        if(mat[r][c]==target)
        {
            f=true;
        }
        if(mat[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(f)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element doesn't exist"<<endl;
    }
}