#include "formatter_ex.h"
#include "solver.h"
#include <iostream>
int main() {
    float a, b, c, x1, x2;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    try {
        solve(a, b, c, x1, x2);
        std::cout << formatter_ex("Solution: x1 = " + std::to_string(x1) + 
                     ", x2 = " + std::to_string(x2)) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
