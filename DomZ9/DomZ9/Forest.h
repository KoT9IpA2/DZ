#ifndef FOREST_H
#define FOREST_H

#include <vector>
#include <memory>
#include "Tree.h"

class Forest {
private:
    std::vector<std::shared_ptr<Tree>> trees;

public:
    void growUp(std::shared_ptr<Tree> tree);
    void cutAll();
    int getTreesNumber() const;
    Forest operator+(const Forest& other);
    void wind() const;
};

#endif