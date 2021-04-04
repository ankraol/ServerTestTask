#include "ArrayTransformer.h"

void ArrayTransformer::PrintArray(const Array& array) {
    for (int i = 0; i < 3; ++i)
    {
        PrintVec(array[i]);
    }
}

void ArrayTransformer::PrintVec(const std::vector<int>& v) {
    for (const int& i : v)
    {
        std::cout << i;
        std::cout << std::setfill(' ') << std::setw(2);
    }
    std::cout << '\n';
}
