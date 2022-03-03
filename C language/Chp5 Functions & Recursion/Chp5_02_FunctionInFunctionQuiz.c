#include <stdio.h>
void goodMorning();
void goodEvening();
void goodAfternoon();
void goodNight();

int main(){
    int a, b;
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning Coder \n");
    goodEvening();
}
void goodEvening(){
    printf("Good Evening Coder \n");
    goodAfternoon();
}
void goodAfternoon(){
    printf("Good Afternoon Coder \n");
    goodNight();
}
void goodNight(){
    printf("Good Night Coder \n");
}
