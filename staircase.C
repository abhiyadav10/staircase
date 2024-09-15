#include <stdio.h>

int main() {
    // Your code goes here
    int i,n,j;

    printf("Enter the number of stair ou want\n");
    scanf("%d",&n);

if(n>0 && n<=100)
   { for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
   }
  else
   printf("The number you have enter should be greater than 0 and less than 101\n");
    return 0;
}