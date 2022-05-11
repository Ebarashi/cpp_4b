#pragma once
#include "Player.hpp"

namespace coup {

    class Captain : public Player {

    public:
        Captain(Game &currGame, const std::string& name);

        void steal(Player &otherPlayer);

        void block(Player &otherPlayer);

        void coup(Player &p) override;

        std::string role() const override;

    };
}