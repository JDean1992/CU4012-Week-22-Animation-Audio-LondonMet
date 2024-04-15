#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
class Mario :
    public GameObject
{
    int speed;
    Animation walk;
    Animation swim;
    Animation duck;
    Animation* currentAnimation;
    sf::Texture MarioSpriteSheet;

public:
    Mario();

    void handleInput(float dt) override;
};

