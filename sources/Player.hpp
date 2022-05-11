#pragma once
#include "Game.hpp"
#include "string"

using namespace std;
namespace coup {

    class Game;
    class Player {


    protected:
        Game *game;
        string p_role;
    
    public:
        
        Player(Game &game, const string &name);
        ~Player();
        
        string name;
        int coin;
        string lastaction;
        
        bool alive;

        void myTurn();
        void income();
        void foreign_aid();
        
        int coins() const;
        
        virtual void coup(Player &p);  
        virtual string role() const;

       
    }; 
}