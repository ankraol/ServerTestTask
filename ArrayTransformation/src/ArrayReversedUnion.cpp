#include "ArrayReversedUnion.h"

void ArrayReversedUnion::SetUnion(Array array) {
    for (int i = 0; i < 3; ++i)
    {
        m_union.insert(m_union.begin(), array[i].begin(), array[i].end());
    }
    QuickSort(m_union.begin(), m_union.end(), std::greater<int>());
    std::vector<int>::iterator it = m_union.erase(std::unique(m_union.begin(), m_union.end()));
    m_union.resize(std::distance(m_union.begin(), it));
}

void ArrayReversedUnion::TransformArray(Array& array) {
    this->SetUnion(array);
}

std::vector<int> ArrayReversedUnion::GetUnion(Array array) {
    this->TransformArray(array);
    return m_union;
}
void ArrayReversedUnion::PrintUnion(Array array) {
    this->TransformArray(array);
    this->PrintVec(m_union);
}
