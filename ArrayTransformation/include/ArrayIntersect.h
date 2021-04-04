#pragma once

#include "ArraySort.h"

/** Derived class from ArrayTransformer, that defines intersections of arrays.*/
class ArrayIntersect : public ArrayTransformer {
    public:
        /** Sorts arrays in ascending order and defines intersections.*/
        void TransformArray(Array& array);
        /** Returns intersection of two biggest arrays.*/
        std::vector<int>& GetIntersectionOfTwo(Array array);
        /** Returns intersection of all three arrays.*/
        std::vector<int>& GetInterSectionOfThree(Array array);

    private:
        /** Fills member elements with corresponding data.
         * @param {vector<int>} v1 - first biggest vector.
         * @param {vector<int>} v2 - second biggest vector.
         * @param {vector<int>} v3 - the smallest vector.
        */
        void FillIntersections(std::vector<int>& v1, std::vector<int>& v2,
                                std::vector<int>& v3);

        std::vector<int> m_intersectionOfTwo;
        std::vector<int> m_intersectionOfThree;
};
