#include<bits/stdc++.h>
using namespace std;
void hashing()
{
    int n,i,max_freq,max_element=0,min_freq=0,min_element;
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
    for(auto it:hash)
    {
        int element=it.first;
        int freq=it.second;
        if(freq>max_freq)
        {
            max_freq=freq;
            max_element=element;
        }
    }
    
cout<<"max element and max freq is"<<max_element<<"-->"<<max_freq;
}
int main()
{
    hashing();
    return 0;
}
