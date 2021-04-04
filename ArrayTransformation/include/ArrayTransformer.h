#pragma once

#include "Array.h"
#include "QuickSortTemp.h"
#include "Intersection.h"

/** Abstract class to transform arrays.*/
class ArrayTransformer {
    public:
        /** Prints arrays.*/
        static void PrintArray(const Array& array);
        /** Transforms arrays.*/
        virtual void TransformArray(Array& array) = 0;

        /** Prints one array out of 3.
         * @param {vector<int>} v - array, you want to print
        */
        static void PrintVec(const std::vector<int>& v);
};
