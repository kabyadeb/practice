
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int x,c1=0,c2=0;
        cin>>x;
        int v[x];
        for(auto u:v)
        {
            cin>>u;
            if(u>=0) c1=c1+u;
            else c2=c2+u;
        }
        if(c1<c2)
        cout<<abs(c1)-abs(c2)<<endl;
        else cout<<abs(c2)-abs(c1)<<endl;
    }

}
