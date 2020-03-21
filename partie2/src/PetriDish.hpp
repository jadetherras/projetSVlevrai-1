#pragma once
#include<SFML/Graphics.hpp>
#include "Lab/Nutriment.hpp"
#include "Lab/Bacterium.hpp"
#include "Lab/CircularBody.hpp"
#include "Utility/Vec2d.hpp"
#include <iostream>
#include <vector>

class PetriDish : public CircularBody
{
    public :

    PetriDish (const Vec2d& position, double rayon); //Constructeur
    PetriDish (const PetriDish& Petri)=delete; //Interdit la copie
    PetriDish& operator=(const PetriDish& Petri)=delete; //Interdit l'affectation
    ~PetriDish ();//Destructeur
    bool addBacterium(Bacterium* bacteries) const; // Pour savoir si l'ajout est un succès
    bool addNutriment(Nutriment* nutriments) const;
    void update (sf::Time dt); //Faire évoluer les bactéries en fonction du temps
    void drawOn (sf::RenderTarget& targetWindow) const; //Dessine la boite avec les nutriments et les bactéries
    void reset(); //supprime les bactéries et nutriments

    private :

    std::vector<Bacterium*> bacteries;
    std::vector<Nutriment*> nutriments; //Pour prévoir le cas de la boîte vide on utilise des tableaux dynamiques de pointeurs

};
