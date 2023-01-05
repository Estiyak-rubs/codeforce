#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(1<=m && m<=n && n<=16)
    {
        int x=(m*n)/2;
        cout<<x<<endl;
    }
    else
    {
        cout<<"NOT" <<endl;
    }
    return 0;
}
