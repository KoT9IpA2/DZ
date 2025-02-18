#include "Air.h"

float AirDelivery::calculateCost(float weight, float distance) const 
{
    return (distance * 5.0f) + (weight * 1.5f); 
}