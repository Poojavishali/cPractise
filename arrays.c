//enter marks in an array
#include<stdio.h>
int main(){
    int marks[3];
    printf("enter phy: ");
    scanf("%d",&marks[0]);

    printf("enter che: ");
    scanf("%d",&marks[1]);

    printf("enter bio: ");
    scanf("%d",&marks[2]);

    printf("phy= %d,che= %d,bio= %d",marks[0],marks[1],marks[2]);
    return 0;
}

