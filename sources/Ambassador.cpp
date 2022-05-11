#include "Ambassador.hpp"
#include <stdexcept>


namespace coup {

    Ambassador::Ambassador(Game &currGame, const std::string &name) : Player{currGame, name} {

    }

    void Ambassador::block(Player &otherPlayer) 
    {
        throw invalid_argument("ambassador can only block captain");  

    }

    void Ambassador::block(Captain &otherCaptain) 
    {
        if (otherCaptain.lastaction == "steal")
        {
            otherCaptain.coin -= 2;
            otherCaptain.stolen_p->coin +=2;
        }
        else
        {
            throw invalid_argument("you can't block this action");  
        }
    }

    void Ambassador::transfer(Player &firstPlayer, Player &secondPlayer) {
        myTurn();
        if (firstPlayer.coin <= 0)
        {
            throw runtime_error("player1 don't have enough coins");
        }
        firstPlayer.coin--;
        secondPlayer.coin++;
        this->lastaction = "transfer";
        this->game->nexturn();
    }


    // void Ambassador::coup(Player &p){
   
    // }

    std::string Ambassador::role() const {
        return "Ambassador";
    }
}