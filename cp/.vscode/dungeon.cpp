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
    int a,b,c,sum=0,y,flag=1;
    cin>>a>>b>>c;
    sum=a+b+c;
    y=sum/9;
    if(sum%9==0 &&(a<y||b<y||c<y))
    {
        flag=0;
    }
    else if(sum%9!=0) flag=0;

    if(flag==1) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    
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
