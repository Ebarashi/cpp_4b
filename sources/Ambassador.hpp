#pragma once
#include "Player.hpp"

namespace coup {

    class Ambassador : public Player {
    public:
        Ambassador(Game &currGame, const std::string& name);

        void transfer(const Player &firstPlayer, const Player &secondPlayer);

        void block(const Player &otherPlayer);
         
        void coup(Player &p) override;

        std::string role() const override;
    };
}