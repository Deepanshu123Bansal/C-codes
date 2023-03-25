#include<stdio.h>
int main()
{
  char ch;
  printf("enter ch");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      {
        printf("vowels");
      }
      break;
    default:
      {
        printf("consonant");
      }
      break;
  }
  return 0;
}
      
