// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#pragma once
#include "Scene.h"
#include "doodle/doodle.hpp"

class PlayScreen : public Scene
{
public:
    PlayScreen(Game& the_game);

    void setup();
    void Draw() override;
    void Update() override;
};
