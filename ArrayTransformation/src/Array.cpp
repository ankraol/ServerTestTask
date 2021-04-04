#include "Array.h"
#include "ArrayReversedUnion.h"

/*************************************************
 * Class constructor that reads given file.
*/

Array::Array(const std::string& fileName) {
    std::string line;
    std::ifstream file(fileName);

    if(file.is_open())
    {
        for (int i = 0; std::getline(file, line); ++i)
        {
            if (i > 2)
            {
                std::cerr << "Sorry, but file is too big to handle.\n"
                            << "Hint: There must be only three arrays.\n";
                exit(0);
            }
            this->stringToVector(line, m_array[i]);
        }
        file.close();
    } 
    else
    {
        std::cerr << "Unable to open a file!\n"
                    << "Hint: Enter relative path to a target file.\n";
        exit(0);
    }
    if (m_array[0].empty() || m_array[1].empty() || m_array[2].empty())
    {
        std::cerr << "Sorry but your file seems to be empty.\n";
        exit(0);
    }
}

/***************************************************
 * Prints file content - 3 arrays of integers.
*/

void Array::PrintArray() {
    ArrayTransformer::PrintArray(*this);        
}

/****************************************************
 * Sorts arrays.
*/

void Array::SortArray() {
    ArraySort sort;
    sort.TransformArray(*this);
}

/***************************************************
 * Member functions to manage intersections.
*/

std::vector<int> Array::GetMaxIntersection() const {
    ArrayIntersect intersect;
    return intersect.GetIntersectionOfTwo(*this);
}

std::vector<int> Array::GetTotalIntersection() const {
    ArrayIntersect intersect;
    return intersect.GetInterSectionOfThree(*this);
}

void Array::PrintMaxIntersection() const {
    ArrayIntersect intersect;
    std::vector<int> intersection = intersect.GetIntersectionOfTwo(*this);
    ArrayTransformer::PrintVec(intersection);
}

void Array::PrintTotalIntersection() const {
    ArrayIntersect intersect;
    std::vector<int> intersection = intersect.GetInterSectionOfThree(*this);
    ArrayTransformer::PrintVec(intersection);
}

/***************************************************
 * Member functions to manage vector of unique elements sorted in descending order.
*/

std::vector<int> Array::GetReversedUnion() const {
    ArrayReversedUnion reversedUnion;
    return reversedUnion.GetUnion(*this);
}

void Array::PrintReversedUnion() const {
    ArrayReversedUnion reversedUnion;
    reversedUnion.PrintUnion(*this);
}

/***************************************************
 * Converts string from a given file to vector.
*/
void Array::stringToVector(const std::string& str, std::vector<int>& v) {
    std::stringstream is(str);

    for (int i; is >> i;)
    {
        v.push_back(i);

        if (is.peek() == ' ' || is.peek() == ',')
            is.ignore();
    }
}
