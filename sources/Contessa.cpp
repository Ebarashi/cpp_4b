#include "Contessa.hpp"

namespace coup {

    Contessa::Contessa(Game &currGame, const std::string& name) :Player{currGame, name} {

    }

    void Contessa::block(Player &otherPlayer) {

    }

    void Contessa::coup(Player &p){
   
    }

    std::string Contessa::role() const {
        return "Contessa";
    }
}