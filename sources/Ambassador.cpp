#include "Ambassador.hpp"

namespace coup {

    Ambassador::Ambassador(Game &currGame, const std::string &name) : Player{currGame, name} {

    }

    void Ambassador::block(const Player &otherPlayer) {

    }

    void Ambassador::transfer(const Player &firstPlayer, const Player &secondPlayer) {

    }

    void Ambassador::coup(Player &p){
   
    }

    std::string Ambassador::role() const {
        return "Ambassador";
    }
}