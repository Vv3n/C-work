#include <stdio.h>
int main(){
    int number;
    int checkNum;
    do{
        printf("Enter a number (1-10): ");
        if(scanf("%d", &number) != 1){
            printf("Error no number...");
            return 0;
        }
        if(number < 1 || number > 10){
            printf("Error: Value must be 1-10.\n");
        }
        if(number >=1 || number <= 10){
            checkNum = 1;
        }

    } while(number < 1 || number > 10);
    
    if(checkNum){
    printf("Input accept: %d\n", number);
    }
    return 0;
}