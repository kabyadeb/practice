

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin>>t;
    while(t--){
        int m,s,s1=0,k=0;
        cin>>m>>s;
        int a[m];
        for(int i=0;i<m;++i)
        {
            cin>>a[i];
            s1=s1+a[i];
        }
        s1=s1+s;
        for(int i=1;i!=0;++i)
        {
            k=i*(i+1)/2;
            if(k==s1)
            {
                cout<<"YES"<<'\n';
                break;
            }
            else if(k>s1){
            cout<<"NO"<<'\n';
            break;
            }
            else continue;
        }
        //if((s-s1)>0)
       // else cout<<"NO"<<'\n';
    }

}
