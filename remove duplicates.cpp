#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    set<int>s1;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        s1.insert(a);
    }
    cout<<s1.size()<<endl;
    for(auto i:s1)
    cout<<i<<" ";
    cout<<endl;
}
