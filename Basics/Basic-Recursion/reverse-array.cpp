#include<bits/stdc++.h>
using namespace std;
void reversearray(int a[],int x,int y)
{
    if(x>=y)
    return;
    else
    {
        a[x]=a[y]+a[x];
        a[y]=a[x]-a[y];
        a[x]=a[x]-a[y];
        reversearray(a,++x,--y);
    }
}
int main()
{
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int a[size];
    cout<<"enter the element in the array";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    reversearray(a,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}

