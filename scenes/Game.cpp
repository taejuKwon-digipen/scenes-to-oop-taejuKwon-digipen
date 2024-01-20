// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#include "Game.h"
#include <doodle/drawing.hpp>


void Game::Setup()
{
    doodle::set_frame_of_reference(doodle::FrameOfReference::LeftHanded_OriginTopLeft);

    scenes[GameScenes::MAIN_MENU] = std::make_unique<MainMenu>(*this);
    scenes[GameScenes::CREDITS]   = std::make_unique<CreditsScreen>(*this);
    scenes[GameScenes::OPTIONS]   = std::make_unique<OptionsScreen>(*this);
    scenes[GameScenes::PLAY]      = std::make_unique<PlayScreen>(*this);

    currentScene = scenes[GameScenes::MAIN_MENU].get();
    queuedScene  = scenes[GameScenes::MAIN_MENU].get();
}

void Game::Update()
{
    currentScene->Update();

    if (queuedScene != currentScene)
    {
        currentScene = queuedScene;
    }
}

void Game::Draw() const
{
    doodle::clear_background(BackgroundColor);

    currentScene->Draw();
}

void Game::QueueNextScene(GameScenes scene)
{

    queuedScene = scenes[scene].get();
}
