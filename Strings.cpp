# include<iostream>
# include<algorithm>
# include<string>
using namespace std;
int main()
{
    // string str;
    // cin>>str;
    // cout<<str;

    // string str(5,'r');
    // cout<<str;

    // string str;
    // getline(cin,str); // IF IS USE ONLY CIN TO INPUT THEN 
    //THE CHARACTERS AFTER THE SPACES WONT BE VISIBLE.
    

    // cout<<str<<endl;

    // string s1="fam";
    // string s2="ily";
    // // s1.append(s2); // wE can also do cout<<s1+s2<<endl; which 
    // // // outputs to family
    // // cout<<s1<<endl;

    // cout<<s1[1]<<endl;


    // string abc=" a,sjdhlkjd,shb,sdb,sdlhsdlshdf";
    // abc.clear();
    // cout<<abc<<endl;

    // string s1="abc";
    // // string s2="xyz";
    // string s2="abc";
    // if(s2.compare(s1)==0)
    // {
    //     cout<<"They both are equal."<<endl;

    // }
    // else
    // {
    //     cout<<"They both are not equal"<<endl;
    // }
    // cout<<s2.compare(s1)<<endl;

    // string s1="abc";
    // cout<<s1<<endl;
    // s1.clear();
    // if(s1.empty())
    // {
    //     cout<<"The string is empty"<<endl;
    // }
    // else{
    //     cout<<"The string is not empty"<<endl;
    // }

    // string s1="nincompoop";
    // s1.erase(3,3);
    // cout<<s1<<endl;
    // cout<<s1.find("com")<<endl;
    // s1.insert(2,"lol");
    // cout<<s1.length()<<endl;

    // for(int i=0;i<s1.length();i++)
    // {
    //     cout<<s1[i]<<endl;
    // }

    // string s=s1.substr(6,4);
    // cout<<s<<endl;

    // string s1="786";
    // int x=stoi(s1); // string to integer function
    // cout<<x+2<<endl;

    // int x=786;
    // cout<<to_string(x)+"2"<<endl;

    string s1="zyxcba";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;



}