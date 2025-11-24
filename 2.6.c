#include <stdio.h>
int main(){
    int N_MONTHS, month, successCount = 0;
    float dailyDeposit, monthlyTotal ,results[N_MONTHS];

    printf("Please enter you month count:");
    if(scanf("%d", &N_MONTHS) != 1){
        return 1;
    }

    for(month = 1; month <= N_MONTHS; month++){

        monthlyTotal = 0.0;
        printf("Enter your deposits for month %d:", month);  

        if(scanf("%f", &dailyDeposit) != 1){
            break;
        }

        while(dailyDeposit != 0.00){

            monthlyTotal += dailyDeposit;

            if(scanf("%f", &dailyDeposit) != 1 ){
                break;
            }
        }

        results[month - 1] = monthlyTotal;

        if(monthlyTotal >= 500){
            successCount++;
        }
    }

    for(month = 1; month <= N_MONTHS; month++){
        printf("Month %d Total: %.2f\n", month, results[month - 1]);
    }
    
    printf("Success Count: %d\n", successCount);
    return 0;
}