# include<iostream>
using namespace std;
int main()
{
    int no_class_held;
    cin>>no_class_held;
    int no_class_attended;
    cin>>no_class_attended;
    char medical_cause;
    cin>>medical_cause;
    
    int percentage=(no_class_attended*100)/no_class_held;
    if(percentage<=75)
    {
        if(medical_cause=='Y')
    {
        cout<<"AlLowed in Exam"<<endl;
    }
    else if(medical_cause=='N')
    {
        cout<<"Not allowed in exam"<<endl;
    }
    }
    else
    {
        cout<<"Not allowed to sit in Exam"<<endl;
    }
    

}