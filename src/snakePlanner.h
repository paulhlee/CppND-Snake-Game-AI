#ifndef SNAKEPLANNER_H


#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <map>
#include "SDL.h"
#include "snake.h"
#include "Nodes.h"
#include "memory"

class Compare
{
public:
    bool operator() (Nodes a, Nodes b)
    {
        return -a.score < -b.score;
    }
};

class Game;

class SnakePlanner: public Snake{

    public:



        SnakePlanner(int grid_width, int grid_height): Snake::Snake(grid_width,grid_height ){};
        Nodes Scenarios(Snake::Direction direction, float x, float y,SDL_Point food);
        // // void AStar();
        std::vector<Nodes> findNeighbors(SDL_Point food);
        // // void AddNeighbors(std::vector<Nodes>);

        // // std::vector<Snake::Direction> getDirections(return directions);
        float distancePoints(float headx, float heady, float endx, float endy);

        Snake::Direction BFS(std::vector<Nodes> child);

        Snake::Direction Reverse(Snake::Direction direct);

    private:

        // bool found;
        // Snake *snakePlayer;
        // SDL_Point *food;
        std::set<std::vector<float>>explored;
        std::priority_queue<Nodes, std::vector<Nodes>, Compare> frontier;
        std::map<std::vector<float>, Nodes*> path;
        Snake::Direction prior;
        // std::vector<Snake::Direction> directions;
                

};
#endif