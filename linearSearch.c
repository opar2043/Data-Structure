/*
          Name : Rijoan Rashid Opar
          ID : CSE2302029019
*/

#include<stdio.h>
int main()
{
    int a[10] = {2,34,6,8,19,4};
    int searchItem = 6;
    for(int i = 0; i < 7 ; i++){
        if(searchItem == a[i]){
            printf("Item Found at Index : %d\n", i);
            return 0;
        }
    }
    printf("Item, Not Found");

return 0;
}
