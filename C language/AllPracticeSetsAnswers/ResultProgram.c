#include <stdio.h>
#include <string.h>

int main(){
    int english, maths, science, historyCivicsGeography, hindiUrdu, marathi;
    float total;

    printf("Enter the marks of English: \n");
    scanf("%d", &english);
    printf("Enter the marks of Maths: \n");
    scanf("%d", &maths);
    printf("Enter the marks of Science: \n");
    scanf("%d", &science);
    printf("Enter the marks of History, Civics & Geography: \n");
    scanf("%d", &historyCivicsGeography);
    printf("Enter the marks of Hindi & Urdu: \n");
    scanf("%d", &hindiUrdu);
    printf("Enter the marks of Marathi: \n");
    scanf("%d", &marathi);
    printf("\n\n");

    total = (float)(english + maths + science + historyCivicsGeography + hindiUrdu + marathi) / 6;

    if ((total < 35) && (english < 35) && (maths < 35) && (science < 35) && (historyCivicsGeography < 35) && (hindiUrdu < 35) && (marathi < 35))
    {
        printf("RESULT: \n");
        printf("English = %d \n", english);
        printf("Maths = %d \n", maths);
        printf("Science = %d \n", science);
        printf("History, Civics & Geography = %d \n", historyCivicsGeography);
        printf("Hindi & Urdu = %d \n", hindiUrdu);
        printf("Marathi = %d \n", marathi);
        printf("Your percentage is %.2f and you're fail! \n", total);
    }
    else if ((total > 35) && (english > 35) && (maths > 35) && (science > 35) && (historyCivicsGeography > 35) && (hindiUrdu > 35) && (marathi > 35))
    {
        printf("RESULT: \n");
        printf("English = %d \n", english);
        printf("Maths = %d \n", maths);
        printf("Science = %d \n", science);
        printf("History, Civics & Geography = %d \n", historyCivicsGeography);
        printf("Hindi & Urdu = %d \n", hindiUrdu);
        printf("Marathi = %d \n", marathi);
        printf("Your percentage is %.2f and you're pass!! \n", total);
    }
    else{
        printf("%.2f is an invalid marks! \n", total);
    }
    return 0;
}