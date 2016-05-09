#include "rectangle.hpp"
#include <iostream>
#include "vec2.hpp"
#include <math.h>
#include "color.hpp"
using namespace std;

//DEFAULT CONFIG
Rectangle::Rectangle():
 edge{},height{1},width{1}, clr{}{}

//ALLE benötigten Eingabevariablen
Rectangle::Rectangle(Vec2 edge, float height, float width, Color clr):
 edge{edge},height{height},width{width},clr{clr}
 {
  if (height == 0){
  throw out_of_range("Höhe darf nicht NULL sein!");
 }
  if (width == 0){
  throw out_of_range("Höhe darf nicht NULL sein!");
 }
}


//ALLE RGB Farbwerte
float Rectangle::get_color_r() const{
 return clr.r;
}
float Rectangle::get_color_g() const{
 return clr.g;
}
float Rectangle::get_color_b() const{
 return clr.b;
}

//GEOMETRIE:
//Berechnung des Flaecheninhalts
float Rectangle::get_area() const{
	if (height > 0 && width > 0){
		return height*width;
	}
	if (height < 0 && width < 0){
		return height*width;
	}//Fuer die negativen Zahlen
	if (height < 0 && width > 0){
		return height*(-1)*width; 
	}
	else{
		return height*(-1)*width;
	}
} 
//RÜCKGABE Höhe
float Rectangle::get_height() const{
	return height;
}
//RÜCKGABE Breite
float Rectangle::get_width() const{
	return width;
}
//RÜCKGABE Stützvektor
Vec2 Rectangle::get_edge() const{
	return edge;
}
//RÜCKGABE Umfang
float Rectangle::get_circumference() const{
	if (height > 0 && width > 0){
		return height*2 + width*2;
	}
	if (height < 0 && width < 0){
		return height*(-2) + width*(-2);
	}
	if (height < 0 && width > 0){
		return height*(-2) + width*2;
	}
	else{
		return height*2 + width*(-2);
	}
}

//Hoehe verschieben
float Rectangle::set_height(float new_height){
	if (new_height == 0){
	 cout << "Höhe " << "darf nicht NULL sein! " << "Höhe bleibt, wie sie ist." << endl;
		return height;
	}
	else{
	 height = new_height;
	 return new_height;
	}
}
//Breite verschieben
float Rectangle::set_width(float new_width){
	if (new_width == 0){
	 cout << "Breite " << "darf nicht NULL sein! " << "Breite bleibt, wie sie ist." << endl;
	 return width;
	}
	else{
	 width = new_width;
	 return new_width;
	}
}

/*//Konstruiere Rechteck
void Rectangle::draw(Window const& win){

win.draw_line(get_edge().x, 
get_edge().y, 
get_edge().x + get_width(), 
get_edge().y, 
get_color_r(), 
get_color_g(), 
get_color_b());

win.draw_line(get_edge().x, 
get_edge().y, get_edge().x, 
get_edge().y + get_height(), 
get_color_r(), 
get_color_g(), 
get_color_b());

win.draw_line(get_edge().x, 
get_edge().y + get_height(), 
get_edge().x + get_width(), 
get_edge().y + get_height(), 
get_color_r(), 
get_color_g(), 
get_color_b());

win.draw_line(get_edge().x + get_width(), 
get_edge().y, 
get_edge().x + get_width(), 
get_edge().y + get_height(), 
get_color_r(), 
get_color_g(), 
get_color_b());
}

//Konstruiere farbiges Rechteck
void Rectangle::draw(Window const& win, Color const& clr){

win.draw_line(get_edge().x, 
get_edge().y, 
get_edge().x + get_width(), 
get_edge().y, 
clr.r, clr.g, clr.b);

win.draw_line(get_edge().x, 
get_edge().y, 
get_edge().x, 
get_edge().y + get_height(), 
clr.r, clr.g, clr.b);

win.draw_line(get_edge().x, 
get_edge().y + get_height(), 
get_edge().x + get_width(), 
get_edge().y + get_height(), 
clr.r, clr.g, clr.b);

win.draw_line(get_edge().x + get_width(), 
get_edge().y, get_edge().x + get_width(), 
get_edge().y + get_height(), 
clr.r, clr.g, clr.b);
}
*/
/*
//TEST CASE
//Liegt der Punkt auch im Rechteck?
bool Rectangle::is_inside(Vec2 const& point){
if (get_height() > 0 && get_width() > 0){
 if (point.x < get_edge().x||point.x > (get_edge().x+get_width())){
  return false;}
   if (point.y < get_edge().y||point.y > (get_edge().y+get_height())){
    return false;}
     else{
      return true;}
}
if (get_height() > 0 && get_width() < 0){
 if (point.x < (get_edge().x+get_width())||point.x > get_edge().x){
  return false;}

if (point.y < get_edge().y||point.y > (get_edge().y+get_height())){
 return false;}
  else{
   return true;}
}
if (get_height() < 0 && get_width() > 0){
 if (point.x < get_edge().x||point.x > (get_edge().x+get_width())){
  return false;}

if (point.y < (get_edge().y+get_height())||point.y > get_edge().y){
 return false;}
  else{
   return true;}
}
  else{
   if (point.x < (get_edge().x+get_width())||point.x > get_edge().x){
    return false;}

if (point.y < (get_edge().y+get_height())||point.y > get_edge().y){
 return false;}
  else{
   return true;}
   }
}
*/
