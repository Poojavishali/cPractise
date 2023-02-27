#include<stdio.h>
int main(){
    float price=100.00;
    float *ptr=&price;
    printf("ptr=%u",ptr);
    ptr++;
    printf("ptr=%u",ptr);
    return 0;
}