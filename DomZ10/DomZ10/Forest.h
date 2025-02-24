#ifndef FOREST_H
#define FOREST_H

#include "Tree.h"

// ����� Forest (���)
class Forest {
protected:
    std::vector<std::shared_ptr<Tree>> trees; // ������ ��������

public:
    void addTree(std::shared_ptr<Tree> tree); // �������� ������
    void windAll() const; // ����� �� ���� ��������
    int countTrees() const; // ���������� ��������
};

#endif