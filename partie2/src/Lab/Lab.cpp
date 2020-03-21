#include<iostream>
#include"Application.hpp"
#include"PetriDish.hpp"
#include"Lab/Lab.hpp"
#include<SFML/Graphics.hpp>
#include"PetriDish.hpp"
using namespace std;

Lab::Lab()
{
    Vec2d position(getApp().getCentre());
    boite->setPosition(position);
    double rayon (0.95*getApp().getLabSize().x);
    boite->setRadius(rayon);
}

void Lab::reset()
{
    boite->reset();
}

 void Lab::drawOn (sf::RenderTarget& targetWindow)
{
    boite->drawOn(targetWindow);
}

void Lab::update (sf::Time dt)
{
   boite->update(dt);
}
