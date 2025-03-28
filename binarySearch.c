/*
          Name : Rijoan Rashid Opar
          ID : CSE2302029019

*/
#include<stdio.h>
int main()
{
    int a[] = {1,3,5,6,7,9,10}; //must be a sorted array
    int srcItem = 3;
    int middle , right = 6 , left = 0 ;


    while (left <= right){
        middle = (right + left) / 2;
        if(a[middle] == srcItem){
        printf("Item Found At Position : %d\n", middle);
        return 0;
    }else if(a[middle] < srcItem ){
        left = middle + 1;
    }else {
        right = middle - 1;
    }
    }
    printf("Item Not Found\n");
    return 0;
}



