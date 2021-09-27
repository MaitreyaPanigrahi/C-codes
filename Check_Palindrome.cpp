# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool f=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        cout<<"The word is a Palindrome"<<endl;
    }
    else{
        cout<<"The word is not a palindrome"<<endl;
    }
}

