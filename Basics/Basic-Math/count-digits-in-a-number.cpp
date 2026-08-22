/*Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789              
Output: 4
Explanation: The number 7789 has 4 digits*/

#include<bits/stdc++.h>
using namespace std;
void countval(int n)
{
    int count=0,x=n;
    if(n>0)
    {
        while(x>0)
        {
            count++;
            x=x/10;
        }
    }
    cout<<count;
}
int main()
{
    long long n;
    cout<<"enter the value";
    cin>>n;
    countval(n);
    return 0;
}
