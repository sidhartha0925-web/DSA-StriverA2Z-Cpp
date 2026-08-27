// Problem: Print a right-angled triangle star pattern
// Input: n = 4
// Output:
// *
// **
// ***
// ****
//sidhartha thota

#include<bits/stdc++.h>
using namespace std;
void print (int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
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