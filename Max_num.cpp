# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main()
{
    string s1="64648392564";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;
}