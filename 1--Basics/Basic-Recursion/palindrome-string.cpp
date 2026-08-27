#include<bits/stdc++.h>
using namespace std;
void reversestring(string &s,int x,int y)
{
    if(x>=y)
    return;
    else
    {
        char b;
        b=s[x];
        s[x]=s[y];
        s[y]=b;
        reversestring(s,++x,--y);
    }
}
int main()
{
    string s;
    cout<<"enter the string-- ";;
    cin>>s;
    string og=s;
    reversestring(s,0,s.size()-1);
    cout<<s<<endl;
    if(og==s)
    cout<<"it is palindrome";
    else
    cout<<"it is not palindrome";
}
