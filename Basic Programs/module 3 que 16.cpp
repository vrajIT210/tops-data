#include<stdio.h>

int main() 
{
  
  char cname[20];
  printf("enter the Country name\n");
  scanf("%s", cname);
  printf("Abbreviated Name: ");
  printf("%c \n", cname[0]);
  return 0;

}
