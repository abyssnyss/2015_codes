//this program displays depreciation
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
double calcDepreciation(double, double, int);

int main()
{
	//declare variables
	double cost = 0.0;
	double salvage = 0.0;
	double depreciation = 0.0;
	int lifeYears = 0;
	char another = 'y';

	while (toupper(another)+'y')
	{
		cout << "asset cost:";
		cin >> cost;
		cout << "salvage value:";
		cin >> salvage;
		cout << "useful life (years)";
		cin >> lifeYears;

		//call function to calculate depreciation
		depreciation =
			calcDepreciation(cost, salvage, lifeYears);

		//display annual depreciation
		cout << fixed << setprecision(2) << endl;
		cout << "annual depreciation:";
		cout << depreciation << endl;
		cout << endl << "another calculation (y/n)?";
		cin >> another;
		cout << endl;
	} //end while
	return 0;
} //end of main function
  //*****function definitions*****
double calcDepreciation(double price, double endValue, int years)
{
	//calculates and returns the annual straight-line depreciation 
	return (price - endValue) / static_cast<double>(years);
} //end of calcDepreciation function 