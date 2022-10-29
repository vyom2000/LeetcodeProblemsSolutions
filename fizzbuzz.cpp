#include <iostream>

int main() {
    int i = 0;
    while (i < 100) {
        if (i % 2 == 0) {
            std::cout << "Fizz\n";
        } else {
            std::cout << "Buzz\n";
        }
        i++;
    }
    return 0;
}
