# include<bits/stdc++.h>
using namespace std;
bool issafe(int **arr,int x,int y,int n, int m)
{
    if(x<n && y<m && arr[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int **arr,int x,int y,int n,int m, int **solarr)
{
    if((x==(n-1)) && (y==(m-1)))
    {
        solarr[x][y]=1;
        return true;
    }
    if(issafe(arr,x,y,n,m))
    {
        solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,m,solarr))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,m,solarr))
        {
            return true;
        }
        solarr[x][y]=0;
        return false;
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **solarr=new int *[n];
    for(int i=0;i<n;i++)
    {
        solarr[i]=new int[n];
        for(int j=0;j<m;j++)
        {
            solarr[i][j]=0;
        }
    }
    if(ratinmaze(arr,0,0,n,m,solarr))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<solarr[i][j];
            }
            cout<<endl;
        }
    }


}