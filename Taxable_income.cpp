/*
if Problem 2
Write a program that will calculate a state income
tax.

The tax will be assessed at 2 percent of the
taxable income for incomes less than or equal to
$30,000.

For taxable incomes greater than $30,000,
the tax will be assessed at 2.5 percent of the
taxable income that exceeds $30,000, plus a fixed
amount of $600.

The user should be prompted for the taxable income.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//declare variables
double userIncome, incomeTax;

//get the taxable income from the user
cout << "What is your income? ";
cin >> userIncome;

//if the taxable income is less then or equal to 30000
//	income tax is 2% of taxable income
//else
 //	income tax is 600 plus 2.5% of the income over 30000 limit
//endif

if (userIncome <= 30000 )
	{
	incomeTax = 0.02 * userIncome;
	}
else
	{
	incomeTax = 600 + 0.025 * (userIncome - 30000); 
	}


 // display the calculated income tax

cout << setprecision (2) << fixed;

cout << endl << "The income tax is $" << incomeTax << endl << endl; 

return 0;
}

