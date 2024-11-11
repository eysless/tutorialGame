#include <raylib.h>


int main()
{
    //inzializzazione
    //---------------------------------------------------------------------------------------
    const int iLarghezzaSchermo = 1280;
    const int iAltezzaSchermo = 720;

    InitWindow(iLarghezzaSchermo, iAltezzaSchermo, "Prima prova");

    Vector2 posPalla = {(float)iLarghezzaSchermo/2, (float)iAltezzaSchermo/2};

    SetTargetFPS(60);
    //---------------------------------------------------------------------------------------

    //Game Loop
    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_D)) posPalla.x += 2.0f;
        if (IsKeyDown(KEY_A)) posPalla.x -= 2.0f;
        if (IsKeyDown(KEY_W)) posPalla.y -= 2.0f;
        if (IsKeyDown(KEY_S)) posPalla.y += 2.0f;

        // funzioni Draw
        //----------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawCircleV(posPalla, 30, RED);


        EndDrawing();
        //------------------------------------------------------------------

    }


    // De-Inizializzazione
    CloseWindow();

    return 0;
}