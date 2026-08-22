#include<bits/stdc++.h>
using namespace std;
void recursivenoprint(int x)
{
    if(x<1)
    {
        return;
    }
    else
    {
        cout<<x<<" ";
        recursivenoprint(--x);
    }
}
int main()
{
    int no;
    cout<<"enter the value ";
    cin>>no;
    recursivenoprint(no);
    return 0;
}
