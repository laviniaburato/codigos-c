#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<10; i++){
    if (array[i] % 2 == 0){
    printf("%d \n", array[i]);
            }
    }
}

