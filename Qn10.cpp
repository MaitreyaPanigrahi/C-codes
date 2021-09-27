# include<iostream>
using namespace std;
int main()
{
    int age,salary;
    cin>>age>>salary;
    if(age>5)
    {
        cout<<salary+(0.05*salary)<<endl;
    }
    else{
        cout<<"You dont avail any Bonus as ur year of experience is less than 5 years"<<endl;
    }
}