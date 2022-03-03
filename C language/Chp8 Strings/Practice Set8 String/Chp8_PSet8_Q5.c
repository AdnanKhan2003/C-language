// Q.5 Write your own version of strcpy function from <string.h>

#include <stdio.h>
void strcopy(char *target, char *source);

int main(){
    char target[34];
    char source[34] = "MaiNahiBataunga";

    strcopy(target, source);
    printf("The value of target is %s \n", target);
    return 0;
}

void strcopy(char *target, char *source){
    int i = 0;
    while (*source != '\0')
    {
        target[i] = *source;
        source++;
        i++;
    }
    target[i] = '\0';
}
// void strcopy(char *target, char *source){
//     char *ptr = target;
//     while (*source != '\0')
//     {
//         *target = *source;
//         target++;
//         source++;
//     }
//     *target = '\0';
// }