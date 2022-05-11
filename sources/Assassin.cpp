#include "Assassin.hpp"
#include <stdexcept>

using namespace std;
namespace coup 
{

    const int seven = 7;
    const int three = 3;

    Assassin::Assassin(Game &currGame, const string &name): Player{currGame, name}{}

    Assassin::~Assassin(){}

    void Assassin::coup(Player &otherPlayer) 
    {
        myTurn();
        if (!otherPlayer.alive)
        {
            throw runtime_error("this player is already dead");
        }
        if (this->coin < three)
        {
            throw runtime_error("not enough coins");
        }
        otherPlayer.alive = false;
        this->killed = &otherPlayer;
        if (this->coin >= seven)
        {
            coin -= seven;
            this->lastaction = "coup";
            this->game->nexturn();
        }
        else{
            coin -= three;
            this->lastaction = "kill";
            this->game->nexturn();     
       }
    }


    std::string Assassin::role() const {
        return "Assassin";
    }
}