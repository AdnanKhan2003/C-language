#include <stdio.h>

int main()
{
    int English, Mathematics, Science, HistoryCivicsGeography, HindiUrdu, Marathi, total;
    printf("Enter your English marks \n");
    scanf("%d", &English);
    printf("Enter your Mathematics marks \n");
    scanf("%d", &Mathematics);
    printf("Enter your Science marks \n");
    scanf("%d", &Science);
    printf("Enter your HistoryCivicsGeography marks \n");
    scanf("%d", &HistoryCivicsGeography);
    printf("Enter your HindiUrdu marks \n");
    scanf("%d", &HindiUrdu);
    printf("Enter your Marathi marks \n");
    scanf("%d", &Marathi);
    total = (English + Mathematics + Science + HistoryCivicsGeography + HindiUrdu + Marathi) / 6;
    if ((total < 35) || (English < 35) && (Mathematics < 35) && (Science < 35) && (HistoryCivicsGeography < 35) && (HindiUrdu < 35) && (Marathi < 35))
    {
        printf("Your marks is %d and you're fail \n", total);
    }
    else if ((total > 100) || (English > 100) && (Mathematics > 100) && (Science > 100) && (HistoryCivicsGeography > 100) && (HindiUrdu > 100) && (Marathi > 100))
    {
        printf("Enter your marks correctly \n");
    }
    
    else{
        printf("Your marks is %d and you're pass \n", total);
    }
    return 0;
}