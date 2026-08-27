// Problem: Print a half diamond star pattern
// Input: n = 5
// Output:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// sidhartha thota

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
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
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
    cout<<"enter the no of rows: ";
    cin>>n;
    print(n);
    return 0;
}