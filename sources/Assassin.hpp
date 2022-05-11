#pragma once
#include "Player.hpp"

namespace coup {
    
    class Assassin : public Player {
    
    public:
        Assassin(Game &currGame, const std::string& name);

        void coup(Player &p) override;

        std::string role() const override;
    };

}