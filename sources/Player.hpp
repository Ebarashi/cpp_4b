#pragma once
#include "Game.hpp"
#include "string"

namespace coup {

    class Player {

    private:
        std::string name;


    protected:
        std::string p_role;
        int coin;
    
    public:
        Player(Game g, const std::string& name);
        void income();
        void foreign_aid();
        int coins();
        virtual void coup(Player &p);  
        virtual std::string role() const;

       
    }; 
}