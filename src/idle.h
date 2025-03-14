#ifndef IDLE_H
#define IDLE_H

#include "player.h"

class Idle : public Player {
public:
    Texture2D Texture;
    Idle();
    void LoadTextures() override;
    void Move(float deltaTime, bool insideLibrary, bool insideClassroom, bool insideHospital, bool insideCDS,bool insideHall) override;
    void Draw(Vector2 cameraPosition) override;
};

#endif // IDLE_H