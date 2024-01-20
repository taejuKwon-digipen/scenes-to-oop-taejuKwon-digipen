// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#pragma once

#include "Button.h"
#include "Scene.h"

class Game;

class MainMenu : public Scene
{
    Button play, options, credits;

public:
    MainMenu(Game& the_game);

    void Update() override;
    void Draw() override;
};
