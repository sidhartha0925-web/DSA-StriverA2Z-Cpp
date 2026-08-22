#include<bits/stdc++.h>
using namespace std;
void recurssivename(string name, int no)
{
    if(no==0)
    return ;
    else
    {
        cout<<name<<" ";
        recurssivename(name,--no);
    }
}
int main()
{
    string name;int no;
    cout<<"enter the name";
    cin>>name;
    cout<<endl<<"no of times to repeat ";
    cin>>no;
    recurssivename(name,no);
    return 0;
}
