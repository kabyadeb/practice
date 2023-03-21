#include <iostream>
using namespace std;

int main() {
    string s,s2="hello";
    cin>>s;
    int p=0,c=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]==s2[p])
       {
            c++;
            p++;
       } 
    }if(c==s2.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
