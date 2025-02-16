#include "Forest.h"

void Forest::growUp(std::shared_ptr<Tree> tree) {
    trees.push_back(tree);
}

void Forest::cutAll() {
    trees.clear();
}

int Forest::getTreesNumber() const {
    return trees.size();
}

Forest Forest::operator+(const Forest& other) {
    Forest mergedForest;
    mergedForest.trees = trees;
    mergedForest.trees.insert(mergedForest.trees.end(), other.trees.begin(), other.trees.end());
    return mergedForest;
}

void Forest::wind() const {
    for (const auto& tree : trees) {
        tree->wind();
    }
}
