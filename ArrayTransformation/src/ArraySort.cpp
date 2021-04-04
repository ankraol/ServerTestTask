#include "ArraySort.h"

void ArraySort::TransformArray(Array& array) {
    for (int i = 0; i < 3; ++i)
    {
        QuickSort(array[i].begin(), array[i].end(), std::less<int>());
    }
}
