#pragma once

#include <vector>

/** Returns intersection of two ranges and returns vector.
 * @param {InputIt} first1 - Input iterator of the begining of the first range.
 * @param {InputIt} last1 - Input iterator of the end of the first range.
 * @param {InputIt} first2 - Input iterator of the begining of the second range.
 * @param {InputIt} last2 - Input iterator of the end of the second range.
*/
template <typename InputIt>
std::vector<int> SetIntersection(InputIt first1, InputIt last1, InputIt first2,
                        InputIt last2) {
    std::vector<int> res;

    while (first1 != last1 && first2 != last2)
    {
        if (*first1 < *first2)
        {
            ++first1;
        }
        else if (*first2 < *first1)
        {
            ++first2;
        }
        else
        {
            res.push_back(*first1++);
            ++first2;
        }
    }
    return res;
} 
