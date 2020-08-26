#include "Nodes.h"
#include <cmath>
#include <iostream>


Nodes::Nodes(float headx, float heady, float score, Snake::Direction direction){
    // Nodes::parent = std::make_shared<Nodes>(parent);
    Nodes::headx = headx;
    Nodes::heady = heady;
    Nodes::score = score;
    Nodes::direction = direction;
}

Nodes::Nodes(float headx, float heady, float score){
    Nodes::headx = headx;
    Nodes::heady = heady;
    Nodes::score = score;
}


