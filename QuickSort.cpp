#include "QuickSort.h"

#include <algorithm>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quicksort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quicksort(std::vector<int>& list, int left, int right) {
    int pivot_index = (left + right) / 2;
    std::swap(list[pivot_index], list[right]);
    int pivot = list[right];
    int left_number = left;

    for (int j = left_number; j < right; j++) {
        if (list[j] <= pivot) {
            std::swap(list[left_number], list[j]);
            left_number++;
        }
    }
    if (left_number >= right) {
        return;
    }


    std::swap(list[left_number], list[right]);
    quicksort(list, left_number, left_number - 1);
    quicksort(list, left_number + 1, right);
}
