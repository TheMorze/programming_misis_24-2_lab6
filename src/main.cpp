#include <iostream>
#include <vector>
#include "BubbleSortStrategy.hpp"
#include "QuickSortStrategy.hpp"
#include "StdSortStrategy.hpp"
#include "InsertionSortStrategy.hpp"
#include "Sorter.hpp"

void printVector(const std::vector<int>& data) {
    for (int num : data) std::cout << num << " ";
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    BubbleSortStrategy bubble;
    QuickSortStrategy quick;
    StdSortStrategy stds;
    InsertionSortStrategy insertion;

    Sorter sorter(&bubble);
    std::cout << "Original data: "; printVector(data);

    auto copy = data;
    sorter.sortData(copy);
    std::cout << "Bubble sorted:   "; printVector(copy);

    sorter.setStrategy(&quick);
    copy = data;
    sorter.sortData(copy);
    std::cout << "Quick sorted:    "; printVector(copy);

    sorter.setStrategy(&stds);
    copy = data;
    sorter.sortData(copy);
    std::cout << "Std::sort:       "; printVector(copy);

    sorter.setStrategy(&insertion);
    copy = data;
    sorter.sortData(copy);
    std::cout << "Insertion sort:  "; printVector(copy);

    return 0;
}
