#include<iostream>
using namespace std;
int main()
{
    int n,count=0; //number of problem
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
