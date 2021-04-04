#pragma once

#include "ArrayTransformer.h"

/** Derived class from ArrayTransformer, that sorts arrays.*/
class ArraySort : public ArrayTransformer {
public:
    /** Sorts arrays in asceding order.*/
    void TransformArray(Array& array);
};
