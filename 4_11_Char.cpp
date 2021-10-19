/* The link: https://www.learncpp.com/cpp-tutorial/chars/
 *
 * In Cpp: 
 *          A character can be a single letter, number, symbol, or whitespace.
 *          
 *          
 */

#include <iostream>

using namespace std;

int main(){
    char test = 0; // == int test = 0
    char test_ = '0'; // => ascii 48 == integre 48
    cout << (test) << endl; // print NULL because NULL ascii = 0
    cout << int(test) << endl; // print 0
    return 0;
}