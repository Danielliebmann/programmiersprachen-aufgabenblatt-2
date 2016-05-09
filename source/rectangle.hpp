#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include <math.h>
#include "color.hpp"
#include "window.hpp"
#include <cmath>
// Rectangle class definition
class Rectangle{
public:
	Rectangle();
	Rectangle(Vec2 edge, float height, float width, Color clr);

	//Werte für Maße
	float get_height() const;
	float get_width() const;
	float get_area() const;
	float set_height(float new_height);
	float set_width(float new_width);

	//VEKTOR get Eckpunkt
	Vec2 get_edge() const;

        //2.9 UMFANG "Circumference"
	float get_circumference() const;
	
	//2.10 RGB FARBEN
	float get_color_r() const;
	float get_color_g() const;
	float get_color_b() const;
	
	//2.11 DRAW Methode
	void draw(Window const& win);
	void draw(Window const& win, Color const& clr);

	//Definitionen
	Vec2 edge; //EDGE für Eckpunkt
	float height; 
	float width; 
	bool is_inside(Vec2 const& point);	//Überprüfung ob Punkt in Rechteck liegt
	Color clr;
};

#endif 
