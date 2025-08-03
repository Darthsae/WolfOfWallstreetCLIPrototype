#pragma once
#ifndef PERSON_H
#define PERSON_H
namespace WolfOfWallstreet::Game {
    struct Person;
}

#include <stdint.h>
#include <vector>
#include <WolfOfWallstreet/Game/Social/Relationship.h>
#include <WolfOfWallstreet/Game/Time/Date.h>
#include <WolfOfWallstreet/Game/Language/Name.h>
#include <WolfOfWallstreet/Game/Data/SocialSecurityNumber.h>

using WolfOfWallstreet::Game::Data::social_security_number;
using WolfOfWallstreet::Game::Language::Name;
using WolfOfWallstreet::Game::Time::Date;
using WolfOfWallstreet::Game::Social::Relationship;

namespace WolfOfWallstreet::Game {
    namespace WOW = WolfOfWallstreet;

    struct Person {
    public:
        Name name;
        social_security_number socialSecurityNumber;
        Date dateOfBirth;
        std::vector<Relationship> relations;
    };
}
#endif