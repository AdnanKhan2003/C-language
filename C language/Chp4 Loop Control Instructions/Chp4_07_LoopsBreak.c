#include <stdio.h>

int main(){
    int i;
    for(i = 0; i <= 10; i++){
        printf("The value of i is %d\n", i);
        if (i == 6)
        {
            break;
        }
    }
    return 0;
}

