#include "tensor.hpp"
#include <iostream>

int main() {
    std::vector<float> test_v{1.0, 2.0, 3.0};
    Tensor test_tensor(test_v);

    std::cout << test_tensor << std::endl;

    return 0;
}
