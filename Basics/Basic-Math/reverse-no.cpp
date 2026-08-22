/*Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g , 
reverse of 10400 will be 401 instead of 00401.*/

//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void reverse(int n)
{
    int x=n,last=0,rev=0;
    if(x>0)
    {
        while(x>0)
        {
            last=x%10;
            x=x/10;
            rev=(rev+last)*10;
        }
    }
    cout<<"reverse is"<<rev/10;
}
int main()
{
    long long n;
    cout<<"enter the value";
    cin>>n;
    reverse(n);
    return 0;
}
