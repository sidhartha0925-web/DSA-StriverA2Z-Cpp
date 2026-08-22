// Problem: Print a symmetric void pattern
// Input: n = 5
// Output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

//sidhartha thota

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j,inis=0;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*(i-1);j++)
        {
            cout<<" ";
        }
         for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    print(n);

    return 0;
}
