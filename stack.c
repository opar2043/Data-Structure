/*
          Bubble Sort
          Name : Rijoan Rashid Opar
          ID : CSE2302029019
*/

#include<stdio.h>
#define CAPACITY  3
int stack[CAPACITY];
int top = -1;
void push(int x){
  if(top < CAPACITY - 1){
    top = top + 1;
    stack[top] = x;

    printf("Added The Item: %d\n", x);
  } else{
    printf("No More Space Left\n");
  }
}

void pop(){
  if(top >= 0){
    int value = stack[top];
    top = top - 1;
    printf("Item Removed: %d\n", value);
    return value;
  }
  printf("There is no Item Here\n");
  return -1;
}

void peek(){
  if(top >= 0){
    printf("Item In Peek: %d\n", stack[top]);
    return stack[top];

  }
  printf("NOOO! Item at Peek\n");
  return -1;
}

int main(){

    peek();
    push(10);
    push(20);
    pop();
    push(30);
    peek();
    push(40);
    push(55);
 return 0;
}
