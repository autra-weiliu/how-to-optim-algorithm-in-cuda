#include <iostream>
#include "src/math.h"
#include <cuda_runtime.h>

int main() {
    std::cout << zxy_add(3,5) << std::endl;
    return 0;
}