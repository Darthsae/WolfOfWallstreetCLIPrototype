#pragma once
#ifndef NAME_H
#define NAME_H
#include <string>
#include <vector>
#include <span>
#include <optional>

namespace WolfOfWallstreet::Game::Language {
    struct Name {
    public:
        std::vector<std::string> names;

        std::string_view FirstName(void);
        std::optional<std::span<std::string>> MiddleNames(void);
        std::optional<std::string_view> LastName(void);
    };
}
#endif