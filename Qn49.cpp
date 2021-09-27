# include<iostream>
# include<cmath>

using namespace std;
void isPrime(int num)
{
    int f=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"Not prime";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Prime"<<endl;
    }
}
int main()
{
    int num;
    cin>>num;
    isPrime(num);
}