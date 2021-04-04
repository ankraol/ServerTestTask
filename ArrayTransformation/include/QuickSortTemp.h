#pragma once

#include <iterator>

template <typename It, typename Comp>
It Partition(It first, It last, Comp comparator) {
    auto store = first;
    auto pivot = std::prev(last, 1);

    for (auto i = first; i != pivot; ++i)
    {
        if (comparator(*i, *pivot))
        {
            std::swap(*store++, *i);
        }
    }
    std::swap(*store, *pivot);
    return store;
}

/** Quicksort implementation.
 * @param {It} first - Random iterator of the begining of the range to be sorted.
 * @param {It} last - Random iterator of the end of the range to be sorted.
 * @param {Comp} comparator - comparing statement.
*/
template <typename It, typename Comp>
void QuickSort(It first, It last, Comp comparator) {
    if (std::distance(first, last) > 1)
    {
        It pivot = Partition(first, last, comparator);
        QuickSort(first, pivot, comparator);
        QuickSort(pivot + 1, last, comparator);
    }
};
