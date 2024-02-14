#include <iostream>
using namespace std;
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	int factorial = 1;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> n;

	if (n < 0) {
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> n;
	}
	else {
		cout << n << "! = ";
		for (int i = 1; i <= n; i=i+1) {
			factorial *= i;
			cout << i;
			if (i < n)
				cout << " * ";
		}
		cout << " = " << (factorial) << endl;
	}
}
void arithmetic() {
	int A;
	int B;
	int C;
	cout << "Arithmetric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;

	while (C <= 0) {
		cout << "Number of elements must be positive. Enter again: ";
		cin >> C;
	}
	int sum = 0;
	for (int i = 0; i < C; ++i) {
		cout << A + i * B;
		sum += A + i * B;
		if (i < C - 1)
			cout << " + ";
	}
	cout << " = " << sum << endl;
}
void geometric() {
	double r, a;
	int numElements;
	cout << "Geometric Series:" << endl;
	cout << "Enter the number to start at: ";
	cin >> r;
	cout << "Enter a number to multiply by each time: ";
	cin >> a;
	cout << "Enter the number of elements in the series: ";
	cin >> numElements;

	while (numElements <= 0) {
		cout << "Number of elements must be positive. Enter again: ";
		cin >> numElements;
	}
	double sum = 0;
	for (int i = 0; i < numElements; ++i) {
		double term = r * pow(a, i);
		cout << term;
		sum += term;
		if (i < numElements - 1)
			cout << " + ";
	}
	cout << " = " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}