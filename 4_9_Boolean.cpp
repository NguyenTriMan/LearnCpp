/* The link: https://www.learncpp.com/cpp-tutorial/boolean-values/
 *
 * In Cpp: 
 *          print true and false instead of 0 1: cout << boolalpha; 
 *          undo use cout << noboolalpha;
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    bool defaultBool; //default Bool is falue and equal 0
    cout << defaultBool << endl; //print 0
    cout << boolalpha;
    cout << defaultBool << endl; //print false
    cout << noboolalpha;
    cout << defaultBool << endl; //print 0

/******************************************************/

    //default la nhap so 0 = false, bat cu so nao thi la true, muon nhap chu thi dung cin >> boolalpha, neu khong dung boolalpha
    //thi khi nhap chu auto ra false 
    //""A failed input will also zero-out the variable""
	bool b{};
	std::cout << "Enter a boolean value: ";
	// Treat "false" and "true" as booleans
	// std::cin >> std::boolalpha;
	std::cin >> b;
	std::cout << "You entered: " << b << '\n';
}
/////////////////////////////////
bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}

