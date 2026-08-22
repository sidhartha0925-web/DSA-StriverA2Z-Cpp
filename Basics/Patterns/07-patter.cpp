// Problem: Print a star pyramid
// Input: n = 5
// Output:
//     *
//    ***
//   *****
//  *******
// *********
//--sidhart thota--

#include<bits/stdc++.h>
using namespace std;        
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
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