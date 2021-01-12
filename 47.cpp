/*

Given the meal price (base cost of a meal), 
tip percent (the percentage of the meal price 
being added as tip), and tax percent 
(the percentage of the meal price being added as tax) 
for a meal, find and print the meal's total cost. 
Round the result to the nearest integer.
Example

mealcost=100
tippercent=15
taxpercent=8

A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. 
Print the value 123 and return from the function.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

Input Format

There are 3 lines of numeric input:
The first line has a double, mealcost(the cost of the meal before tax and tip).
The second line has an integer,tip_percent (the percentage of  being added as tip).
The third line has an integer, tax_" (the percentage of  being added as tax).

12.00
20
8
Output
15
*/
#include <bits/stdc++.h>
using namespace std;

void cost(int tip_percent,int tax_percent,double meal_cost)
{
	double tip,tax;
	double total_cost;
	tip=(meal_cost*tip_percent/100);
	tax=(meal_cost*tax_percent/100);

	total_cost= meal_cost+ tip+ tax;
	cout<<round(total_cost);
}

int main()
{
	double meal_cost;
	int tip_percent;
	int tax_percent;

	cin>>meal_cost>>tip_percent>>tax_percent;
	cost(tip_percent,tax_percent,meal_cost);
	return 0;
}