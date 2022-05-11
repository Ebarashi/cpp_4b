#include "Game.hpp"
#include <stdexcept>

namespace coup
{

    const int minimum = 2;
    const int maximum = 6;

    Game::Game()
    {
        this->curr_player = 0;
        this->start = 0;
    }

    Game::~Game(){}

    vector<string> Game::players()
    {
        vector<string> names;
        for(Player *p : currPlayers)
        {
            if (p->alive)
            {
                names.push_back(p->name);
            }  
        }
        return names;
    }

    void Game::addPlayer(Player *p){
        this->currPlayers.push_back(p);

    }

    string Game::turn()
    {
        if (this->currPlayers.empty())
        {
            throw runtime_error("none players in this game");
        }
        return this->currPlayers[curr_player]->name;
    }

    void Game::nexturn(){ 
        do
        {
            curr_player = (this->curr_player+1) % this->currPlayers.size();
        } 
        while (!this->currPlayers.at(curr_player)->alive);
        
        if (currPlayers.size() < minimum || currPlayers.size()> maximum )
        {
            throw runtime_error("too much players");
        }
        
        if (start == 0)
        {
            start = 1; 
        }
    }
    
    string Game::winner()
    {
        if (this->players().size() != 1)
        {
            throw runtime_error("the winner hasn't been yet determined");
        }
        if (this->start == 0)
        {
            throw runtime_error("the game has not started yet");
        }
        return this->players().at(0);
    }

 
}