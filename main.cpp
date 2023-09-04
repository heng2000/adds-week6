#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string a_string;
    std::getline(std::cin, a_string);
    std::vector<int> list;
    std::stringstream the_string(a_string);
    int a_number;
    while (the_string >> a_number) {
        list.push_back(a_number);
    }
    QuickSort quicksort;
    std::vector<int> sorted = quicksort.sort(list);
    RecursiveBinarySearch rbsearch;
    bool found = rbsearch.search(sorted, 1);
    std::cout << (found ? "true" : "false") << " ";
    for (int i = 0; i < sorted.size(); i++) {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
