// Problem: Print an increasing letter triangle
// Input: n = 5
// Output:
// A
// AB
// ABC
// ABCD
// ABCDE
// sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch;
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
