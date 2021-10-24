/* The link: https://www.learncpp.com/cpp-tutorial/chars/
 *
 * In Cpp: 
 *          A character can be a single letter, number, symbol, or whitespace.
 *          int8_t is usually treated the same as a signed char in C++, so it will generally print as a char instead of an integer.
 *          static_cast<new_type>(VARIABLE) ÉP KIỂU 
 *          Whenever you see C++ syntax (excluding the preprocessor) that makes use of angled brackets <NGOAC NHON>, the thing between the angled brackets will most likely be a type
 *          '\n' not "\n" help complier optimize more effectively
 *          
 */

#include <iostream>

using namespace std;

int main(){
    char test = 0; // == int test = 0
    char test_ = '0'; // => ascii 48 == integre 48
    cout << (test) << endl; // print NULL because NULL ascii = 0
    cout << int(test) << endl; // print 0

//*************************************************************
    cout << static_cast<int>(test_) << endl; // print 48 (0 ascii = 48) but value of test_ is acctual not convert integer type 
    cout << test_ << endl;  // print '0'
//*************************************************************
//because ch is can only hold 1 character. the rest of user input is store in std:cin input buffer 
    char ch = ' '; // type abc
    cout << " nhap choue " << endl;
    cin >> ch; // print a
    cout << ch << endl;
    cin >> ch; // print b
    cout << ch << endl;

    // char ch = '40';
    // cout << ch << endl;   PRINT 0

    cout << "\\n \\" << endl;

    return 0;
}