// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021
#include "Game.h"
#include <doodle/window.hpp>

int main(void)
{
    doodle::create_window(800, 600);
    Game game;

    game.Setup();

    while (!doodle::is_window_closed())
    {
        doodle::update_window();
        game.Update();
        game.Draw();
    }

    return 0;
}
