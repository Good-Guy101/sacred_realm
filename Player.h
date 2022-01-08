#include "raylib.h"
#include "raymath.h"
#include "Entity.h"
#include <string>

class Player : virtual public Entity{
    private:
    

    public:
        void move();
};

void Player::move(){
    if (IsKeyDown(KEY_W))
        vel.y -= 2;
    if (IsKeyDown(KEY_A)) 
        vel.x -= 4;
    if (IsKeyDown(KEY_S)) 
        vel.y += 2;
    if (IsKeyDown(KEY_D)) 
        vel.x += 4;
    
    if(pos.x > 800) pos.x = 800;
    if(pos.x < 0) pos.x = 0;
    if(pos.y < 225) pos.y = 225;
    if(pos.y > 450) pos.y = 450;
}