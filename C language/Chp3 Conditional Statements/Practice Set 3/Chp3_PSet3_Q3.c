// Q.3 Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab	Tax
// 2.5L-5.0L	5%
// 5.0L-10.0L	20%
// Above 10.0L	30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include<stdio.h>

int main(){
    int income,
    tax = 0;
    printf("Enter your salary\n");
    scanf("%d", &income);

    if ((income > 250000) && (income < 500000))
    {
        tax = tax + 0.05 * (income - 250000);
        printf("You've to pay tax of Rs. %d till 31st March\n", tax);
    }
    else if ((income > 500000) && (income < 1000000))
    {
        tax = tax + 0.20 * (income - 500000);
        printf("You've to pay tax of Rs. %d till 31st March\n", tax);
    }
    else if (income > 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
        printf("You've to pay tax of Rs. %d till 31st March\n", tax);
    }
    else{
        printf("You don't have to pay tax as your income is below Rs. 2,50,000\n");
    }
    return 0;
}