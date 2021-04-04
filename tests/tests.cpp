#include "gtest/gtest.h"
#include "ArrayReversedUnion.h"

TEST(Sorting, CanSortAsc) {
    std::vector<int> v1 {1, 2, 2, 5, 2, 5, 8, 9, 5};
    std::vector<int> v1_sorted {1, 2, 2, 2, 5, 5, 5, 8, 9};
    std::vector<int> v2 {3, 6, 7, 5, 3, 7, 3, 1};
    std::vector<int> v2_sorted {1, 3, 3, 3, 5, 6, 7, 7};

    QuickSort(v1.begin(), v1.end(), std::less<int>());
    QuickSort(v2.begin(), v2.end(), std::less<int>());
    EXPECT_TRUE(v1 == v1_sorted);
    EXPECT_TRUE(v2 == v2_sorted);
}

TEST(Sorting, CanSortDesc) {
    std::vector<int> v1 {6, 24, 15, 21, 26, 22, 29, 1, 2, 14, 10, 16, 28, 9, 20, 17, 13, 5, 4, 19, 3, 11, 23, 8, 27, 30, 25, 18, 12, 7};
    std::vector<int> v2 {5, 23, 6, 17, 8, 1, 27, 28, 16, 6, 22, 10, 13, 19, 1, 2, 11, 4, 24, 3, 7, 6, 12, 26, 20, 30, 29, 21, 14, 28};
    std::vector<int> v1_sorted {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v2_sorted {30, 29, 28, 28, 27, 26, 24, 23, 22, 21, 20, 19, 17, 16, 14, 13, 12, 11, 10, 8, 7, 6, 6, 6, 5, 4, 3, 2, 1, 1};

    QuickSort(v1.begin(), v1.end(), std::greater<int>());
    QuickSort(v2.begin(), v2.end(), std::greater<int>());
    EXPECT_EQ(v1, v1_sorted);
    EXPECT_EQ(v2, v2_sorted);
}

/**********************************************************************************/

TEST(Intersect, CanFindIntersection) {
    std::vector<int> v1 {1, 1, 2, 3, 5, 6, 6, 7, 8, 8};
    std::vector<int> v2 {3, 4, 5, 6, 7, 8, 8};
    std::vector<int> intersection {3, 5, 6, 7, 8, 8};

    ASSERT_TRUE(SetIntersection(v1.begin(), v1.end(), v2.begin(), v2.end()) == intersection);
}

TEST(Intersect, NoIntersection) {
    std::vector<int> v1 {1};
    std::vector<int> v2 {3, 4, 5, 6, 7, 8, 8};
    std::vector<int> intersection {};

    ASSERT_TRUE(SetIntersection(v1.begin(), v1.end(), v2.begin(), v2.end()) == intersection);
}
