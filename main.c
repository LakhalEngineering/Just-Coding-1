# include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


int array_global[5]= {1,2,3,4,5};

int * sorting_solution(int ar[], int N){
    int arr_fun[5];
    array_global[5] = ar[5]; 

    return array_global;
}


int main()
{
	int * p;
    int array[5] = {5,8,7,9,8};
    int length = sizeof(array)/sizeof(int);
    p = sorting_solution(array,length);
    printf("__________ array________\n");
    for(int i=0;i<5;i++){
        printf("l'idex : %d value : %d\n",i, array[i]);
    }
    *(p + 2)=0;
    printf("__________pointer________\n");
    for (int j=0; j<5; j++){
        printf("l'index : %d value :%d\n", j, *(p+j));

    }
    printf("Length of array : %d\n", length);
    

}