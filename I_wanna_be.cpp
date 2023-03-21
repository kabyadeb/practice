#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,numb=0,q,c=0;
    vector<int>v;
    cin>>n>>p;
    for(int i=0;i<p;i++)
    {
        cin>>numb;
        v.push_back(numb);
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>numb;
        v.push_back(numb);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<p+q;i++)
    {
        if(v[i]!=v[i+1])
        c++;
    }if(c==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}