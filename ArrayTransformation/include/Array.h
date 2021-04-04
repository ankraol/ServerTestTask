#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <memory>
#include <string>
#include <vector>
#include <array>

using arrayTripplet = std::array<std::vector<int>, 3>;

class ArrayTransformer;

class Array {
    public:
        /** Represents arrays from the text file.
         * @constructor
         * @param {string} fileName - relative path to the text file, which contains arrays.
        */
        explicit Array(const std::string& fileName);
        Array() = delete;

        /** Prints arrays from the text file. */
        void PrintArray();
        /** Sorts each array in ascending order.*/
        void SortArray();

/***************************************************************************/     
        /** Returns a vector of two biggest arrays intersection. */
        std::vector<int> GetMaxIntersection() const;
        /** Returns a vector of all three arrays intersection. */
        std::vector<int> GetTotalIntersection() const;

        /** Prints an intersection of two biggest arrays. */
        void PrintMaxIntersection() const;
        /** Prints an intersection of all three arrays. */ 
        void PrintTotalIntersection() const;

/***************************************************************************/ 
        /** Returns a vector of unique elements sorted in descending order.*/
        std::vector<int> GetReversedUnion() const;
        /** Prints a vector of unique elements sorted in descending order.*/
        void PrintReversedUnion() const;

/***************************************************************************/ 
        std::vector<int> operator [](int i) const { return m_array[i]; };
        std::vector<int>& operator [](int i) { return m_array[i]; };

    protected:
        /** Converts string of integers into vector of integers. 
         * @param {string} str - string, that will be converted.
         * @param {vector} v - destination vector.
        */
        void stringToVector(const std::string& str, std::vector<int>& v);

    private:
        arrayTripplet m_array;
};
