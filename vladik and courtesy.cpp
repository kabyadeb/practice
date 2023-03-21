#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int a,b,i=0;
    cin>>a>>b;
   for(i=1;i!=0;i++)
   {
    if(i%2==0) b=b-i;
    else if(i%2!=0) a=a-i;
    cout<<a<<" "<<b<<endl;
    if(a<0) {
        cout<<"Vladik"<<endl;
        break;
    }
    if(b<0) {
        cout<<"Valera"<<endl;
        break;
    }
   }

//    for(j=0;j!=-1;j++)
//    {
//     if(b<=((j+1)*j)) break;
//     else continue;
//    }
//    cout<<i<<" "<<j<<endl;
   
//    if(a>b) 
//     else 
}