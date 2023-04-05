#include <iostream>

int summation() {
    int sum = 0;
    for (int i = 2; i < 1000; i += 3) {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << "Summation: " << summation() << std::endl;
    return 0;
}
