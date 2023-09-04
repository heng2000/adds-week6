#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int item) {
    return binary_search(list, item, 0, list.size() - 1);
}

bool RecursiveBinarySearch::binary_search(std::vector<int> list, int item, int start, int end) {
    if (start > end) {
        return false;
    }
    int mid_number = (start + end) / 2;
    if (list[mid_number] == item) {
        return true;
    } else if (list[mid_number] > item) {
        return binary_search(list, item, start, mid_number - 1);
    } else {
        return binary_search(list, item, mid_number + 1, end);
    }
}

