#pragma once
#include "Player.hpp"

namespace coup {
    class Duke : public Player {

    public:
        Duke(Game &currGame, const std::string &name);

        void tax();

        void block(Player &otherPlayer);

        std::string role() const override;

        void coup(Player &p) override;
    };
}