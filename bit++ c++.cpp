#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,x(0);
    cin>>t;
    string a;
    while(t--)
    {
cin>>a;
        if (a[1]=='+')
        {
            ++x;

        }
        else
        {
            --x;
        }
    }
    cout<<x<<endl;

    return 0;
}
