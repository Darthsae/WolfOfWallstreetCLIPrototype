#pragma once
#ifndef GAME_INSTANCE_H
#define GAME_INSTANCE_H
#include <vector>
#include <WolfOfWallstreet/Game/GameSave.h>

namespace WolfOfWallstreet::Game {
    struct GameInstance {
    public:
        std::vector<GameSaveProfile> saves;
        GameSave currentSave;
    };
}
#endif