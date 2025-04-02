// Rijoan Rashid Opar
// CSE2302029019
// Queue in C

#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

 int ourQueue[CAPACITY];
 int front = 0 , rear = -1 ;
 int totalItem = 0;

bool isFull() {
    return totalItem == CAPACITY;
}

bool isEmpty() {
    return totalItem == 0;
}



 void enqueue(int item){
   if(isFull()){
     printf("Queue is full\n");
     return ;
   }

   rear = (rear + 1)%CAPACITY ;
   ourQueue[rear] = item ;
   totalItem++ ;
   printf("Enqueued: %d\n", item);
 }

  void dequeue(){
   if(isEmpty()){
     printf("Queue is Empty\n");
     return ;
   }

   front = (front + 1) % CAPACITY;
   totalItem--;
   printf("Dequeued: %d\n", ourQueue[front]);
   return 0;
 }

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    return 0;
}
