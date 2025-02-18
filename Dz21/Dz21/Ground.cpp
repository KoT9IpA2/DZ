#include "Ground.h"

float GroundDelivery::calculateCost(float weight, float distance) const 
{
    return distance * 2.0f; 
}