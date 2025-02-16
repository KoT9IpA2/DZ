#ifndef TREE_H
#define TREE_H
#include <string>
#include <iostream>

enum class TreeType {
    Oak,
    Maple,
    Birch
};

class Tree {
protected:
    static int totalTrees;
    int id;
    std::string name;
    TreeType treeType;

public:
    Tree(const std::string& treeName, TreeType type);
    Tree(TreeType type);
    Tree(const Tree& other);
    virtual ~Tree() = default;

    static std::string generateName(TreeType type);
    virtual void wind() const;
    int getID() const;
    std::string getName() const;
};
#endif