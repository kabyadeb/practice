#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int n, count, p;
    scanf("%d", &p);
    for(int r=0; r<p; r++)
   {scanf("%d", &n);
   count=0;
   for(int i=1;i<=9;i++)
		{
			long long t=i;
			while(n>=t)
			{
				count++;
				t = t*10+i;
				//printf("%d- %d",t,count);
			}
		}
		//printf("%d\n", count);
        }
    return 0;
}
