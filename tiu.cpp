#include <iostream>
int main(){
    int a
    int b
    int c
    std::cout << "Enter three numbers: ";
    if (std::cin >> a >> b >> c) {
        int largest = a;
        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }
        std::cout << "The largest number is: " << largest << std::endl;
    } else {
        std::cout << "Invalid input. Please enter three numbers." << std::endl;
    }
}
