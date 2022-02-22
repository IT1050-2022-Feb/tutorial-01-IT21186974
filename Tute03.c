/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int n=0; //declare and initialize variable
  
  printf("Enter number : ");
  scanf("%d",&n);//scan and store number

  //repetition for calculte sum
  for(int x=n-1;x>=1;x--){
    n+=x;
  }
  
  //display sum
  printf("Sum = %d",n);
  
  return 0;
}

