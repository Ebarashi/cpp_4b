#pragma once
#include "Player.hpp"

using namespace std;
namespace coup {
    
    class Assassin : public Player {
    
    public:

        Player *killed = NULL;

        Assassin(Game &currGame, const string& name);
        
        ~Assassin();
        
        void coup(Player &otherPlayer) override;

        string role() const override;
        
    };

}