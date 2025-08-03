#pragma once
#ifndef GAME_SAVE_H
#define GAME_SAVE_H
namespace WolfOfWallstreet::Game {
    struct GameSave;
    struct GameSaveProfile;
}

#include <WolfOfWallstreet/Game/World.h>
#include <string>

namespace WolfOfWallstreet::Game {
    struct GameSave {
    public:
        GameSaveProfile profile;
    };

    struct GameSaveProfile {
    public:
        std::string saveName;
    };
}
#endif