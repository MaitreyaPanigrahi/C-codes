# include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void waveSort(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr,i,i+1);
        }
    }
}
int main()
{
    int arr[]={6,2,3,5,7,1,4,9};
    waveSort(arr,8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}