#include <stdio.h>
int main(){
    int number;
    int evenSum = 0;
    int oddSum = 0;

    printf("Please Enter Your Number (0 To Stop):");
    if(scanf("%d", &number) != 1){
        return 1;
    }

    while(number != 0){
        printf("Next Number (0 To Stop):");
        if(number % 2 == 0){
            evenSum += number;
        }
        else{
            oddSum += number;
        }

        if(scanf("%d", &number) != 1){
            break;
        }

    }

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d", oddSum);
    return 0;

}
