# include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;
    int b=4;

    // int *aptr=&a;
    // int *bptr=&b
    swap(&a,&b);// WE CAN  PASS &a and &b or aptr and bptr
    cout<<a<<" "<<b<<endl;
}