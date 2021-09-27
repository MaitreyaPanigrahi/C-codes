# include<iostream>
# include<algorithm>
# include<string>
using namespace std;
int main()
{
//     // COnvert to upper case
//     string s1="ddjdkjhdkjhk";
//     for(int i=0;i<s1.length();i++)
//     {
//         if(s1[i]>='a' && s1[i]<='z');
//         s1[i]-=32;
//     }
//     cout<<s1<<endl;

//     // convert to lower case

//     string s2="GFGHGFYRSHHDD";
//     for(int i=0;i<s2.length();i++)
//     {
//         if(s2[i]>='A' && s2[i]<='Z')
//         s2[i]+=32;
//     }
//     cout<<s2<<endl;


    string s1="dghgdfjhgdjhfjd";
    string s2="HFDGHHGFDDG";
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<s1<<endl;
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2<<endl;

}

