#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(int x=a;x<=b;x++)
      {
         if(x>9){
             if(x%2==0) printf("even\n");
            else {
                printf("odd\n");
                 }
         } 
         else{
              if(x==1) printf("one");
        else if (x==2) {
        printf("two");
        }
        else if (x==3) {
        printf("three");
        }
        else if (x==4) {
        printf("four");
        }
        else if (x==5) {
        printf("five");
        }
        else if (x==6) {
        printf("six");
        }
        else if (x==7) {
        printf("seven");
        }
        else if (x==8) {
        printf("eight");
        }
        else if (x==9) {
        printf("nine");
        } printf("\n");
                 
      }
      
         }
        

    return 0;
}


