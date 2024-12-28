#include "raylib.h"

int main() 
{
    // window dimensions 
    int width = 800;
    int height = 450; 
    InitWindow(width, height, "Paul's Window");

    // circle coordinates
    int circle_x = width/2; 
    int circle_y = height/2; 

    // axe coordinates 
    int axe_x = 400; 
    int axe_y = 0; 

    int direction = 10; 

    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);

        // game logic begins 
        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move the axe 
        axe_y += direction; 
        if(axe_y > height || axe_y < 0)
        {
            direction *= -1;
        }

        if (IsKeyDown(KEY_D) && circle_x < width)
        {
            circle_x += 10; 
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        // game logic ends 
        EndDrawing();
    }
}