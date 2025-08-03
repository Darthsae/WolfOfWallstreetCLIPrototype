#include <WolfOfWallstreet/Game/Language/Name.h>

using namespace WolfOfWallstreet::Game::Language;

std::string_view Name::FirstName(void) {
    return std::string_view(this->names[0]);
}

std::optional<std::span<std::string>> Name::MiddleNames(void) {
    if (this->names.size() > 2) {
        return std::span(++this->names.begin(), --this->names.end());
    }
    return std::nullopt;
}

std::optional<std::string_view> Name::LastName(void) {
    if (this->names.size() > 1) {
        return std::string_view(this->names.back());
    }
    return std::nullopt;
}