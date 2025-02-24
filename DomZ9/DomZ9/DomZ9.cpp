#include "Tree.h"
#include "Forest.h"

int main() {

    setlocale(LC_ALL, "Russian");
    // Создание деревьев
    auto oak1 = std::make_shared<Tree>("Дуб", TreeType::Oak);
    auto maple1 = std::make_shared<Tree>(TreeType::Maple);
    auto birch1 = std::make_shared<Tree>(TreeType::Birch);

    // Создание лесов
    Forest forest1;
    forest1.growUp(oak1);
    forest1.growUp(maple1);
    forest1.growUp(birch1);

    std::cout << "Лес 1 содержит " << forest1.getTreesNumber() << " деревьев." << std::endl;
    forest1.wind();

    // Создание второго леса и слияние
    Forest forest2;
    auto oak2 = std::make_shared<Tree>(TreeType::Oak);
    forest2.growUp(oak2);

    std::cout << "Лес 1 содержит " << forest2.getTreesNumber() << " деревьев." << std::endl;

    Forest mergedForest = forest1 + forest2;
    std::cout << "После слияния объединенный лес содержит " << mergedForest.getTreesNumber() << " деревьев." << std::endl;

    mergedForest.wind();

    // Вырубка леса
    mergedForest.cutAll();
    std::cout << "После вырубки объединенный лес содержит " << mergedForest.getTreesNumber() << " деревьев." << std::endl;

    return 0;
}
