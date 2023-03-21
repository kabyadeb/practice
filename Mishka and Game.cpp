#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    cin>>test;
    int c1=0,c2=0;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y) c1++;
        else if(y>x) c2++;
    }
    if(c1>c2) cout<<"Mishka"<<nl;
    else if(c1==c2) cout<<"Friendship is magic!^^"<<nl;
    else cout<<"Chris"<<nl;
    return 0;
}
