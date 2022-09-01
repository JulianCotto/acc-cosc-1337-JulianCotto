#include"for.h"
#include <iostream>

using std::cout, std::cin;

int main() 
{
    int num;

	cout << "Enter a number to count up to that number\n";
    cin >> num;
    display_numbers(num);

	return 0;
}