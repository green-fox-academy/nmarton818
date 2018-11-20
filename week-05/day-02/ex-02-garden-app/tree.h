#ifndef EX_02_GARDEN_APP_TREE_H
#define EX_02_GARDEN_APP_TREE_H

#include "plant.h"

class Tree : public Plant{
public:
    Tree();
    explicit Tree(const std::string& color);
    Tree(float waterAmount, const std::string& color);
    void watering(float water) override;
    bool needsWater() override;
    std::string getType() override;
};


#endif //EX_02_GARDEN_APP_TREE_H
