#include "raylib.h"
#include "raymath.h"
#include "Entity.h"

Entity::Entity(Vector2 inSize){
    this->pos = {0f,0f};
    this->size = inSize;
}

void Entity::draw(){
    DrawRectangleLines((int)pos.x, (int)pos.y, (int)size.x, (int)size.y, RED);
}