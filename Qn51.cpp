# include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    if(num==0||num==1)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<=num;i++)
        {
            fact*=i;
        }
    }
    return fact;

}
int main()
{
    int num;
    cin>>num;
    int c=factorial(num);
    cout<<c<<endl;
}
