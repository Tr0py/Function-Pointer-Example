#include <stdio.h>
#include <stdlib.h>

typedef int *ptrInt(int, int);

int *Add(int i, int j){
    int *ret = (int*)malloc(sizeof(int));   // memory leak
    *ret = i+j;
    return ret;
}

int *Multiply(int i, int j){
    int *ret = (int*)malloc(sizeof(int));   // memory leak
    *ret = i*j;
    return ret;
}

int main()
{
    ptrInt *ptr1 = Add;
    ptrInt *ptr2 = Multiply;

    printf("%d\n", *ptr1(2,3)); //will print 5
    printf("%d\n", *ptr2(2,3)); //will print 6
    return 0;
}
