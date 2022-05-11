#pragma once
#include "vector"
#include "string"
#include "Player.hpp"


using namespace std;
namespace coup 
{
    class Player;
    class Game 
    {

    private:
       
    public:

        vector<Player*> currPlayers;
        unsigned int curr_player = 0;
        
        Game();
        ~Game();

        unsigned int start;

        vector<string> players() ;

        string turn();

        string winner();

        void addPlayer(Player *p);

        void nexturn();

    };
}