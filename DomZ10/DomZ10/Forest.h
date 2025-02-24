#ifndef FOREST_H
#define FOREST_H

#include "Tree.h"

// Класс Forest (Лес)
class Forest {
protected:
    std::vector<std::shared_ptr<Tree>> trees; // Список деревьев

public:
    void addTree(std::shared_ptr<Tree> tree); // Добавить дерево
    void windAll() const; // Ветер по всем деревьям
    int countTrees() const; // Количество деревьев
};

#endif