#include "Duke.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include <stdexcept>


namespace coup {

   Duke::Duke(Game &currGame, const string &name) : Player(currGame, name){}

     Duke::~Duke(){}

    void Duke::tax() {
        myTurn();
        this->coin += 3;
        lastaction = "tax";
        this->game->nexturn();
    }

    void Duke::block(Player &otherPlayer) {
        if (otherPlayer.lastaction == "foreign_aid")
        {
            otherPlayer.coin -=2;
        }
        else
        {
            throw invalid_argument("can't block this action");  
        }

    }

    // void Duke::coup(Player &p){
    
    // }

    string Duke::role() const {
        return "Duke";
    }

}

