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
    int a,b,c,d,f=0;
    cin>>a>>b>>c>>d;
   // for(int i=1;i!=0;i++)
    //{
        if(b>d )
        {
            cout<<"-1"<<nl;
           
        }
        else if(b<=d)
        {
            f=d-b;
            a=a+d-b;
           // cout<<f<<" "<<a<<endl;
            if(a<c){
                //cout<<f<<nl;
                cout<<"-1"<<nl;
            }
            else
            {
                f=f+(a-c);
                cout<<f<<nl;
            }
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
