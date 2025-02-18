#include "Express.h"

float ExpressDelivery::calculateCost(float weight, float distance) const 
{
    return (distance * 10.0f) + (weight * 3.0f) + 50.0f; 
}