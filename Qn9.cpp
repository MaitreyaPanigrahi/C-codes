# include<iostream>
using namespace std;
int main()
{
    int quantity;
    cin>>quantity;
    int cost=quantity*100;
    if(cost>1000)
    {
        cout<<cost-(0.1*cost)<<endl;
    }
    else
    {
        cout<<"No discount avails "<<endl;
    }
    
}