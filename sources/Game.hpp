#pragma once
#include "vector"
#include "string"

namespace coup 
{
    class Game 
    {

    private:
       
    public:

        std::vector<std::string> currPlayers;
        unsigned int currPlayer = 0;
        
        Game();

        std::vector<std::string> players() const;

        std::string turn();

        std::string winner();

        void addPlayer(const std::string& name);

    };
}