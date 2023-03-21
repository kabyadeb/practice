#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int x,k;
    cin>>x>>k;
    int a[x],c=0;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }int b[x];
    for(int i=0;i<x;i++)
    {
         b[i]=i+1;
    }
    // for(int i=1;i<=x;i++)
    // {
    //    // cout<<a[i];
    //     cout<<"n"<<b[i]<<endl;
    // }
    for(int i=0;i<x;i++)
    {

        if(b[i]-a[i]<0)
        {
            c++;
        }
    }cout<<c<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
