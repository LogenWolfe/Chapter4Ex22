// Name - Logen Wolfe
// Date - 10/7/26 (Completed on 10/15/26)
// Program - Chapter 4 Exercise 22

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double planA = 39.99;
	const double planB = 59.99;
	const double planC = 79.99;

	const double PlanAGB = 2;
	const double PlanBGB = 8;
	const double usagecost = 8.00;

	string Customer;
	string month;
	double GBUsed;
	char PlanType;
	double cost;
	char choice;

	cout << "Welcome to Logen's Data Calculator (Don't use T-Mobile, they suck)" << endl;

	cout << "Firstly, what's your name?" << endl;
	cin >> Customer;

	cout << "Alright, and what month are you payin for?" << endl;
	cin >> month;

	cout << "About how much data have you burned this month? (in GB)" << endl;
	cin >> GBUsed;

	cout << "Lastly, what plan are you on? (A, B, or C)" << endl;
	cin >> PlanType;

	if (PlanType == 'A' || PlanType == 'a')
	{
		if (GBUsed > PlanAGB)
			cost = (GBUsed - PlanAGB) * usagecost + planA;
		else
			cost = planA;

		cout << "Looks like your bill for " << month << " would be about..$" << cost << endl;
		if (cost > planB)
			cout << "If only you were on Plan B instead..you would've saved roughly $" << cost - planB << "!" << endl;
	}
	else if (PlanType == 'B' || PlanType == 'b')
	{
		if (GBUsed > PlanBGB)
			cost = (GBUsed - PlanBGB) * usagecost + planB;
		else
			cost = planB;

		cout << "Looks like your bill for " << month << " would be about..$" << cost << endl;
		if (cost > planC)
			cout << "If only you were on Plan C instead..you would've saved roughly $" << cost - planC << "!" << endl;
	}
	else if (PlanType == 'C' || PlanType == 'c')
	{
		cost = planC;
		cout << "Looks like your bill for " << month << " would be about..$" << cost << endl;
	}
	else
	{
		cout << "No dice, must not be a plan. Hopefully it's not because you're on T-Mobile.." << endl;
	}

	cout << "Got anythin' else you wanna calculate? (Gimme a Y or N)" << endl;
	cin >> choice;

	if (choice == 'Y' || choice == 'y')
	{
		main();
	}
	else if (choice == 'N' || choice == 'n')
	{
		cout << "Alrighty, laterrrrr!" << endl;
	}
	else if (choice == 'L' || choice == 'l')
	{
		cout << "Heyy, first letter of my name! Not exactly helpful..like at all, but bonus points for you! Later!" << endl;
		return 0;
	}
	else
	{
		cout << "I'll..just assume that's a no." << endl;
	}



}

