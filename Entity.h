#include "raylib.h"
#include "raymath.h"


class Entity {
    private:
        Vector2 size = {50,100};
        Vector2 origin = {size.x/2, size.y};
    public:
        Entity();
        Vector2 pos;
        Vector2 vel;
        void draw();
        void update();
};

Entity::Entity(){
    this->pos = {0,0};
    this->vel = {0,0};
}

void Entity::draw(){
    DrawRectangleLines((int)pos.x - origin.x, (int)pos.y - origin.y, (int)size.x, (int)size.y, RED);
}

void Entity::update(){
    pos = Vector2Add(pos, vel);
    vel = {0,0};
}
