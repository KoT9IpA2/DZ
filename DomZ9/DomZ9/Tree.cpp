#include "Tree.h"

int Tree::totalTrees = 0;

Tree::Tree(const std::string& treeName, TreeType type) : name(treeName), treeType(type) {
    id = ++totalTrees;
}

Tree::Tree(TreeType type) : treeType(type) {
    id = ++totalTrees;
    name = generateName(type);
}

Tree::Tree(const Tree& other) : name(other.name), treeType(other.treeType) {
    id = ++totalTrees;
}

std::string Tree::generateName(TreeType type) {
    switch (type) {
    case TreeType::Oak:
        return "Дуб";
    case TreeType::Maple:
        return "Клен";
    case TreeType::Birch:
        return "Береза";
    default:
        return "Неизвестно";
    }
}

void Tree::wind() const {
    std::cout << "Ветер шумит среди дерева: " << name << " с ID: " << id << std::endl;
}

int Tree::getID() const {
    return id;
}

std::string Tree::getName() const {
    return name;
}
