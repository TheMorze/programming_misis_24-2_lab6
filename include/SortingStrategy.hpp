#ifndef SORTINGSTRATEGY_H
#define SORTINGSTRATEGY_H

#include <vector>

// Интерфейс «Стратегия» для сортировки
class SortingStrategy {
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(std::vector<int>& data) = 0;
};

#endif // SORTINGSTRATEGY_H
