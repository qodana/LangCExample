#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void test() {
    int x;
    int *p;
    p = &x + 1; // warn
}
