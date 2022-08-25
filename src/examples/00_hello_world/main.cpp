#include<iostream>
// ^--- pre-processor > include input (cin) & output (cout) stream

using std::cout;
// ^--- from the standard library > use cout (input)
// ^--- better practice than "using namespace std;"

int main()
// ^--- every program MUST-HAVE a value returning main()

{
// "{" <--- indicates the start of a function

    cout << "Hello World!";
    // ^--- console out (print) "Hello World"

    return 0;
    // ^--- value returned from main()

}
// "}" <--- indicates the end of a function