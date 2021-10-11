/* The link: https://www.learncpp.com/cpp-tutorial/floating-point-numbers/
 *
 * In C: printf("%.3f",19.199);
 *
 * In Cpp: 
 * 	-By default: số thập phân là kiểu double. Hau to f bieu thi (minh dang nhaap mot so kieu float) kieu float (Them vao để dễ doc code)
 * 	-std::cout << std::setprecision() => show tong cac chu so cua so thap phan vd: setprecision(5) => 12.345		
 * 	-Note: neu dung so thap phan lon hon gia tri cua bien float thi dan den mat di do chinh xac cua so do vd 123456789.1 => 123456792	
 * 		khi dung so thap phan de tinh toan thi khong cho kq chinh xac vi loi lam tron, therefore khong nen tinh toan va so sanh cac so thap phan "NEVER ASSUME YOUR FLOATING POINT NUMBERS ARE EXACT"
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout << setprecision(19);
	float fValue = 5.9879456001f; //Minimum size 4byte
	double dValue = 5.1; //Minimum size 8byte - chua duoc 15..18 số sau dấu phẩy 
	long double ldValue = 0.00000025; //Minimum size 8byte or 8,12,16 byte
	cout << fValue << endl;	

	double d = 0.1;
    	cout << d << '\n'; //use default cout precision of 6. Result 0.1
    	cout << std::setprecision(17);
    	cout << d << '\n'; //0.10000000001

	double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
    	cout << d2 << '\n'; //0.99999999999999989
}
