
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <math.h>
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "window.hpp"


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
{//Fall 1
	SECTION("matrixdefault"){//Matrixdefaultconfig -> EInheitsmatrix
		Mat2 m;
		REQUIRE(m.matrix[0][0] == 1);
		REQUIRE(m.matrix[0][1] == 0);
		REQUIRE(m.matrix[1][0] == 0);
		REQUIRE(m.matrix[1][1] == 1);

	}
	
	SECTION("matrixuser"){ //Matrixuserconfig
	//Fall 1
		Mat2 m{1,2,3,4};
		REQUIRE(m.matrix[0][0] == 1);
		REQUIRE(m.matrix[0][1] == 2);
		REQUIRE(m.matrix[1][0] == 3);
		REQUIRE(m.matrix[1][1] == 4);
	//Fall 2
		m = Mat2{5,6,7,8};
		REQUIRE(m.matrix[0][0] == 5);
		REQUIRE(m.matrix[0][1] == 6);
		REQUIRE(m.matrix[1][0] == 7);
		REQUIRE(m.matrix[1][1] == 8);
	}
	SECTION("matrixmult"){//Fall 1
		Mat2 m{10,15,20, 25};
		Mat2 correctResult{50, 75, 110, 155};
		m *= Mat2{1,2,3,4};
		
		REQUIRE(m.equal(correctResult) == true);

	}
	SECTION("matrixmulttest") //Matrixmultiplikation TEST 
	{//Fall 1
		Mat2 m0{6, 5, 4, 2};
		Mat2 m1{2, 5, 1, 3};
		Mat2 correctResult{17,45,10,26};
		Mat2 mRes = m0 * m1; //m0 mal m1 werden mit mres verglichen durch bool
		
		REQUIRE(mRes.equal(correctResult) == true);

	}

	SECTION("Matrix mal Vektor")
	{//Fall 1
		Mat2 m = Mat2{6,1,1,4};
		Vec2 vRes = (m * Vec2{2,2});

		REQUIRE(vRes.x == 14);
		REQUIRE(vRes.y == 10);
		//Fall 2
		m = Mat2{7,1,3,4};
		vRes = (m * Vec2{3,2});

		REQUIRE(vRes.x == 23);
		REQUIRE(vRes.y == 17);
	}

	SECTION("Vektor mal Matrix")
	{//Fall 1
		Mat2 m = Mat2{3,8,2,1};
		Vec2 vRes = (Vec2{2,3} * m);

		REQUIRE(vRes.x == 30);
		REQUIRE(vRes.y == 7);
	//Fall 2
		m = Mat2{6,2,4,14};
		vRes = (Vec2{1,1} * m);

		REQUIRE(vRes.x == 8);
		REQUIRE(vRes.y == 18);
	}

	SECTION("Determinante")
	{//Fall 1
		Mat2 m{1,2,3,4};
		REQUIRE(m.det() == -2);
	 //Fall 2
		m = Mat2{6,3,5,8};
		REQUIRE(m.det() == 33);
	 //Fall 3
		m = Mat2{9,4,3,1};
		REQUIRE(m.det() == -3);
	}

	SECTION("Inverse-Test")
	{//Fall 1
		Mat2 inv = inverse(Mat2{5,4,3,2});
		Mat2 correctResult{-1,2,1.5,-2.5};
		REQUIRE(inv.equal(correctResult) == true);
	//Fall 2
		inv = inverse(Mat2{8,4,2,0});
		correctResult = Mat2{0,0.5,0.25,-1};
		REQUIRE(inv.equal(correctResult) == true);

	}

	SECTION("Transponierte-Test")
	{//Fall 1
		Mat2 m = transpose(Mat2{0,5,2,1});
		Mat2 correctResult{0,2,5,1};
		REQUIRE(m.equal(correctResult) == true);
	//Fall 2
		m = transpose(Mat2{5,-8,7,-6});
		correctResult = Mat2{5,7,-8,-6};
		REQUIRE(m.equal(correctResult) == true);
	}

	SECTION("Rotationsmatrix-Test"){
	//Fall 1
		Mat2 m = make_rotation_mat2(1.5708); // = Pi durch 2 = 90 Grad*(Pi durch 180)
		REQUIRE(m.matrix[0][0] == Approx(1.0));
		REQUIRE(m.matrix[0][1] == Approx(-0.0));
		REQUIRE(m.matrix[1][0] == Approx(-1.0));
		REQUIRE(m.matrix[1][1] == Approx(0));
	}
	
}
//2.8
TEST_CASE("Circle Testfaelle", "[circle]"){ //Getter Abfragen
	//User-COnfiguration
	Circle a{};
	REQUIRE(a.ctr.x == Approx(0));
	REQUIRE(a.ctr.y == Approx(0));
	REQUIRE(a.radius == Approx(1));
	//RGB-Farben
	REQUIRE(a.clr.r == Approx(0));
	REQUIRE(a.clr.g == Approx(0));
	REQUIRE(a.clr.b == Approx(0));
	//Mit Werten
	Circle c{{2.0, 3.0}, 4.0, {0.7, 0.2, 0.1}};//letzte Schleife RGB
	REQUIRE(c.ctr.x == Approx(2.0));
	REQUIRE(c.ctr.y == Approx(3.0));
	REQUIRE(c.radius == Approx(4.0));
	//RGB-Farben
	REQUIRE(c.clr.r == Approx(0.7));
	REQUIRE(c.clr.g == Approx(0.2));
	REQUIRE(c.clr.b == Approx(0.1));
}

TEST_CASE("Circle Get Test", "[CircG]"){//Mit Formeln für Geometrie arbeiten
	//Fall 1
	Circle a{{3.0, 4.0}, 1.0, {0.5, 0.5, 0.2}};
	REQUIRE(a.get_radius() == Approx(1.0));
	REQUIRE(a.get_diameter() == Approx(2.0));
	REQUIRE(a.get_area() == Approx(3.14159));
	REQUIRE(a.get_circumference() == Approx(6.28319));
	REQUIRE(a.get_radius() == Approx(1.0));
	a.set_radius(1.0);

}

TEST_CASE("Rectangle Testfaelle", "[rect]"){//Mit Formeln von Rectangle arbeiten
	//User-COnfiguration
	Rectangle a{};
	REQUIRE(a.edge.x == Approx(0));
	REQUIRE(a.edge.y == Approx(0));
	REQUIRE(a.height == Approx(1));
	REQUIRE(a.width == Approx(1));
	//RGB-Farben
	REQUIRE(a.clr.r == Approx(0));
	REQUIRE(a.clr.g == Approx(0));
	REQUIRE(a.clr.b == Approx(0));
	//Mit Werten
	Rectangle c{{0,1},1,0.4,{0.6}};//letzte Schleife RGB
	REQUIRE(c.edge.x == Approx(0));
	REQUIRE(c.edge.y == Approx(1.0));
	REQUIRE(c.height == Approx(1.0));
	REQUIRE(c.width == Approx(0.4));
	//RGB-Farben
	REQUIRE(c.clr.r == Approx(0.6));
	REQUIRE(c.clr.g == Approx(0.6));
	REQUIRE(c.clr.b == Approx(0.6));
}

TEST_CASE("Rectangle Get Test", "[GetR]"){
	//Fall 1
	
	Rectangle a{{0.5,3.7},5,1,{1}};
	REQUIRE(a.get_height() == Approx(5.0));
	REQUIRE(a.get_width() == Approx(1.0));
	REQUIRE(a.get_area() == Approx(5.0));
	REQUIRE(a.get_circumference() == Approx(12.0));
	a.set_height(5);
	a.set_width(1);
}
/*
TEST_CASE("test_of_point_in_circle/rectangle", "Is inside?"){
	Rectangle a{Vec2{0.5,0.5}, 0.5, 0.5, Color{}};
	Rectangle b{Vec2{0.4,0.4}, -0.3, -0.3, Color{}};
	Circle c{Vec2{0.5,0.5}, 0.2, Color{0,1,0.3}};
	REQUIRE(a.is_inside(Vec2{0.6,0.6}) == true);
	REQUIRE(a.is_inside(Vec2{0.4,0.5}) == false);
	REQUIRE(b.is_inside(Vec2{0.1,0.3}) == true);
	REQUIRE(b.is_inside(Vec2{0.6,0.6}) == false);
	REQUIRE(c.is_inside(Vec2{0.7,0.5}) == true);
	REQUIRE(c.is_inside(Vec2{0.1,0.1}) == false);
}

*/
int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
