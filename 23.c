#include "stdio.h"

int main()
{
  float salary,tax;
  printf("Input salary = ");
  scanf("%f" ,&salary);
  if (salary < 15000)
  {
    tax = salary*10/100;
    printf("tax = %.2f",tax);
  }
  else 
  {
    tax = salary*15/100;
    printf("tax = %.2f",tax);
  }
  
}