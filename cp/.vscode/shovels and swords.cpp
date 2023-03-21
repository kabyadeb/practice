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
    int a,b;
    cin>>a>>b;
    // sort(a,b);
    // int sm=a;
    // int lr=b;
    // for(int i=0;i==(a!=0||b!=0||c!=0);++i) 
    // {
    //     if(lr>sm)//min number
        
    // }
    int sum=a+b;
    if(a==0||b==0) cout<<0;
    else cout<<min(sum/3,min(a,b));
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
        cout<<nl;
    }
    return 0;
}
