#include "arranalyz.h"
#include <iostream>
#include <thread>
#include <algorithm>
#include <random>

DataProcessor::DataProcessor(int size, int minVal, int maxVal)
    : sum(0), maxElement(0), minElement(0) 
{
    data.resize(size);
    generateRandomData(minVal, maxVal);
}

void DataProcessor::generateRandomData(int minVal, int maxVal) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(minVal, maxVal);

    for (int& num : data) {
        num = dist(gen);
    }
}

void DataProcessor::process() 
{
    std::thread t1(&DataProcessor::calculateSum, this);
    std::thread t2(&DataProcessor::findMax, this);
    std::thread t3(&DataProcessor::findMin, this);

    t1.join();
    t2.join();
    t3.join();

    printResults();
}

void DataProcessor::calculateSum() 
{
    int localSum = 0;
    for (int num : data) {
        localSum += num;
    }
    std::lock_guard<std::mutex> lock(mtx);
    sum = localSum;
}

void DataProcessor::findMax() 
{
    int localMax = *std::max_element(data.begin(), data.end());
    std::lock_guard<std::mutex> lock(mtx);
    maxElement = localMax;
}

void DataProcessor::findMin() 
{
    int localMin = *std::min_element(data.begin(), data.end());
    std::lock_guard<std::mutex> lock(mtx);
    minElement = localMin;
}

void DataProcessor::printResults() 
{
    std::cout << "Сумма элементов: " << sum << std::endl;
    std::cout << "Максимальный элемент: " << maxElement << std::endl;
    std::cout << "Минимальный элемент: " << minElement << std::endl;
}
