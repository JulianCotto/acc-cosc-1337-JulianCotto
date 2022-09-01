#include "while.h"
#include <iostream>

using std::cout, std::cin;

int main() 
{
    int num;
    string string1;

    cout << "Enter a number to calculate sum of all squares\n";
    cin >> num;
    cout << "Sum of squares: " << sum_of_squares(num) << '\n';

    cout << "Enter a string to transpose vertically\n";
    cin >> string1;
    display(string1);

	return 0;
}