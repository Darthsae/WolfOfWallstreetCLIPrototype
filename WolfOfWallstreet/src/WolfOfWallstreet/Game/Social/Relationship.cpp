#include <WolfOfWallstreet/Game/Social/Relationship.h>
#include <format>
#include <print>

using namespace WolfOfWallstreet::Game::Data;
using namespace WolfOfWallstreet::Game::Social;

FamilyRelation::FamilyRelation(int32_t a_directness, int32_t a_generation, bool a_biological) {
    this->directness = a_directness;
    this->generation = a_generation;
    this->biological = a_biological;
}

std::string FamilyRelation::Debug(void) {
    std::string toReturn = "";

    for (int i = 2; i < abs(this->generation); i++) {
        toReturn += "great-";
    }

    if (abs(this->generation) >= 2) {
        toReturn += "grand";
    }

    if (this->generation >= 1) {
        if (this->directness == 0) {
            toReturn += "parent";
        } else {
            toReturn += "pibling";
        }
    } else if (this->generation <= -1) {
        if (this->directness == 0) {
            toReturn += "child";
        } else {
            toReturn += "nibling";
        }
    } else {
        toReturn += "sibling";
    }

    if (!this->biological) {
        toReturn += "-in-law";
    }

    return toReturn;
}

std::string Relationship::Debug(void) {
    return std::format("{} ({}): {}", SocialSecurityNumber::SSNFormat(&this->person), this->relationType->Debug(), this->strength);
}