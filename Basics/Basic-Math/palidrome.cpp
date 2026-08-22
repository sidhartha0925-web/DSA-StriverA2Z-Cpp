/*Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.*/
//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void palindrome(int n)
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
    if(n==rev/10)
    cout<<"it is palidrome"<<n<<" "<<rev;
    else
    cout<<"it is not a palidrome"<<n<<" "<<rev;
}
int main()
{
    long long n;
    cout<<"enter the value";
    cin>>n;
    palindrome(n);
    return 0;
}
