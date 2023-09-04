#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool finished;
    int number = list.size();
    do {
        finished = false;
        for (int i = 1; i < number; i++) {
            if (list[i-1] > list[i]) {
                std::swap(list[i-1], list[i]);
                finished = true;
            }
        }
        number--;
    } while (finished);
    return list;
}
