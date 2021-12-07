#include <iostream>

using namespace std;

int main()
{
	int numb;
	cout << "Enter number: ";
	cin >> numb;
	cout << "numb < 10 equals " << (numb < 10) << endl;
	cout << "numb > 10 equals " << (numb > 10) << endl;
	cout << "numb == 10 equals " << (numb == 10) << endl;

	system("pause");
	return 0;
}