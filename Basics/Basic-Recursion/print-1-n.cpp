#include<bits/stdc++.h>
using namespace std;
void recursivenoprint(int x,int n)
{
    if(x<n)
    {
        return;
    }
    else
    {
        cout<<n<<" ";
        recursivenoprint(x,++n);
    }
}
int main()
{
    int no;
    cout<<"enter the value ";
    cin>>no;
    recursivenoprint(no,1);
    return 0;
}
