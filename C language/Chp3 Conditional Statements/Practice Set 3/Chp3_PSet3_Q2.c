// Q.2 Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

// #include<stdio.h>

// int main(){
//     float total;
//     int physics,
//     chemistry,
//     mathematics;
//     printf("Enter your Physics marks\n");
//     scanf("%d", &physics);
//     printf("Enter your Chemistry marks\n");
//     scanf("%d", &chemistry);
//     printf("Enter your Mathematics marks\n");
//     scanf("%d", &mathematics);
//     total = (physics + chemistry + mathematics) / 3;
//     if ((total < 40) || (physics < 33) || (chemistry < 33) || (mathematics < 33))
//     {
//         printf("Your total percentage is %f and you are fail\n", total);
//     }
//     else
//     {
//         printf("Your total percentage is %f and you are pass\n", total);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int English,
//     Maths,
//     Science,
//     HistoryCivics,
//     Geography,
//     Hindi,
//     Urdu,
//     Marathi;
//     // Deeniyat;
//     float total;

//     printf("Enter your English marks\n");
//     scanf("%d", &English);
//     printf("Enter your Maths marks\n");
//     scanf("%d", &Maths);
//     printf("Enter your Science marks\n");
//     scanf("%d", &Science);
//     printf("Enter your HistoryCivics marks\n");
//     scanf("%d", &HistoryCivics);
//     printf("Enter your Geography marks\n");
//     scanf("%d", &Geography);
//     printf("Enter your Hindi marks\n");
//     scanf("%d", &Hindi);
//     printf("Enter your Urdu marks\n");
//     scanf("%d", &Urdu);
//     printf("Enter your Marathi marks\n");
//     scanf("%d", &Marathi);
//     // printf("Enter your Deeniyat marks\n");
//     // scanf("%d", &Deeniyat);
//     total = (English + Maths + Science + HistoryCivics + Geography + Hindi + Urdu + Marathi) / 8;

//     if ((total <= 35) || (English <= 35) || (Maths <= 35) || (Science <= 35) || (HistoryCivics <= 35) || (Geography <= 35) || (Hindi <= 35)  || (Urdu <= 35) || (Marathi <= 35))
//     {
//         printf("Your total marks is %f and you're fail\n", total);
//     }
//     else if((total >= 35) || (English >= 35) || (Maths >= 35) || (Science >= 35) || (HistoryCivics >= 35) || (Geography >= 35) || (Hindi >= 35)  || (Urdu >= 35) || (Marathi >= 35)){
//         printf("Your total marks is %f and you're pass\n", total);
//     }
//     else{
//         printf("Please enter your marks correctly\n");
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int English,
    Maths,
    Science,
    HistoryCivicsGeography,
    HindiUrdu,
    Marathi;
    // Deeniyat;
    float total;

    printf("Enter your English marks\n");
    scanf("%d", &English);
    printf("Enter your Maths marks\n");
    scanf("%d", &Maths);
    printf("Enter your Science marks\n");
    scanf("%d", &Science);
    printf("Enter your HistoryCivicsGeography marks\n");
    scanf("%d", &HistoryCivicsGeography);
    printf("Enter your HindiUrdu marks\n");
    scanf("%d", &HindiUrdu);
    printf("Enter your Marathi marks\n");
    scanf("%d", &Marathi);
    // printf("Enter your Deeniyat marks\n");
    // scanf("%d", &Deeniyat);
    total = (English + Maths + Science + HistoryCivicsGeography + HindiUrdu+ Marathi) / 6;

    if ((total <= 35) || (English <= 35) || (Maths <= 35) || (Science <= 35) || (HistoryCivicsGeography <= 35) || (HindiUrdu <= 35) || (Marathi <= 35))
    {
        printf("Your total marks is %f and you're fail\n", total);
    }
    else if((total >= 35) || (English >= 35) || (Maths >= 35) || (Science >= 35) || (HistoryCivicsGeography >= 35) || (HindiUrdu >= 35) || (Marathi >= 35)){
        printf("Your total marks is %f and you're pass\n", total);
    }
    else{
        printf("Please enter your marks correctly\n");
    }
    return 0;
}