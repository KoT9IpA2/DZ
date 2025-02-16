#ifndef ARRANALYZ_H
#define ARRANALYZ_H

#include <vector>
#include <mutex>

class DataProcessor 
{
public:
    DataProcessor(int size, int minVal, int maxVal);

    void process(); 

private:
    std::vector<int> data;
    int sum;
    int maxElement;
    int minElement;
    std::mutex mtx;

    void calculateSum();
    void findMax();
    void findMin();
    void generateRandomData(int minVal, int maxVal);
    void printResults();
};

#endif // DATAPROCESSOR_H
