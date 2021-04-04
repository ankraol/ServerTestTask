#pragma once

#include "ArrayIntersect.h"
#include <algorithm>

/** Derived class from ArrayTransformer, that creates vector of unique elements
 * of the given arrays and sorts them in desceding order.
*/
class ArrayReversedUnion : protected ArrayTransformer {
    public:
        /** Sorts arrays in desceding order and creates vector of unique elements.*/
        void TransformArray(Array& array);
        /** Returns sorted vector of unique elements.*/
        std::vector<int> GetUnion(Array array);
        /** Prints sorted vector of unique elements.*/
        void PrintUnion(Array array);
    
    private:
        /** Creates vector of unique elements.*/
        void SetUnion(Array array);
        std::vector<int> m_union;
};
