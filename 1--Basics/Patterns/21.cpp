// Problem: Print a hollow square pattern
// Input: n = 5
// Output:
// *****
// *   *
// *   *
// *   *
// *****

//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
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