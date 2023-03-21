#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,c1=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<(2*n);i++)
        {
            cin>>a[i];
            if(a[i]%2!=0) c++;
            else c1++;

        }
        if(c!=c1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}