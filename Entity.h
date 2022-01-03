#include "raylib.h"
#include "raymath.h"


class Entity {
    private:
        Vector2 size;
    public:
        Entity(Vector2);
        Vector2 pos;
        void draw();
};

Entity::Entity(Vector2 inSize){
    this->pos = {0,0};
    this->size = inSize;
}

void Entity::draw(){
    DrawRectangleLines((int)pos.x, (int)pos.y, (int)size.x, (int)size.y, RED);
}