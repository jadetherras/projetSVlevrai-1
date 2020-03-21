#include <iostream>
#include<SFML/Graphics.hpp>
#include"PetriDish.hpp"
#include "Lab/Nutriment.hpp"
#include "Lab/Bacterium.hpp"
#include "Lab/CircularBody.hpp"
#include "Utility/Vec2d.hpp"
#include "Utility/Utility.hpp"
#include <vector>
using namespace std;

PetriDish::PetriDish (const Vec2d& position, double rayon)
    : CircularBody(position,rayon)
{}


PetriDish::~PetriDish ()
{
    reset();
}

bool PetriDish::addBacterium(Bacterium* bacteries) const //Permet de savoir si l'ajout est un succès
{
}

bool PetriDish::addNutriment(Nutriment* nutriments) const
{
}

void PetriDish::update (sf::Time dt)//Faire évoluer les bactéries en fonction du temps
{

}

void PetriDish::drawOn (sf::RenderTarget& targetWindow) const//Dessine la boite avec les nutriments et les bactéries
{
    auto border = buildAnnulus(position,rayon, sf::Color::Black, 5);
    targetWindow.draw(border);
}

void PetriDish::reset() //supprime les bactéries et nutriments
{

}
