
#include <iostream>
#include <stdexcept>
#include <utility>
#include <bits/stdc++.h>
#include "Player.hpp"
using namespace std;

namespace coup
{

    Player::Player(Game g, const string& name) {
        this->name = name;
        this->coin = 0;

    }

    void Player::foreign_aid() {
        this->coin = this->coin +2;
    }

     void Player::income() {
        this->coin = this->coin +1;
    }

    void Player::coup(Player &p) {
       
    }

    string Player::role() const {
        return this->p_role;
    }

    int Player::coins() {
        this->income();
        return this->coin;
    }

}
