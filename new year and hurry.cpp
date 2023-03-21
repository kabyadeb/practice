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
    int n,x,y=0;
    cin>>n>>x;
    x=(4*60)-x;
   
    for(int i=1;i!=0;i++)
    {
        y=y+5*i;
        if(y>x)
        {
            
            y=i-1;
            break;
        }

        
    }if(y>n) cout<<n<<nl;
    else cout<<y<<nl;
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
//    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
