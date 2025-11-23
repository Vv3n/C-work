#include <stdio.h>
int main(){
    int customerType;
    float consumption_kWh;
    float totalBill = 0.0;

    printf("Please Enter Your Type And Electric Use(kWh)\n");
    if(scanf("%d %f", &customerType, &consumption_kWh) != 2){
        return 1;
    }

    if(customerType == 1){
        if(consumption_kWh <= 100){
            totalBill = consumption_kWh * 3;
        }
        else{
            totalBill = consumption_kWh * 4;
        }
       
    }
    else if(customerType == 2){
        if(consumption_kWh <= 500){
            totalBill = consumption_kWh * 5;
        }
        else{
            totalBill = consumption_kWh *6.5;
        }
    }
    else{
        printf("Invalid Customer Type");
        return 1;
    }
    if(totalBill > 0.0){
        printf("Υour total bill is : %.2f\n", totalBill);
    }
    
    return 0;
}