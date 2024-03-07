/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;
int main() 
{
    int i;
    char ch;
    short sh;
    long lon;
    unsigned short us;
    
    cout << "For this compiler: " << endl;
    cout << "largest integer is " << INT_MAX << endl;
    cout << "smallest integer is" << INT_MIN << endl;
    
    cout << "size of an integer is " << sizeof(int) << " bytes." << endl;
    cout << " size of a char is " << sizeof(char) << " byte. " << endl;
    cout << "largest short is" << SHRT_MAX << endl;
    cout << "smallest short is" << SHRT_MIN << endl;
    cout << "lrgest unsigned short is " << LONG_MAX << endl;
    cout << "smallest long is " << LONG_MIN << endl;
    
    cout << "Input an integer value " << endl;
    cin >> i;
    cout << "Enter a character value" << endl;
    cin >> ch;
    cout << "Enter a short value " << endl;
    cin >> sh;
    cout << "Enter an unsigned short value " << endl;
    cin >> us;
    cout << "Enter a long value " << endl;
    cin >> lon;
    cout << endl << "You entered the following values: " << endl;
    cout << "integer: " << i << endl;
    cout << "character: " << ch << endl;
    cout << "short: " << sh << endl;
    cout << "unsigned short: " << us << endl;
    cout << "long: " << lon << endl;
    
    
    sh = sh *10;
    cout << "Ten times short value: sh = " << sh << endl;
    
    
    cout << "INTEGER OVERFLOW: i = " << INT_MIN/-1 << endl;
    
    return 0;
}
