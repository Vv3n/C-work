#include <stdio.h>
int main(){
    int initialStock, N, cmdCode, quantity, i;
    float PENALTY_FEE;
    int currentStock;
    float totalPenalties = 0.0;

    printf("Please enter quantityproduct,penalty and quantity list\n");
    if(scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3){
        return 1;
    }
    currentStock = initialStock;


    for(i = 0; i < N; i++){
        printf("Please Enter Code and Quantity\n");
        if(scanf("%d %d", &cmdCode, &quantity) != 2){
            break;
        }

        switch(cmdCode){
            case 1:
                currentStock += quantity;
                printf("Received [%d] units.\n", quantity);
                break; 
            case 2:
                if(quantity <= 0){
                    printf("Error: Quantity must be positive.\n");
                    break;
                }
                else if(quantity <= currentStock){
                    currentStock -= quantity;
                    printf("Shipped [%d] units.\n", quantity);
                    break;
                }
                else if(quantity > currentStock){
                    totalPenalties += PENALTY_FEE;
                    printf("FAILURE: Insufficient stock. PENALTY [%.2f] added.\n", PENALTY_FEE);
                    break;
                }
            case 3:
                printf("Current Stock: %d\n", currentStock);
                printf("Total Penalties: %.2f\n", totalPenalties);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    return 0;
}