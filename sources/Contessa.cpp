#include "Contessa.hpp"
#include <stdexcept>

namespace coup {

    Contessa::Contessa(Game &currGame, const std::string& name) :Player{currGame, name} {

    }

    Contessa::~Contessa(){}

    void Contessa::block(Player &otherPlayer) {

        throw invalid_argument("the player need to be assassin");  

    }

    void Contessa::block(Assassin &assassin) 
    {
        if ((assassin.lastaction.compare("kill")) == 0)
        {
            assassin.killed->alive = true;
        }
        else{
            throw invalid_argument("can't block this action");  
        }

    }

    // void Contessa::coup(Player &p){
   
    // }

    std::string Contessa::role() const {
        return "Contessa";
    }
}