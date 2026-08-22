// Problem: Print a square pattern of stars
// Input: n = 3
// Output:
// ***
// ***
// ***
// Author: Sidhartha Thota

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the no of rows and colums: ";
    cin>>n;
    print(n);
    return  0;
}