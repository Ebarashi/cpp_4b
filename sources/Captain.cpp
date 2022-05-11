#include "Captain.hpp"
#include <stdexcept>

namespace coup 
{

    int check_coin = 2;
    

    Captain::Captain(Game &currGame, const std::string& name) :Player{currGame, name} 
    {
        Player *stolen_p = NULL; 
        bool steal0 = false;
        bool steal1 = false;
        bool steal2 = false;
    }

     Captain::~Captain(){}
        
    void Captain::steal(Player &otherPlayer) 
    {
        myTurn();
        
        if (otherPlayer.coin >= 2)
        {   
            this->coin += 2;
            otherPlayer.coin -= 2;
            this->stolen_p = &otherPlayer;
            this->lastaction = "steal";
            this->steal2 = true;
            this->game->nexturn();

        }
        else if (otherPlayer.coin == 1)
        {
            this->coin += 1;
            otherPlayer.coin -= 1;
            this->stolen_p = &otherPlayer;
            this->lastaction = "steal";
            this->steal1 = true;
            this->game->nexturn();
        }
        else{
            this->stolen_p = &otherPlayer;
            this->lastaction = "steal";
            this->steal0 = true;
            this->game->nexturn();

        }
    }

    void Captain::block(Player &otherPlayer) 
    {
        throw invalid_argument("captain can only block captain");  

    }

    void Captain::block(Captain &otherCaptain) 
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

    string Captain::role() const 
    {
        return "Captain";
    }

    // void Captain::coup(Player &p){
  
    // }
}