#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "player.h"
#include <raylib.h>

class Professor : public Player {
public:
    Professor();
    void LoadTextures() override;
    void UnloadTextures() ;
    void Draw(Vector2 position) override;
    void DrawConversation(int step, Vector2 position);

    int proConvoStep;

private:
    Texture2D convoTextures[14];
    Texture2D texture;
};

#endif // PROFESSOR_H