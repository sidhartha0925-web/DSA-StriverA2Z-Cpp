/*Print all Divisors of a given Number*/
//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
vector<int> divisor(int n)
{
    vector<int> x;int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            x.emplace_back(i);
            if(i!=n/i)
            {
                x.emplace_back(n/i);
                
            }
        }    
    }
    return x;
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    vector<int> x= divisor(n);
    for(int i=0;i< x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    
    return 0;
}
