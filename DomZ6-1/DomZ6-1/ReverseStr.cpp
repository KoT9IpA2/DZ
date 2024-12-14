#include <iostream>
#include <cstring>
#include "ReverseStr.h"


void ReverseStr(char* str) 
{
    int len = std::strlen(str); 
    int start = 0;
    int end = len - 1;

    
    while (start < end) {
        
        std::swap(str[start], str[end]);
        start++;
        end--;
    }
}
