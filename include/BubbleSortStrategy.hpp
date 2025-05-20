#ifndef BUBBLESORTSTRATEGY_H
#define BUBBLESORTSTRATEGY_H

#include "SortingStrategy.hpp"

class BubbleSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
};

#endif // BUBBLESORTSTRATEGY_H
