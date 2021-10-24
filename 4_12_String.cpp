#include <iostream>
#include <string> // use string

using namespace std;

int countString(){
    int age {}, length {};
    string yourName {};
    cin >> age;
    getline(cin >> ws, yourName);
    /**********************************************************
     * Code loi
     * length = age + yourName.length();
     * cout << length << endl;
     * ******************************************************/
    

    // age is signed, and name.length() is unsigned -- we shouldn't mix these
    // We'll convert name.length() to a signed value
    int letters = static_cast<int>(yourName.length()); // get number of letters in name (including spaces)
}
int main(){
    countString();
    string name {};
    string age {};
    
    cout << "Enter your name: " << endl; // Tri Man
    cin >> name;

    cout << "Enter your age: " << endl; // 20
    cin >> age;

    cout << "Hello " << name << " your age: " << age << endl; // Print hello tri your age: man (if age type int => hello tri your age: 0)

/****************************************
 *  cin khong nhận khoảng trắng tách thành tri và lần cin age sẽ gán man
 *  Use std::getline(std::cin >> std::ws, name)
******************************************/
    getline(cin >> ws, name); // read full line of text into name 
    int length = static_cast<int>(name.length());
    cout << name.length() << length << endl;

    return 0;
}