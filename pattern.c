//pattern 1
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

output:-
enter n 5
*
**
***
****
*****
 
  
//pattern 2 
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

ouput:-
enter n 5
*****
****
***
**
*

//pattern 3
#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter n");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=i;j<=n-1;j++)
     {
         printf(" ");
     }
     for(k=i;k>=1;k--)
     {
         printf("*");
     }
     printf("\n");
 }
  return 0;
}

output:-
  enter n5
    *
   **
  ***
 ****
*****   


//pattern 4
#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter n");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=i-1;j>=1;j--)
     {
         printf(" ");
     }
     for(k=i;k<=n;k++)
     {
         printf("*");
     }
     printf("\n");
 }
  return 0;
}


output:-
 enter n5
  *****
   ****
    ***
     **
      *

//pattern 5
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%d ",i);
    }
    printf("\n");
  }
  return 0;
}

output:-
enter n5
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 
  
//pattern 6
#include<stdio.h>
int main()
{
  int i,j,n,number=1;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%d ",number);
     number++;
    }
    printf("\n");
  }
  return 0;
}

output:-
 enter n5
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 




