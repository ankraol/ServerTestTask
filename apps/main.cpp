#include "ArrayReversedUnion.h"

int main(int argc, char *argv[]) {
    if (argc == 2)
    {
    Array a(argv[1]);

    std::cout << "Arrays from file:\n";
    a.PrintArray();
    std::cout << "Sorted arrays:\n";
    a.SortArray();
    a.PrintArray();
    std::cout << "Intersection of two biggest arrays:\n";
    a.PrintMaxIntersection();
    std::cout << "Intersection of all three arrays:\n";
    a.PrintTotalIntersection();
    std::cout << "Reversed unique elements:\n";
    a.PrintReversedUnion();
    }
    else if (argc > 2)
    {
        std::cout << "Usage: Enter relative path to a file or just run the program.\n";
    }
    else
    {
        std::cout << "List of commands:\n"
                    << "SORT - sorts your arrays.\n"
                    << "INTERSECTION - returns intersection of two biggest arrays and all three.\n"
                    << "UNION - returns unique elements sorted in desceding order.\n"
                    << "BUT FIRST OF ALL - ENTER RELATIVE PATH TO THE TARGET FILE\n"
                    << "Where can I find your file? -> ";
        std::string fileName;
        std::cin >> fileName;
        Array a(fileName);
        
        std::cout << "Enter command -> ";

        std::string command;
        std::cin >> command;
        
        if (command == "SORT")
        {
            a.SortArray();
            std::cout << "Here is your sorted array :)\n";
            a.PrintArray();
        }
        else if (command == "INTERSECTION")
        {
            std::cout << "Intersection of two biggest arrays:\n";
            a.PrintMaxIntersection();
            std::cout << "Intersection of all three arrays:\n";
            a.PrintTotalIntersection();
        }
        else if (command == "UNION")
        {
            std::cout << "Here is your unique elements in descending order :)\n";
            a.PrintReversedUnion();
        }
        else
        {
            std::cout << "Wrong command :(\n";
        }
    }
    return 0;
}
