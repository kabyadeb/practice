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
    int a[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
    for (int i = 0; i < 9; i++) { a[i] = a[i + 1]; }
    for (int i = 0; i < 10; i++) {
         cout<<a[i]<<endl;
          }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
