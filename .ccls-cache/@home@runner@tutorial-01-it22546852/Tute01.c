/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum;
  float Avarege;
  printf("Enter the mark1:");
  scanf("%d",&mark1);

  printf("Enter the mark2:");
  scanf("%d",&mark2);

  sum = mark1 + mark2;
  Avarege = sum/2;

  printf("Total marks:%d",sum);
  printf("\nAvarege : %.2f",Avarege);
  
  return 0;
}

