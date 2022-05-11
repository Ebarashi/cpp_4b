#include "Captain.hpp"

namespace coup {
    Captain::Captain(Game &currGame, const std::string& name) :Player{currGame, name} {

    }

    void Captain::block(Player &otherPlayer) {

    }

    void Captain::steal(Player &otherPlayer) {

    }

    void Captain::coup(Player &p){
  
    }

    std::string Captain::role() const {
        return "Captain";
    }
}