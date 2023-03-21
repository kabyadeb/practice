#include <bits/stdc++.h>
//unsolved problem 
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int n,q,sum1=0;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i+1]+=a[i];
        cout<<a[i];
        
    }//cout<<"-------"<<sum1<<nl;
    // while(q--)
    // {   
    //     int l,r,k,sum=sum1;
    //     cin>>l>>r>>k;
    //     for(int j=l;j<=r;j++)
    //     {
    //         sum=sum-a[j];
    //         //cout<<"j ;:"<<a[j]<<" sum ::"<<sum<<nl;
    //     }
    //     sum+=((r-l+1)*k);
    //      if(sum%2==0) cout<<"NO"<<nl;
    //      else cout<<"YES"<<nl;

    // }
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
