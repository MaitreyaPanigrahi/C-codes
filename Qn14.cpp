# include<iostream>
using namespace std;
int main()
{
    int no_class_held;
    cin>>no_class_held;
    int no_class_attended;
    cin>>no_class_attended;
    int percentage=(no_class_attended*100)/no_class_held;
    if(percentage>=75)
    {
        cout<<"Allowed to sit in Exam"<<endl;
    }
    else
    {
        cout<<"Not allowed to sit in Exam"<<endl;
    }
}