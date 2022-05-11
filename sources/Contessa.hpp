#pragma once
#include "Player.hpp"
#include "Assassin.hpp"

using namespace std;
namespace coup 
{

    class Contessa : public Player 
    {

    public:
        Contessa(Game &currGame, const string &name);
        
        ~Contessa();

        static void block(Player &otherPlayer);

        static void block(Assassin &assassin);

        //void coup(Player &p) override;

        string role() const override;
    };
}