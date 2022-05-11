#include "Player.hpp"
#include "Game.hpp"
#include <stdexcept>

using namespace std;
namespace coup
{
    int maxcoins = 10;
    int couprice  = 7;
    int maxplayers = 6;

    Player::Player(Game &game, const string &name)
    {
        this->name = name;
        this->game = &game;
        this->coin = 0;
        this->lastaction;
        this->alive = true;
        
        if (this->game->players().size() == maxplayers)
        {
            throw runtime_error("too many players");
        }
        this->game->addPlayer(this);
    }
    
    Player::~Player() {}

    bool Player::myTurn()
    {
        if (game->players().size() < 2)
        {
            throw runtime_error("need to be two players to play");
        }
        int ans = this->name.compare(game->turn());
        if (ans != 0)
        {
            throw runtime_error(this->name + " is not your turn!");
        }
        
    }
    void Player::income()
    {
        if (coin > maxcoins)
        {
            throw runtime_error(name + " has more than 10 coins");
        }
        myTurn();
        this->coin++;
        this->lastaction = "income";
        game->nexturn();
        }
    
    void Player::foreign_aid()
    {
        if (coin > maxcoins)
        {
            throw runtime_error(name + " has more than 10 coins");
        }
        myTurn();
        this->coin += 2;
        this->lastaction = "foreign_aid";
        game->nexturn();
    }
    void Player::coup(Player &p)
    {
        myTurn();
        if (!p.alive)
        {
            throw runtime_error(name + " died");
        }
        if (coin < couprice)
        {
            throw runtime_error(" you don't have enough coins to do a coup " + p.name);
        }
        p.alive = false;
        coin -= couprice;
        this->lastaction = "coup";
        game->nexturn();
    }

    string Player::role() const
    {
        return "Player";
    }

    int Player::coins() const
    {
        return this->coin;
    }
    
    bool Player::canBlock()
    {
        int ans  = lastaction.compare("foreign_aid");
        if(ans == 0)
        {
            return true;

        }
        else{
            return false;
        }
    }

}