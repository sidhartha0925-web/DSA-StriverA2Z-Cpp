
#include<bits/stdc++.h>
using namespace std;
void hashing()
{
    int n,i;
    cout<<"enter the size of the array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> hash;
    for(i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    for(auto it:hash)
    {
        cout<<it.first<<"-->"<<it.second<<" ";
    }
    cout<<endl;
    cout<<"enter the no";
    int no;
    cin>>no;
    while(no--)
    {
        int value;
        cin>>value;
        cout<<hash[value];
    }
}
int main()
{
    hashing();
    return 0;
}
