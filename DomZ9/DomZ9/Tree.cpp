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
        return "���";
    case TreeType::Maple:
        return "����";
    case TreeType::Birch:
        return "������";
    default:
        return "����������";
    }
}

void Tree::wind() const {
    std::cout << "����� ����� ����� ������: " << name << " � ID: " << id << std::endl;
}

int Tree::getID() const {
    return id;
}

std::string Tree::getName() const {
    return name;
}
