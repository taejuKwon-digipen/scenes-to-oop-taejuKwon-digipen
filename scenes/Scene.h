// Name       : Taeju Kwon
// Assignment : Scenes to OOP
// Course     : CS170
// Term & Year: Spring 2021
#pragma once


class Game;

class Scene
{
    Game* gameInstance;

public:
    Scene(Game& the_game) : gameInstance(&the_game) {}

    Game&       game() { return *gameInstance; }
    const Game& game() const { return *gameInstance; }

    virtual void Update()     = 0;
    virtual void Draw() = 0;

    virtual ~Scene()              = default;
    Scene(const Scene& other)     = default;
    Scene(Scene&& other) noexcept = default;
    Scene& operator=(const Scene& other) = default;
    Scene& operator=(Scene&& other) noexcept = default;
};
