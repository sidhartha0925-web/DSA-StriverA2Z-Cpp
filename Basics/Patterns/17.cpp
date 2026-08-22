// Problem: Print an alpha hill pattern
// Input: n = 5
// Output:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

//sidhartha thota

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
   for(i=1;i<=n;i++)
   {
       for(j=0;j<=(n-i);j++)
       {
           cout<<" ";
       }
       for(char k='A';k<'A'+i;k++)
       {
           cout<<k;
       }
       for(char k='A'+(i-2);k>='A';k--)
       {
           cout<<k;
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
