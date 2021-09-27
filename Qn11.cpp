# include<iostream>
using namespace std;
int main()
{
    int mark;
    cin>>mark;
    if(mark<25)
    {
        cout<<"F"<<endl;
    }
    else if(mark>=25 && mark<40)
    {
        cout<<"E"<<endl;

    }
    else if(mark>=40 && mark<60)
    {
        cout<<"D"<<endl;
    }
    else if(mark>=60 && mark<70)
    {
        cout<<"C"<<endl;
    }
    else if(mark>=70 && mark<80)
    {
        cout<<"B"<<endl;
    }
    else if (mark>=80 && mark<=100)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"Invalid Input...."<<endl;
    }
    
}