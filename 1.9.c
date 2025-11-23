#include <stdio.h>
int main(){
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;

    printf("Please Enter ZoneCode (1-3) And Weight (Kg)\n");
    if(scanf("%d %f", &zoneCode, &weight_kg) != 2){
        return 1;
    }

    switch(zoneCode){
        case 1:
            if(weight_kg <= 5){
                totalCost = 50;
                break;
            }
            else{
                totalCost = 80;
                break;
            }
        case 2:
            if(weight_kg <= 10){
                totalCost = 150;
                break;
            }
            else{
                totalCost = 250;
                break;
            }
        case 3:
            totalCost = 500;
            break;

        default:
            printf("Invalid Zone Code");
            break;
    }

    if(totalCost > 0.0){
        printf("Total Cost is %.2f bath\n", totalCost);
    }

    return 0;
}