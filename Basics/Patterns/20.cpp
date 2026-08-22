// Problem: Print a symmetric butterfly pattern
// Input: n = 5
// Output:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=((n*2)-(i*2));j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=(n-1);i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"*";
        }
        for(j=1;j<=(i*2);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(n-i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<" enter a number";
    cin>>n;
    print(n);
    return 0;
}
