#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Definitions
	char choice;
	double gigabytes;

	cout << fixed << setprecision(2);
	
	// Intro and ask for package type
	cout << "iMobile Bill Calculator ...\n"
		<< "Select a subscription package:\n"
		<< "	1. Package A\n"
		<< "	2. Package B\n"
		<< "	3. Package C\n"
		<< "Package: ";
	cin >> choice;

	switch (choice)
	{
		case '1': cout << endl << "How many gigabytes of data were used? "; // Package 1
			cin >> gigabytes;
			if (gigabytes < 0) // Validation
			{
				cout << "Error ... Invalid gigabytes enterted. Try again.";
			}
			else
			{
				cout << "\nThe total amount due is $";
				double totalAmount = 39.99 + (gigabytes - 4) * 10;
				cout << totalAmount;
			}
			break;
			
		case '2': cout << endl << "How many gigabytes of data were used? "; // Package 2
			cin >> gigabytes;
			if (gigabytes < 0) // Validation
			{
				cout << "Error ... Invalid gigabytes entered. Try Again.";
			}
			else
			{
				cout << "\nThe total amount due is $";
				double totalAmount = 59.99 + (gigabytes - 8) * 5;
				cout << totalAmount;
			}
			break;

		case '3': cout << "\nHow many gigabytes of data were used? "; // Package 3
			cin >> gigabytes;
			if (gigabytes < 0) // Validation
			{
				cout << "Error ... Invalid gigabytes entered. Try Again.";
			}
			else
			{
				cout << "\nThe total amount due is $";
				double totalAmount = 69.99 + gigabytes;
				cout << totalAmount;
			}
			break;

		default: cout << "\nError ... Invalid package. Try again."; // In case of Error
	}
	return 0;
}