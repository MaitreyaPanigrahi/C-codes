# include<iostream>
using namespace std;
int main()
{
    char character;
    cin>>character;
    if(character>='a'&& character<='z')
    {
        cout<<"lower case"<<endl;
    }
    else if(character>='A'&& character<='Z')
    {
        cout<<"Upper case"<<endl;
    }
    else
    {
        cout<<"Invaid Input"<<endl;
    }
}