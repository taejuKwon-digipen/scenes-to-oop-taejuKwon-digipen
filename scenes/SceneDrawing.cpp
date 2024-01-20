// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021

#include "SceneDrawing.h"

#include <doodle/drawing.hpp>

using namespace doodle;

void Draw_Title(const std::string& title_text)
{
    push_settings();

    draw_text(title_text, 25, 90);

    pop_settings();
}
