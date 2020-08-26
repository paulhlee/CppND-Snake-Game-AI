#ifndef NODES_H


#include <iostream>
#include <vector>
#include <string>
#include <set>
#include "SDL.h"
#include "memory"
#include "snake.h"


class Nodes{
    public:
    Nodes();
    Nodes( float headx, float heady, float score, Snake::Direction direction);
    Nodes(float headx, float heady, float score);
    // std::shared_ptr<Nodes> parent;
    float headx;
    float heady;
    float score;
    Snake::Direction direction;
    friend bool operator== (const Nodes &c1, const Nodes &c2){
        return (c1.headx == c2.headx &&
            c1.heady == c2.heady);
        
    }
};



#endif