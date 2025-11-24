#include <stdio.h>
int main(){
    int N, i;

    printf("Please Enter Your Number (Morethan 0):");
    if(scanf("%d", &N) != 1){
        printf("Error no NUMBER...\n");
        return 1;
    }

    if(N < 1){
        printf("Error...\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }
    
    return 0;
}