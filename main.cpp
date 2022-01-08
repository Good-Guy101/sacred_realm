#include "raylib.h"
#include "raymath.h"
#include "Player.h"

#include <vector>

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Scared Realm");
    Player player;
    
    std::vector<Entity> entities;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        player.move();
        player.update();
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLUE);
            DrawRectangle(0, 225, 800, 225, BROWN);
            player.draw();
            DrawFPS(700,0);
            
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
-game object
-scene object
-better movement(physics?)
-attacks

---After sprites are made---
-animation
-background movement
*/
