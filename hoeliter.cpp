#include <iostream>
using namespace std;

int main() {
   int a[10]={},a1;
   cin>>a1;
   string s;
   cin>>s;
  
   for(int i=0;i<a1;i++)
   {
      if(s[i]=='L')
     {
         for(int j=0;j<10;j++)
         {
            if(a[j]==0){ a[j]=1;
             break;
            }
         }
     }
      else if(s[i]=='R')
     {
         for(int j=9;j>=0;j--)
         {
            if(a[j]==0){ a[j]=1;
               break;
            }
         }
     }
      else
      {
         a[s[i]-'0']=0;
      }
   }
         
   for(int i=0;i<10;i++)
   {
      cout<<a[i];
   }
}
