#include "ArrayIntersect.h"

void ArrayIntersect::FillIntersections(std::vector<int>& v1, std::vector<int>& v2,
                                        std::vector<int>& v3) {
    m_intersectionOfTwo = SetIntersection(v1.begin(), v1.end(),
                            v2.begin(), v2.end());
    m_intersectionOfThree = SetIntersection(m_intersectionOfTwo.begin(), m_intersectionOfTwo.end(),
                            v3.begin(), v3.end());
}

void ArrayIntersect::TransformArray(Array& array) {
    for (int i = 0; i < 3; ++i)
    {
        QuickSort(array[i].begin(), array[i].end(), std::less<int>());
    }
    if (array[0].size() >= array[2].size()
        && array[1].size() >= array[2].size())
        {
            FillIntersections(array[0], array[1], array[2]);
        }
        else if (array[0].size() >= array[1].size()
                && array[2].size() >= array[1].size())
                {
                    FillIntersections(array[0], array[2], array[1]);
                }
                else
                {
                    FillIntersections(array[1], array[2], array[0]);
                }
}

std::vector<int>& ArrayIntersect::GetIntersectionOfTwo(Array array) {
    this->TransformArray(array);
    return m_intersectionOfTwo;
}

std::vector<int>& ArrayIntersect::GetInterSectionOfThree(Array array) {
    this->TransformArray(array);
    return m_intersectionOfThree;
}
