#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <stdint.h>
#include <WolfOfWallstreet/World/Data/SocialSecurityNumber.h>

namespace WolfOfWallstreet::World {
    struct Person {
    public:
        WolfOfWallstreet::World::Data::social_security_number socialSecurityNumber;
    private:
        
    };
}
#endif