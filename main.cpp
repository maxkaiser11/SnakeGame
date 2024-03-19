#include "raylib.h"

Color green = {183, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int main()
{
    InitWindow(750, 750, "Retro Snake");
    
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        // Drawing
        ClearBackground(green);

        EndDrawing();
    }


    CloseWindow();
}
