#pragma once
#include"Application.hpp"
#include"PetriDish.hpp"

class Lab
{
    public :

    Lab();
    void update (sf::Time dt);
    void reset();
    void drawOn (sf::RenderTarget& targetWindow);

    private :
    PetriDish boite;
};
