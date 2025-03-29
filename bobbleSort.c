/*
          Name : Rijoan Rashid Opar
          ID : CSE2302029019
          Bubble Sort
*/

#include<stdio.h>
int main(){
   int a[] = {2,5,3,1,9,6,12};
   int i , j , size = 7;

   for(i = 0 ; i < size - 1 ; i++){
     for(j = 0 ; j < size - 1 ; j++ )
     if(a[j+1] > a[j]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;

     }
   }

   for(i=0 ; i<size ; i++){
       printf("%d\t", a[i]);
   }
   return 0;
}
