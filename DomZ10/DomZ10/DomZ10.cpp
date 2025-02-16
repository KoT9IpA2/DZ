#include "Tree.h"
#include "Forest.h"
#include <locale>

int main() 
{
    setlocale(LC_ALL, "Russian");
    std::shared_ptr<Tree> oak = std::make_shared<OakTree>();
    std::shared_ptr<Tree> maple = std::make_shared<MapleTree>();
    std::shared_ptr<Tree> birch = std::make_shared<BirchTree>();

    // Создаем лес
    Forest forest;
    forest.addTree(oak);
    forest.addTree(maple);
    forest.addTree(birch);

    // Показываем все деревья
    std::cout << "Лес содержит " << forest.countTrees() << " деревьев." << std::endl;
    forest.windAll();

    return 0;
}