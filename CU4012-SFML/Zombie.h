#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
class Zombie :
    public GameObject
{

    Animation walk;
    sf::Texture zomTexture;
    int speed;
public:
     Zombie();

     void handleInput(float dt) override;
    void update(float dt) override;

};

