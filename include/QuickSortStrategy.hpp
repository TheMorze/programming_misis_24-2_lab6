#ifndef QUICKSORTSTRATEGY_H
#define QUICKSORTSTRATEGY_H

#include "SortingStrategy.hpp"

class QuickSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
private:
    void quickSort(std::vector<int>& data, int left, int right);
};

#endif // QUICKSORTSTRATEGY_H
