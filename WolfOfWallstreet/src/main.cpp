#include <iostream>
#include <print>
#include <format>
#include <WolfOfWallstreet/Game/Social/Relationship.h>

int main(int argc, char const **) {
    std::println("Initialize");
    std::println("Uninitialize");
    for (int i = 0; i < 2; i++) {
        for (int j = -3; j < 4; j++) {
            WolfOfWallstreet::Game::Social::Relationship relation = {};
            relation.person = 0b00000001000110010000000100110001;
            relation.relationType = std::make_unique<WolfOfWallstreet::Game::Social::FamilyRelation>(WolfOfWallstreet::Game::Social::FamilyRelation(i, j, i % 2 == 0));
            WolfOfWallstreet::Game::Social::FamilyRelation* ap = dynamic_cast<WolfOfWallstreet::Game::Social::FamilyRelation*>(relation.relationType.get());
            std::println("relation: ({})", relation.Debug());
        }
    }
    return 0;
}