#pragma once
#include "Player.hpp"

using namespace std;
namespace coup 
{
    class Duke : public Player 
    {

    public:
        Duke(Game &currGame, const string &name);

        ~Duke();

        void tax();

        static void block(Player &otherPlayer);

        string role() const override;

        //void coup(Player &p) override;
    };
}