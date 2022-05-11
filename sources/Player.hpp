#pragma once
#include "Game.hpp"
#include "string"

using namespace std;
namespace coup {

    class Player {


    protected:
        Game *game;
        string p_role;
    
    public:
        string name;
        int coin;
        string lastaction;
        bool alive;
        bool myTurn();
        Player(Game &game, const string &name);
        void income();
        void foreign_aid();
        bool canBlock();
        int coins() const;
        virtual void coup(Player &p);  
        virtual string role() const;

       
    }; 
}