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
    int key;
    cin>>key;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            f=1;
            cout<<i<<endl;
        }
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }
}