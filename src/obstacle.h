#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "SDL.h"
#include <vector>

class Obstacle{
    public:
    std::size_t screen_width;
    std::size_t screen_height;
    std::size_t grid_width;
    std::size_t grid_height;
    int width;
    int height;
    Obstacle(std::size_t screen_w, std::size_t screen_h, std::size_t grid_w, std::size_t grid_h);
    //To ckeck if the given cell is obstacle
    bool isObstacle( int x, int y);
    std::vector<SDL_Rect> createObstacle(int level);
    std::vector<SDL_Rect> obstacleForLevel2();
    std::vector<SDL_Rect> obstacleForLevel3();
    std::vector<SDL_Rect> obstacleForLevel4();
    void obstacleUpdate(int level ) ; 
    int getLevel() ;
    private : 
    int _level; 
    std::vector<SDL_Rect> _currentObstacles ; 
};

#endif