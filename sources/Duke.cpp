#include "Duke.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include "string"

namespace coup {

    Duke::Duke(Game &currGame, const std::string &name) : Player{currGame, name} {

    }

    void Duke::tax() {
        this->coin += 3;
    }

    void Duke::block(Player &otherPlayer) {

    }

    void Duke::coup(Player &p){
    
    }

    std::string Duke::role() const {
        return "Duke";
    }

}