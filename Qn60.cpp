# include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    int max=a1[0];
    for(int i=1;i<n1;i++)
    {
        if(a1[i]>max)
        {
            max=a1[i];
        }
    }
    int min=a2[0];
    for(int i=0;i<n2;i++)
    {
        if(a2[i]<min)
        {
            min=a2[i];
        }
    }
    cout<<"MAx of array 1 is "<<max<<endl;
    cout<<"Min of array 2 is "<<min<<endl;
    cout<<max*min<<endl;

}