// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021
#pragma once
#include <doodle/color.hpp>

#include "OptionsScreen.h"
#include "CreditsScreen.h"
#include "MainMenu.h"
#include "PlayScreen.h"
#include "Scene.h"
#include <map>
#include <memory>

enum class GameScenes
{
    MAIN_MENU,
    CREDITS,
    OPTIONS,
    PLAY
};

class Game
{
    Scene*                                       currentScene{ nullptr };
    Scene*                                       queuedScene{ nullptr };
    std::map<GameScenes, std::unique_ptr<Scene>> scenes{};

public:
    Game() = default;

    void          Setup();
    void          Update();
    void          Draw() const;
    doodle::Color BackgroundColor{ 120.0 };
    virtual void  QueueNextScene(GameScenes scene);
};
