#include <stdio.h>
int main(){
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    printf("Please enter your listnumber: ");
    if(scanf("%d", &N) != 1){
        return 1;
    }

    printf("Please enter your price and quantit\n");
    for (int i = 0; i < N; i++)
    {
        if(scanf("%f %d", &unitPrice, &quantity) != 2){
            return 1;
        }

        if(unitPrice >= 1000){
            float discount = unitPrice * 10 / 100;
            unitPrice -= discount;
        }
        grandTotal += unitPrice * quantity;
    }
    
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}