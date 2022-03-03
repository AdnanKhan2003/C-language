#include <stdio.h>

int main(){
    int i = 0;
    int skip = 5;
    while (i < 10)
    {
        i++;
        if (i != 5)
        {
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
    
    return 0;
}