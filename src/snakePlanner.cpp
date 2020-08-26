#include "snakePlanner.h"
#include <cmath>
#include <iostream>




// SnakePlanner::SnakePlanner(Game cgame){
//   SnakePlanner::snakePlayer = (cgame.getSnake());
//   SnakePlanner::food = cgame.getFood();
// }

float SnakePlanner::distancePoints(float headx, float heady, float endx, float endy){
  float distance = std::sqrt(std::pow((headx - endx), 2) + std::pow((heady - endy), 2));
  return distance;
}

Nodes SnakePlanner::Scenarios(Snake::Direction direction, float x, float y,SDL_Point food ) {
  switch (direction) {
    case Snake::Direction::kUp:
      y -= speed;
      break;
    case Snake::Direction::kDown:
      y += speed;
      break;
    case Snake::Direction::kLeft:
      x -= speed;
      break;
    case Snake::Direction::kRight:
      x += speed;
      break;
  }
  // Wrap the Snake around to the beginning if going off of the screen.
  x = fmod(x + get_grid_width(), get_grid_width());
  y = fmod(y + get_grid_height(), get_grid_height());
  // float currScore = parent.score - distancePoints(parent.headx, parent.heady, (float)food->x, (float)food->y) + distancePoints(parent.headx, parent.heady, x, y);
  float currScore = distancePoints(x, y,(float)(food.x), (float)(food.y));
  int new_x = static_cast<int>(x);
  int new_y = static_cast<int>(y);

  if (food.x == new_x && food.y == new_y){
    currScore = -currScore;
  }
 
  Nodes curNode(x,y,currScore, direction);
  return curNode;
}


std::vector<Nodes> SnakePlanner::findNeighbors(SDL_Point food){

    std::vector<Nodes> holder;
    std::vector<Snake::Direction> options = { Snake::Direction::kUp, Snake::Direction::kDown, Snake::Direction::kLeft, Snake::Direction::kRight};

    for (auto& direct: options){

        Nodes childNode = SnakePlanner::Scenarios(direct,head_x, head_y, food );
          holder.push_back(childNode);
          //  if ( (explored.count(std::vector<float>{childNode.headx, childNode.heady}) ==0)){

          //      holder.push_back(childNode);
          //  }
    }     
    return holder;

}
Snake::Direction SnakePlanner::Reverse(Snake::Direction direct){
    switch(direct){
    case Snake::Direction::kUp:
          return Snake::Direction::kDown;

    case Snake::Direction::kDown:

          return Snake::Direction::kUp;

    case Snake::Direction::kLeft:

          return Snake::Direction::kRight;;

    case Snake::Direction::kRight:
          return Snake::Direction::kLeft;;

  }

}

Snake::Direction SnakePlanner::BFS(std::vector<Nodes> child){
    for (auto node: child ){
      frontier.push(node);
    }
    Nodes current = frontier.top();
    frontier.pop();
    while((current.direction== prior) && !(Snake::SnakeCell(static_cast<int>(current.headx), static_cast<int>(current.heady)))){
      current = frontier.top();
      frontier.pop();
    }
    // if (!(Snake::SnakeCell(static_cast<int>(current.headx), static_cast<int>(current.heady)))){
    //   std::cout<<"Hey"<<std::endl;
    // }
    frontier = {};
    // std::cout<< "Hi"<std::endl;
    prior = Reverse(current.direction);
    return current.direction;    
}

// void SnakePlanner::AStar(){
//   if (static_cast<int> (snakePlayer->head_x)== food->x){
//     return; 
//   }

//   Nodes starter(snakePlayer->head_x,snakePlayer->head_y,float(0.0));
//   frontier.push(starter);
//   std::vector<float>position = {starter.headx, starter.heady};
//   path[position] = &starter;

// //   while ((!frontier.empty())&& !found){
// //     Nodes current = frontier.pop();
// //     explored.insert(std::vector<float>{current.headx, current.heady});
// //     std::vector<Nodes> children = SnakePlanner::findNeighbors(starter);

// //     for (auto node: children ){

// //         float tentative = node.score;

// //         if ((explored.count(std::vector<float>{childNode.headx, childNode.heady})) && node.score< current.score){

// //         }

// //           frontier.push(node);
// //      }
// //   }
  
// //   std::vector<Nodes> children = SnakePlanner::findNeighbors(starter);

  

// //   for (auto node: children ){
// //     frontier.push(node);
// //   }

// //   if (frontier.empty()){
// //     return;
// //   }
// }