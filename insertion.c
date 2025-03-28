#include<stdio.h>
int main(){
   int arr[10] = {10,3,6,8,9,3,5};
   int i , size = 10 , pos , x=30;
   for(i=0;i<size;i++){
     printf("Array Is : arr[%d] = %d\n",i, arr[i]);
   }


    printf("Select an position: ");
    scanf("%d", &pos);

    for(i = size; i>= pos - 1;i--){
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = x;
    for(i=0;i<size;i++){
     printf("After insertion the Array Is : arr[%d] = %d\n",i, arr[i]);
   }


 return 0;
}

