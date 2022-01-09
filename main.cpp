#include "raylib.h"
#include "raymath.h"
#include "Game.h"

#include <vector>

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    Game game;
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        game.update();
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            game.drawAll();
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

//TODO
/*
-game object                            DONE
-scene object
-better movement(physics?)
-attacks
-texture drawing
-world map
---After sprites are made---
-animation
-background movement
*/
