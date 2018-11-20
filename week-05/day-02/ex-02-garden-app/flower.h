#ifndef EX_02_GARDEN_APP_FLOWER_H
#define EX_02_GARDEN_APP_FLOWER_H

#include "plant.h"
#include <iostream>

class Flower : public Plant{
public:
    Flower();
    explicit Flower(const std::string& color);
    Flower(float waterAmount, const std::string& color);
    void watering(float water) override;
    bool needsWater() override;
    std::string getType() override;
};


#endif //EX_02_GARDEN_APP_FLOWER_H
