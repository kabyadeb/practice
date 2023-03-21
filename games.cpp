#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  int a[2*t],c=0;
  for(int i=0;i<(t*2);i++)
     cin>>a[i];
  
  for(int i=0;i<(t*2);i++)
  {
        for(int j=i+1;j<(t*2);j=j+2)
        if(a[i]==a[j]) c++;

  }cout<<c<<endl;
}
