#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace coup;


TEST_CASE("game_1")
{
    Game game_1;

	Duke duke {game_1, "duke"};
	Assassin assassin {game_1, "assassin"};
	Ambassador ambassador {game_1, "ambassador"};
	Captain captain {game_1, "captain"};
	Contessa contessa {game_1, "contessa"};
	
	CHECK(game_1.turn() == "duke");
	CHECK(duke.coins() == 0);
	CHECK_NOTHROW(duke.income());
	CHECK(duke.coins() == 1);
	CHECK(game_1.turn() == "assassin");
	CHECK(assassin.coins() == 0);
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.transfer(assassin,duke));
	CHECK_THROWS(duke.income());
	CHECK_THROWS(assassin.coup(captain));
	
}

TEST_CASE("game_2"){

    Game game_2;

    Duke duke1 {game_2,"duke1"};
    Captain captain {game_2,"captain"};
    Assassin assassin {game_2, "assassin"};
    Contessa contessa {game_2, "contessa"};

    CHECK_NOTHROW(duke1.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(contessa.income());
    
    CHECK(duke1.coins() == 1);
    CHECK(captain.coins() == 1);
    CHECK(assassin.coins() == 1);
    CHECK(contessa.coins() == 1);

    CHECK_NOTHROW(duke1.foreign_aid());
    CHECK(duke1.coins() == 3);
    
    CHECK_THROWS(duke1.block(captain));
    CHECK_THROWS(captain.coup(assassin));
    CHECK_NOTHROW(assassin.coup(contessa));

    CHECK(duke1.coins() == 3);
    CHECK(captain.coins() == 1);

}