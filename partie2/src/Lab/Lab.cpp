#include<iostream>
#include"Application.hpp"
#include"PetriDish.hpp"
#include"Lab/Lab.hpp"
#include<SFML/Graphics.hpp>
#include"PetriDish.hpp"
using namespace std;

Lab::Lab()
   : boite(getApp().getCentre(),0.95*getApp().getLabSize().x/2)
    {}


void Lab::reset()
{
    boite.reset();
}

 void Lab::drawOn (sf::RenderTarget& targetWindow)
{
    boite.drawOn(targetWindow);
}

void Lab::update (sf::Time dt)
{
   boite.update(dt);
}
