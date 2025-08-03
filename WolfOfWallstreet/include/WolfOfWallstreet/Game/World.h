#pragma once
#ifndef WORLD_H
#define WORLD_H
#include <unordered_map>
#include <WolfOfWallstreet/Game/Data/SocialSecurityNumber.h>
#include <WolfOfWallstreet/Game/Person.h>

using WolfOfWallstreet::Game::Data::social_security_number;
using WolfOfWallstreet::Game::Person;

namespace WolfOfWallstreet::Game {
    struct World {
    public:
        std::unordered_map<social_security_number, Person> people;
    };
}
#endif