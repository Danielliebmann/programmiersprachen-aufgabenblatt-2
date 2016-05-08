#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"

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
	{//Fall 1
		Vec2 v{10, 20}; 
		Vec2 v2{10, 20};
		Vec2 vErgebnis{20, 40};

		v += v2;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);
		//fall2	
		Vec2 v3{120, 320}; 
		Vec2 v4{120, 320};
		Vec2 vErgebnis2{240, 640};

		v3 += v4;

		REQUIRE(v3.x == vErgebnis2.x);
		REQUIRE(v3.y == vErgebnis2.y);
	}
	SECTION("SUB")
	{//Fall 1
		Vec2 v{10, 20};
		Vec2 v2{10, 20};
		Vec2 vErgebnis{0, 0};

		v -= v2;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);
		//fall2	
		Vec2 v3{40, 25};
		Vec2 v4{40, 25};
		Vec2 vErgebnis2{0, 0};

		v3 -= v4;

		REQUIRE(v3.x == vErgebnis2.x);
		REQUIRE(v3.y == vErgebnis2.y);

	}
	SECTION("DIV")
	{//Fall 1
		Vec2 v{200, 20};
		Vec2 vErgebnis{20, 2};

		v /= 10;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);
		//fall2	
		Vec2 v2{200, 20};
		Vec2 vErgebnis2{100, 10};

		v2 /= 2;

		REQUIRE(v2.x == vErgebnis2.x);
		REQUIRE(v2.y == vErgebnis2.y);

	}
	SECTION("MULT")
	{//Fall 1
		Vec2 v{4, 0.75};
		Vec2 vErgebnis{40, 7.5};

		v *= 10;

		REQUIRE(v.x == vErgebnis.x);
		REQUIRE(v.y == vErgebnis.y);
		//fall2	
		Vec2 v2{6, 1};
		Vec2 vErgebnis2{12, 2};

		v2 *= 2;

		REQUIRE(v2.x == vErgebnis2.x);
		REQUIRE(v2.y == vErgebnis2.y);

	}
	SECTION("plus")
	{//Fall 1
		Vec2 v{10, 20}; 
		Vec2 v2{10, 20};
		Vec2 vErgebnis{20, 40};

		Vec2 vR = v + v2;

		REQUIRE(vR.x == vErgebnis.x);
		REQUIRE(vR.y == vErgebnis.y);
		//fall2		
		Vec2 v3{44, 222}; 
		Vec2 v4{44, 222};
		Vec2 vErgebnis2{88, 444};

		vR = v3 + v4;

		REQUIRE(vR.x == vErgebnis2.x);
		REQUIRE(vR.y == vErgebnis2.y);

	}
	SECTION("minus")
	{//Fall 1
		Vec2 v{10, 20}; 
		Vec2 v2{10, 20};
		Vec2 vErgebnis{0, 0};

		Vec2 vR = v - v2;

		REQUIRE(vR.x == vErgebnis.x);
		REQUIRE(vR.y == vErgebnis.y);
		//fall2		
		Vec2 v3{34, 5}; 
		Vec2 v4{13, 5};
		Vec2 vErgebnis2{21, 0};

		vR = v3 - v4;

		REQUIRE(vR.x == vErgebnis2.x);
		REQUIRE(vR.y == vErgebnis2.y);

	}
	SECTION("division")
	{//Fall 1
		Vec2 v{4, 44}; 
		Vec2 vErgebnis{2, 22};

		Vec2 vR = v / 2;

		REQUIRE(vR.x == vErgebnis.x);
		REQUIRE(vR.y == vErgebnis.y);
		//fall2		
		Vec2 v3{72, 160}; 
		Vec2 vErgebnis2{9, 20};

		vR = v3 / 8;

		REQUIRE(vR.x == vErgebnis2.x);
		REQUIRE(vR.y == vErgebnis2.y);

	}
	SECTION("multiplikation")
	{//Fall 1
		Vec2 v{5, 2}; 
		Vec2 vErgebnis{50, 20};

		Vec2 vR = v * 10;

		REQUIRE(vR.x == vErgebnis.x);
		REQUIRE(vR.y == vErgebnis.y);
		//fall2		
		Vec2 v3{9, 20}; 
		Vec2 vErgebnis2{81, 180};

		vR = v3 * 9;

		REQUIRE(vR.x == vErgebnis2.x);
		REQUIRE(vR.y == vErgebnis2.y);

	}
	SECTION("multiplikationswitch")
	{//Fall 1
		Vec2 v{10, 20}; 
		Vec2 vErgebnis{20, 40};

		Vec2 vR = 2 * v;

		REQUIRE(vR.x == vErgebnis.x);
		REQUIRE(vR.y == vErgebnis.y);
		//fall2	
		Vec2 v3{44, 222}; 
		Vec2 vErgebnis2{88, 444};

		vR = 2 * v3;

		REQUIRE(vR.x == vErgebnis2.x);
		REQUIRE(vR.y == vErgebnis2.y);

	}
}

TEST_CASE("teste Mat2", "[mat2]")
{
	SECTION("matrixdefault"){//Matrixdefaultconfig -> EInheitsmatrix
		Mat2 m;
		REQUIRE(m.matrix[0][0] == 1);
		REQUIRE(m.matrix[0][1] == 0);
		REQUIRE(m.matrix[1][0] == 0);
		REQUIRE(m.matrix[1][1] == 1);

	}
	
	SECTION("matrixuser"){ //Matrixuserconfig
		Mat2 m{1,2,3,4};
		REQUIRE(m.matrix[0][0] == 1);
		REQUIRE(m.matrix[0][1] == 2);
		REQUIRE(m.matrix[1][0] == 3);
		REQUIRE(m.matrix[1][1] == 4);

		m = Mat2{5,6,7,8};
		REQUIRE(m.matrix[0][0] == 5);
		REQUIRE(m.matrix[0][1] == 6);
		REQUIRE(m.matrix[1][0] == 7);
		REQUIRE(m.matrix[1][1] == 8);
	}
	SECTION("matrixmult"){
		Mat2 m{10,15,20, 25};
		Mat2 correctResult{50, 75, 110, 155};
		m *= Mat2{1,2,3,4};
		
		REQUIRE(m.equal(correctResult) == true);

	}
	SECTION("matrixmulttest") //Matrixmultiplikation TEST 
	{
		Mat2 m0{6, 5, 4, 2};
		Mat2 m1{2, 5, 1, 3};
		Mat2 correctResult{17,45,10,26};
		Mat2 mRes = m0 * m1; //m0 mal m1 werden mit mres verglichen durch bool
		
		REQUIRE(mRes.equal(correctResult) == true);

	}
}



int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
