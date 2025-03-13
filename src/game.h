#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "idle.h"
#include "map.h"

class Game {
public:
    Player player;
    Idle idle;
    Map map;
    bool initialized;
    bool showDebugInfo;
    Vector2 cameraPosition;
    Camera2D camera;
    bool showConversation;
    Texture2D conversationTexture1;
    Texture2D conversationTexture2;
    Texture2D conversationTexture3;
    Texture2D conversationTexture4;
    Texture2D keyTexture;
    Texture2D hospitalTexture;
    Texture2D libraryTexture;
    Texture2D cdsTexture;
    Texture2D bookTexture;
    Texture2D hallTexture;
    Texture2D hackerTexture;
    Texture2D mysteryTexture;
    Texture2D mysteryTexture2;
    Texture2D mysteryTexture3;
    Texture2D classroomTexture;
    Texture2D usbTexture;
    Texture2D cipherTexture;
    Texture2D cipherTexture2;
    Texture2D gardenerTexture; 
    Texture2D audiTexture;
    Texture2D proTexture;
    Texture2D conversationTexture5;
    Texture2D conversationTexture6;
    Texture2D conversationTexture7;
    Texture2D conversationTexture8;

    Rectangle source1;
    bool keyFound;
    bool bookFound;
    bool keyVisible;
    Vector2 conversationPosition;
    Vector2 mysteryPosition;
    bool firstCollisionOccurred;
    bool mazeActive;
    bool insideHospital;
    bool insideCDS;
    bool insideClassroom;
    bool insideLibrary;
    bool showMystery;
    bool showMystery2;
    bool showMystery3;
    bool usbFound;
    bool showcipher;
    bool showcipher2;
    bool insideHall;
    bool insideAudi;
    bool showGardenerConvo;
    bool  sequence1;
    bool sequence2;
    bool sequence3;
    bool sequence4;
    bool sequence5;
    bool sequence6;
    bool sequence7;
    int gardenerConvoStep;
    bool showProConvo;
    int proConvoStep;
    Texture2D hackerConvoTexture[7];
    Texture2D gardenerConvoTexture[7];
    Texture2D proConvoTexture[14]; 
    Texture2D imamTexture[4];

    bool showHackerConvo;
    int hackerConvoStep;


    int conversationStep = 0;

    Game();
    void Initialize();
    void UpdateCamera();
    void Run();
    
};

#endif // GAME_H