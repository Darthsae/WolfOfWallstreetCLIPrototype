#include <WolfOfWallstreet/Game/Time/Date.h>

using namespace WolfOfWallstreet::Game::Time;

time_t Date::TimeFrom(Date a_date) {
    return this->time - a_date.time;
}

time_t Date::TimeTo(Date a_date) {
    return a_date.time - this->time;
}