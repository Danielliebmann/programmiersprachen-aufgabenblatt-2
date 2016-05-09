#include "window.hpp"
#include <utility>
#include <cmath>
#include <vector>

#include "rectangle.hpp"
#include "vec2.hpp"
#include "mat2.hpp"
#include "circle.hpp"
#include "color.hpp"

int main(int argc, char* argv[])
{
  Window win{std::make_pair(600,600)};

 //Rechteck
  std::vector<Rectangle> Rechteck;
  Rechteck.push_back(Rectangle(Vec2{0.5,0.5}, 0.49, 0.49, Color{1,0,0.5}));

  //Kreis
  std::vector<Circle> Kreis;
  Kreis.push_back(Circle(Vec2{0.3,0.5}, 0.3, Color{0,1,0.3}));


  while (!win.should_close()) {
    if (win.is_key_pressed(GLFW_KEY_ESCAPE)) {
      win.close();
    }

    //Mausposition wird überprüft ...
    Vec2 mouse = Vec2(win.mouse_position().first/0.5f,win.mouse_position().second/0.5f);
    //... beim Rechteck
    if(Rechteck[0].is_inside(mouse)){
        Rechteck[0].draw(win,Color{0,0,1});
    }
    else{
        Rechteck[0].draw(win);    
    }
    //... beim Kreis
    if(Kreis[0].is_inside(mouse)){
        Kreis[0].draw(win, {0,0,1});
    }
    else{
        Kreis[0].draw(win);
    }


    /*ALTES CODEBEISPIEL:
    std::vector<Rectangle> Rechteck;
    Rechteck.push_back(Rectangle(Vec2{0.5,0.5}, 1, 2, Color{1.0,0.5,0.0}));
    
    auto t = win.get_time();
    float x1{0.5f + 0.5f * std::sin(t)};
    float y1{0.5f + 0.5f * std::cos(t)};
    float x2{0.5f + 0.5f * std::sin(2.0f*t)};
    float y2{0.5f + 0.5f * std::cos(2.0f*t)};
    float x3{0.5f + 0.5f * std::sin(t-10.f)};
    float y3{0.5f + 0.5f * std::cos(t-10.f)};
    win.draw_point(x1, y1, 1.0f, 0.0f, 0.0f);
    win.draw_point(x2, y2, 0.0f, 1.0f, 0.0f);
    win.draw_point(x3, y3, 0.0f, 0.0f, 1.0f);
    auto m = win.mouse_position();
    win.draw_line(0.1f, 0.1f, 0.8f,0.1f, 1.0,0.0,0.0);
    win.draw_line(0.0f, m.second, 0.01f, m.second, 0.0, 0.0, 0.0);
    win.draw_line(0.99f, m.second,1.0f, m.second, 0.0, 0.0, 0.0);
    win.draw_line(m.first, 0.0f, m.first, 0.01f, 0.0, 0.0, 0.0);
    win.draw_line(m.first, 0.99f,m.first, 1.0f, 0.0, 0.0, 0.0);
    */
    win.update();
  }

  return 0;
}
