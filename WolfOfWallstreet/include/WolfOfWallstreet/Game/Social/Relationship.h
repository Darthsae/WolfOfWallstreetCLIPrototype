#pragma once
#ifndef RELATIONSHIP_H
#define RELATIONSHIP_H
namespace WolfOfWallstreet::Game::Social {
    struct Relationship;
    struct IRelationType;
}

#include <WolfOfWallstreet/Game/Person.h>
#include <memory>
#include <stdint.h>
#include <string>

using WolfOfWallstreet::Game::Person;

namespace WolfOfWallstreet::Game::Social {
    struct IRelationType {
        virtual std::string Debug(void) = 0;
    };

    struct FamilyRelation: public IRelationType {
    public:
        FamilyRelation(int32_t, int32_t, bool);

        bool biological = true;
        int32_t generation = 0;
        int32_t directness = 0;

        std::string Debug(void) override;
    };

    struct Relationship {
    public:
        std::unique_ptr<IRelationType> relationType;
        int32_t strength = 0;

        std::string Debug(void);
    };
}
#endif