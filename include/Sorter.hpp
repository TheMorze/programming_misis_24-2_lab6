#ifndef SORTER_H
#define SORTER_H

#include "SortingStrategy.hpp"
#include <vector>

// Контекст — класс, принимающий стратегию
class Sorter {
public:
    explicit Sorter(SortingStrategy* strategy);
    void setStrategy(SortingStrategy* strategy);
    void sortData(std::vector<int>& data);
private:
    SortingStrategy* strategy_;
};

#endif // SORTER_H
