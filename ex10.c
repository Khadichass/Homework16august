#include <stdio.h>

int main(){
  int year;

  printf("Enter a year:");

  scanf("%d",&year);
  if (year % 4 == 0 && year % 100 !=0)
  {
    printf("%d year is leap year\n",year)
  }else
  {
    printf("%d year is not leap year\n",year)
  }
  
}