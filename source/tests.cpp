#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

TEST_CASE("teste vec2", "[vec2]")
{
	SECTION("Hagrids Hundehuette")
	{
	Vec2 v;
	Vec2 v2{3,2};
	REQUIRE(v.x == 0);
	REQUIRE(v.y == 0);
	REQUIRE(v2.x == 3);
	REQUIRE(v2.y == 2);
	}
	SECTION("ADDI")
	{
		Vec2 v{10, 20}; 
		Vec2 v2{10, 20};
		Vec2 vErgebnis{20, 40};

		v += v2;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);

	}
	SECTION("SUB")
	{
		Vec2 v{10, 20};
		Vec2 v2{10, 20};
		Vec2 vErgebnis{0, 0};

		v -= v2;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);

	}
	SECTION("DIV")
	{
		Vec2 v{200, 20};
		Vec2 vErgebnis{20, 2};

		v /= 10;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);

	}
	SECTION("MULT")
	{
		Vec2 v{4, 0.75};
		Vec2 vErgebnis{40, 7.5};

		v *= 10;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);

	}
}


int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
