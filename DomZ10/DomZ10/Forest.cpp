#include "Forest.h"

void Forest::addTree(std::shared_ptr<Tree> tree) {
    trees.push_back(tree);
}

void Forest::windAll() const {
    for (const auto& tree : trees) {
        tree->wind();
    }
}

int Forest::countTrees() const {
    return trees.size();
}