// Problem: Print an increasing number triangle
// Input: n = 5
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// sidhartha thota

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j,up=0;
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
         up++;
         cout<<up<<" ";
     }
     cout<<endl;
    }
}

int main()
{
    cout<<"enter a number";
    int n;
    cin>>n;
    print(n);
    return 0;
    
}
