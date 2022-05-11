#pragma once
#include "Player.hpp"

using namespace std;
namespace coup {

    class Captain : public Player 
    {

        private:
            bool steal0 = false;
            bool steal1 = false;
            bool steal2 = false;

        public:

            Player *stolen_p = NULL; 

            Captain(Game &currGame, const string& name);

            ~Captain();
            
            void steal(Player &otherPlayer);

            static void block(Player &otherPlayer);
            
            static void block(Captain &otherCaptain);


            //void coup(Player &p) override;

            string role() const override;

    };
}