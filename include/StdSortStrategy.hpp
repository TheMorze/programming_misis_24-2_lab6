#ifndef STDSORTSTRATEGY_H
#define STDSORTSTRATEGY_H

#include "SortingStrategy.hpp"

class StdSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override;
};

#endif // STDSORTSTRATEGY_H
