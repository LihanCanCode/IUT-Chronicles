#include "Professor.h"

Professor::Professor() : Player() {
    position = {1100, 870}; // Initialize the professor's position
    proConvoStep = 0;
}

void Professor::LoadTextures() {
    texture = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/professor.png");
    convoTextures[0] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro1.png");
    convoTextures[1] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro2.png");
    convoTextures[2] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro3.png");
    convoTextures[3] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro4.png");
    convoTextures[4] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro5.png");
    convoTextures[5] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro6.png");
    convoTextures[6] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro7.png");
    convoTextures[7] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro8.png");
    convoTextures[8] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro9.png");
    convoTextures[9] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro10.png");
    convoTextures[10] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro11.png");
    convoTextures[11] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro12.png");
    convoTextures[12] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro13.png");
    convoTextures[13] = LoadTexture("C:/Users/Lihan/Desktop/Semester 2-1/Oop Lab/Project_Fall/Project_Fall/src/pro14.png");
}

void Professor::UnloadTextures() {
    UnloadTexture(texture);
    for (int i = 0; i < 14; i++) {
        UnloadTexture(convoTextures[i]);
    }
}

void Professor::Draw(Vector2 position) {
    Rectangle source = {0.0f, 0.0f, (float)texture.width, (float)texture.height};
    Rectangle dest = {position.x-120, position.y-80, 500, 300}; // Use fixed size for professor
    Vector2 origin = {0, 0};
    DrawTexturePro(texture, source, dest, origin, 0.0f, WHITE);
}

void Professor::DrawConversation(int step, Vector2 position) {
    if (step >= 0 && step < 14) {
        DrawTexture(convoTextures[step], position.x, position.y, WHITE);
    }
}