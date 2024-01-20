// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#include "MainMenu.h"
#include "Game.h"
#include "SceneDrawing.h"


#include <doodle/environment.hpp>
#include <iostream>

MainMenu::MainMenu(Game& the_game)
    : Scene(the_game), play(doodle::Width / 2.0, doodle::Height * 2.0 / 5.0, "Play"),
      options(doodle::Width / 2.0, doodle::Height * 3.0 / 5.0, "Options"),
      credits(doodle::Width / 2.0, doodle::Height * 4.0 / 5.0, "Credits"){}

void MainMenu::Update()
{
    if (play.DidClickButton())
    {
        std::cout << "Play!\n";
        game().QueueNextScene(GameScenes::PLAY);
    }
    else if (options.DidClickButton())
    {
        std::cout << "Options!\n";
        game().QueueNextScene(GameScenes::OPTIONS);
    }
    else if (credits.DidClickButton())
    {
        std::cout << "Credits!\n";
        game().QueueNextScene(GameScenes::CREDITS);
    }
}

void MainMenu::Draw()
{
    Draw_Title("Main Menu");
    play.Draw();
    options.Draw();
    credits.Draw();
}
