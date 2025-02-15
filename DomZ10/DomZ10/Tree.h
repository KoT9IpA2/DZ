#ifndef TREE_H
#define TREE_H
#include <string>
#include <iostream>
#include <vector>
#include <memory>


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
    TreeType type;         

public:
    Tree(const std::string& treeName, TreeType treeType);
    Tree(TreeType treeType); 
    virtual ~Tree(); 

    static std::string generateName(TreeType type); 

    virtual void wind() const = 0;

    int getID() const; 
    std::string getName() const;
};

// Класс OakTree (Дуб)
class OakTree : public Tree {
public:
    OakTree();
    void wind() const override; 
};

// Класс MapleTree (Клен)
class MapleTree : public Tree {
public:
    MapleTree();
    void wind() const override; 
};

// Класс BirchTree (Береза)
class BirchTree : public Tree {
public:
    BirchTree();
    void wind() const override; 
};

#endif