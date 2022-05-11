#include "Assassin.hpp"
#include "exception"

namespace coup {

    Assassin::Assassin(Game &currGame, const std::string &name): Player{currGame, name} {

    }

    void Assassin::coup(Player &otherPlayer) {

    }

    std::string Assassin::role() const {
        return "Assassin";
    }
}