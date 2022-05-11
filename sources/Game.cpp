#include "Game.hpp"
#include "vector"

namespace coup {


    Game::Game() {
        this->currPlayer = 0;
    }

    std::string Game::turn() {
      if (this->currPlayers.size() == 0)
        {
            return "exception";
        }
        currPlayer = currPlayer % currPlayers.size();
        return this->currPlayers[this->currPlayer];
    }


    std::vector<std::string> Game::players() const {
        return this->currPlayers;
    }

    void Game::addPlayer(const std::string &name) {
    }

    std::string Game::winner() {
        return this->currPlayers[0];
    }

}