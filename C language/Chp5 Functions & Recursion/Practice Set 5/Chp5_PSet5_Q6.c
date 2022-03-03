// Q. 6 Write a recursive function to calculate the sum of first n natural numbers.

#include <stdio.h>
int sum(int num);

int main(){
  int number = 10, add;
  add = sum(number);
  printf("The value of sum %d is %d \n", number, add);
}

int sum(int num){
  if(num == 0){
    return 0;
  }
  else{
    return sum(num-1) + num;
  }
}