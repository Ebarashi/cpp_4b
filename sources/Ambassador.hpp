#pragma once
#include "Player.hpp"
#include "Captain.hpp"

using namespace std;

namespace coup {

    class Ambassador : public Player 
    {
    
        public:
            Ambassador(Game &currGame, const string& name);

            void transfer(Player &firstPlayer, Player &secondPlayer);

            static void block(Player &otherPlayer);
            
            static void block(Captain &otherCaptain); 

            
            //void coup(Player &p) override;

            string role() const override;
    };
}