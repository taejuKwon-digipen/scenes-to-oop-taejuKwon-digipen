// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#include "PlayScreen.h"
#include "Game.h"

using namespace doodle;

PlayScreen::PlayScreen(Game& the_game) : Scene(the_game){}

void PlayScreen::setup()
{
    set_frame_of_reference(FrameOfReference::LeftHanded_OriginTopLeft);
}


void PlayScreen::Draw()
{
    draw_ellipse(get_mouse_x(), get_mouse_y(), 50, 50);

}

void PlayScreen::Update()
{
 
    if (MouseIsPressed == true)
    {
        game().QueueNextScene(GameScenes::MAIN_MENU);
    }

}