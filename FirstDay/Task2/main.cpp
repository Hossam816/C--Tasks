#include <iostream>

using namespace std;

// Function with one required and two optional parameters
void displayInfo(int number, const std::string& text1 = "Default1", const std::string& text2 = "Default2") {
    std::cout << "Number: " << number << ", Text1: " << text1 << ", Text2: " << text2 << std::endl;
}

int main() {
    // Call with 1 parameter
    displayInfo(10);

    // Call with 2 parameters
    displayInfo(20, "Hello");

    // Call with 3 parameters
    displayInfo(30, "Hello", "World");

    return 0;
}
