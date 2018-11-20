#include "garden.h"
#include "plant.h"
#include "flower.h"
#include "tree.h"
#include <iostream>

void Garden::addPlant(Plant *plant) {
    _plants.push_back(plant);
    if(plant->needsWater())
        _needsWatering++;
}

void Garden::distributeWater(float waterAmount) {
    for(int i = 0; i < _plants.size(); i++){
        if(_plants[i]->needsWater())
            _plants[i]->watering(waterAmount/_needsWatering);
    }
}

void Garden::printGarden() {
    for(int i = 0; i < _plants.size(); i++){
        std::cout << _plants[i]->getColor() << " " << _plants[i]->getType() << " has this much water: " << _plants[i]->getWaterAmount() << std::endl;
    }
}
