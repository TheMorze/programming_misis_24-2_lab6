#include "QuickSortStrategy.hpp"
#include <vector>

void QuickSortStrategy::sort(std::vector<int>& data) {
    if (!data.empty())
        quickSort(data, 0, static_cast<int>(data.size() - 1));
}

void QuickSortStrategy::quickSort(std::vector<int>& data, int left, int right) {
    int i = left, j = right;
    int pivot = data[left + (right - left) / 2];
    while (i <= j) {
        while (data[i] < pivot) ++i;
        while (data[j] > pivot) --j;
        if (i <= j) {
            std::swap(data[i], data[j]);
            ++i; --j;
        }
    }
    if (left < j) quickSort(data, left, j);
    if (i < right) quickSort(data, i, right);
}
