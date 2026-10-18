#include <stdio.h>
int calculateFare(float fare, float discount)
{
    float result;
    result=fare-fare*discount;
    return result;
}

int main() {
    int choice;
    float final_fare, fare, discount;
    printf("\nEnter the Passenger Catergory:");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        	printf("\nYour category is child \nYou will get 50% Discount");
        	printf("Enter your base fare:");
            scanf("%f", &fare);
            discount=0.5;
            final_fare= calculateFare(fare, discount);
            printf("\n Final Fair:%.2f", final_fare);
            break;

        case 2:
        	printf("\nYour category is adult \nYou will get 0% Discount");
            break;

        case 3:
        	printf("\nYour category is senior citizen \nYou will get 30% Discount");
            printf("\nEnter your base fare:");
            scanf("%f", &fare);
            discount=0.3;
            final_fare= calculateFare(fare, discount);
            printf("\nFinal Fare:%.2f", final_fare);
            break;

        case 4:
        	printf("\nVisit us again. Thankyou:)");
            break;

        default:
        	printf("\nEnter the correct choice number!");
            break; }
            
			return 0; 
}