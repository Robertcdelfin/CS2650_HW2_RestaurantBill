//Robert Delfin
# include <stdio.h>

int main(int argc, char **argv){

	//Charge of Meal for Patron
	double mealCost = 88.67;
	//tax for the meal cost
	double tax = 0.0675;
	//Percentage for meal cost
	double tip = .20;

	// 88.67 * 6.75% the tax on the bill
	double taxAmount = mealCost * tax;
	//the cost of the meal with tax 88.67 + 5.985225
	double subtotal = mealCost + taxAmount;
	//Cost of the tip 88.67 * .20
	double tipAmount = mealCost * tip;
	//Total cost of meal with tax and tip
	double totalBill = subtotal + tipAmount;

	printf("Meal Cost:$ %.2lf\n",mealCost);
	printf("Tax Amount:$ %.2lf\n", taxAmount );
	printf("Tip Amount:$ %.2lf\n", tipAmount );
	printf("Total Bill:$ %.2lf\n", totalBill);

	return 0;
}
