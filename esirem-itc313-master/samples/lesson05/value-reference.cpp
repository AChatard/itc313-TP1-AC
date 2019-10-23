#include <iostream>
 
void fooRef(int &y) {
	std::cout << "Inside fooRef, adress(y) = " << &y << '\n';
    y = 6;
} 

void fooVal(int y) {
    std::cout << "Inside fooVal, adress(y) = " << &y << '\n';
    y = 6;
} 
  
int main() {
    int x = 5;
    std::cout << "Inside main, adress(x) = " << &x << '\n';
    fooVal(x);
    std::cout << "Inside main, after fooVal, x = " << x << '\n';
    fooRef(x);
    std::cout << "Inside main, after fooRef, x = " << x << '\n';
    return 0;
}