#include "Tree.h"

int Tree::totalTrees = 0;

Tree::Tree(const std::string& treeName, TreeType treeType) : name(treeName), type(treeType) {
    id = ++totalTrees;
}

Tree::Tree(TreeType treeType) : type(treeType) {
    id = ++totalTrees;
    name = generateName(treeType);
}

Tree::~Tree() {}

std::string Tree::generateName(TreeType type) {
    if (type == TreeType::Oak) return "Дуб";
    if (type == TreeType::Maple) return "Клен";
    if (type == TreeType::Birch) return "Береза";
    return "Неизвестное дерево";
}

int Tree::getID() const {
    return id;
}

std::string Tree::getName() const {
    return name;
}

OakTree::OakTree() : Tree(TreeType::Oak) {}

void OakTree::wind() const {
    std::cout << "Ветер шумит в дубе: " << name << " с ID " << id << std::endl;
}

MapleTree::MapleTree() : Tree(TreeType::Maple) {}

void MapleTree::wind() const {
    std::cout << "Ветер шумит в клене: " << name << " с ID " << id << std::endl;
}

BirchTree::BirchTree() : Tree(TreeType::Birch) {}

void BirchTree::wind() const {
    std::cout << "Ветер шумит в березе: " << name << " с ID " << id << std::endl;
}