#pragma once
#include "Player.hpp"

namespace coup {

    class Contessa : public Player 
    {

    public:
        Contessa(Game &currGame, const std::string &name);

        void block(Player &otherPlayer);

        void coup(Player &p) override;

        std::string role() const override;
    };
}