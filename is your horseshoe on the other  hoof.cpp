#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int >colors;
    int horseshoe;
    for(int i=0;i<4;i++)
    {
        cin>>horseshoe;
        colors.insert(horseshoe);
    }
    int num =colors.size();
    cout<<4-num<<endl;
    
}