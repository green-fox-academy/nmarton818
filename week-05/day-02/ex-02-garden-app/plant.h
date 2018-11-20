#ifndef EX_02_GARDEN_APP_PLANT_H
#define EX_02_GARDEN_APP_PLANT_H

#include <iostream>

class Plant {
protected:
    float _waterAmount;
    std::string _color;
public:
    Plant(float waterAmount, const std::string& color);
    virtual void watering(float water) = 0;
    virtual bool needsWater() = 0;
    virtual std::string getType() = 0;
    std::string getColor() const;
    float getWaterAmount() const;
};


#endif //EX_02_GARDEN_APP_PLANT_H
