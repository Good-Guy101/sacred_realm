#include "raylib.h"
#include "raymath.h"
#include "Entity.h"
#include <string>

class Player : public Entity{
    private:
        const int playerWidth = 10;
        const int playerHeight = 20;
    
    public:
        Player();
        draw();
};