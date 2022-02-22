/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declare variables
  double mark1, mark2;
  double average=0;

  //scanning and storing data
  printf("Input subject 1 marks : ");
  scanf("%lf",&mark1);
  printf("Input subject 2 marks : ");
  scanf("%lf",&mark2);

  //calculation for average
  average = (mark1 + mark2)/2 ;

  //display average
  printf("%.2lf", average);
  
  return 0;
}

