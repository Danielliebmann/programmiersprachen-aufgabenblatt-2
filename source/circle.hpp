#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <math.h>
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include <cmath>

class Circle{ //Meine CIRCLE Definition
public:
	Circle();
	Circle(Vec2 ctr, float radius, Color clr);
	
	//GEOMETRIE
	float get_diameter() const; //Durchmesser
	float get_area() const; //Flächeninhalt
	float set_radius(float newradius); //Neuer Radius
	float get_radius() const; //Radius

	//STÜTZVEKTOR (mittelpunkt zu eckpunkt)
	Vec2 get_center() const;
	
	//AUFGABE 2.9 "Umfang"
	float get_circumference() const; //Umfang

	//2.10 RGB FARBEN
	float get_color_r() const;//Rot
	float get_color_g() const;//Grün
	float get_color_b() const;//Blau
	
	
	//AUFGABE 2.11 "DRAW METHODEN"
	void draw(Window const& win);
    	void draw(Window const& win, Color const& clr);
	
	bool is_inside(Vec2 const& point);		//Überprüfung ob Punkt in Kreis liegt

	Vec2 ctr; 
	float radius;
	 
	Color clr;
	
};

#endif

