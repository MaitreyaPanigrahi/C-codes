# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arrsum=0;
    for(int i=0;i<n;i++)
    {
        arrsum=arrsum+arr[i];
    }
    int a=0;
    if(arrsum%2==0)
    {
       a=2;
    }
    else
    {
        a=1;
    }
    cout<<a<<endl;
}