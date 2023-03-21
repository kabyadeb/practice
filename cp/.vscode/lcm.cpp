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
    int n;
    cin>>n;
    if(n%2==0)cout<<n/2<<" "<<n/2<<nl;
    else{
        if(n==3){
            cout<<1<<" "<<2<<nl;
            return;
        }
        int p,q;
        for (int i =n/2+1; i>=1; i-=2)
        {
            if(lcm(i,n-i)==n-i){
                p=i;
                q=n-i;
            break;
            }
        }
        cout<<p<<" "<<q<<nl;
        
    }
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
