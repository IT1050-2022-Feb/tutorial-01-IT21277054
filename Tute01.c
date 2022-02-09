/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float mark , total = 0 , avg ;//initializing variables

  for(int i = 0 ; i < 2 ; i++){//creating a loop to reduce code repetition 
    
    //taking an input from the user
    printf("Enter mark %d : ",i+1);
    scanf("%f", &mark);

    total += mark;//calculating the total

  }

  avg = total / 2;//calculating the average

  printf("\nAverage mark of students is %.2f\n", avg);//printing the average

  return 0;
}
