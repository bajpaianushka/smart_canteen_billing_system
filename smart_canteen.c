#include <stdio.h>

void displayManu() {
	printf("\n===== SMART CANTEEN =====\n");
	printf("1. Burger  - Rs.60\n");
	printf("2. Pizza   -Rs.120\n");
	printf("3. Sandwich   -Rs.50\n");
	printf("4. Cold Coffee  -Rs.40\n");
	printf("5. French Fries  -Rs.70\n");
	printf("6. Momos  -Rs.80\n");
	printf("0. Generate Bill\n");
}

int main() {
	int price[6] = {60, 120, 50, 40, 70, 80};

	 char *items[6] = {"Burger", "Pizza", "Sandwich", "Cold Coffee", "Frech Fries", "Momos"};

	int quantity[6] = {0};
	int choice, qty;
	int subtotal = 0;
	float discount = 0, finalAmount;

	printf("WELCOME TO SMART CANTEEN!\n");

while(1){
	displayManu();

	printf("\nEnter your choice: ");

	if (scanf("%d", &choice) != 1){
		printf("Invaild input!\n");
		return 0;
	}

	if (choice == 0)
		break;

	if (choice < 1 || choice > 6) {
	 	printf("Invaild menu choice!\n");
		continue;
	}

	printf("Enter quantity: ");

	if(scanf("%d", &qty)!= 1){
		printf("Invaild qunatity!\n");
		return 0;
	}

	if (qty <= 0)
	{
		printf("Quantity must be positive!\n");
		continue;
	}

	quantity[choice - 1] += qty;

	printf("%s added successfully!\n", items[choice - 1]);
	}

     printf("\n========== FINAL BILL ==========\n");

	printf("%-15s %-10s %-10s\n", "Items", "Qunatity", "Amount");

	for (int i = 0; i < 6; i++)
	{
		if (quantity[i] > 0)
		{
		   int amount = quantity[i] * price[i];

		   printf("%-15s %-10d Rs.%d\n", items[i], quantity[i], amount);

		   subtotal += amount;
		}
	      }

printf("--------------------------\n");
	printf("Subtotal: Rs.%d\n", subtotal);

	if (subtotal >= 500)
	{
	   discount = subtotal * 0.10;
	}

	finalAmount = subtotal - discount;

	printf("Discount: Rs.%.2f\n", discount);
	printf("Final Amount: Rs.%.2f\n", finalAmount);

	printf("\nThank you for visiting!\n");

	return 0;
   }

