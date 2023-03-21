//https://codeforces.com/problemset/problem/122/A
#include <iostream>
using namespace std;

int main() {
        int n,c=0;
        cin>>n;
        int a[]={4,7,47,74,77,44,777,747,774,477,447,444,474,744};
        int xx=(sizeof(a)/a[0]);
        for(int i=0;i<xx;i++)
        {
            if(n%a[i]==0) {
                c=1;
                break;
            }
        }
        if(c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
    
    
    
