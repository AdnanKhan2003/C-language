// Q.8 Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>
#include <string.h>
typedef struct bankAc{
    int accountNo;
    char name[20];
    char ifscCode[20];
} bank;

int main(){
    bank b1;

    printf("Enter your Account number: \n");
    scanf("%d", &b1.accountNo);
    printf("Enter your Name: \n");
    scanf("%s", b1.name);
    printf("Enter your Account number: \n");
    scanf("%s", b1.ifscCode);

    printf("Account Number = %d \n", b1.accountNo);
    printf("Account Number = %s \n", b1.name);
    printf("Account Number = %s \n", b1.ifscCode);
    return 0;
}