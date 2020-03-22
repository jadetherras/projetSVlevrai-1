#include "CircularBody.hpp"
#include "Utility/Vec2d.hpp"
#include <cmath>
using namespace std;

CircularBody::CircularBody(const Vec2d& position, double rayon)
    : position(position)
    , rayon(rayon)
{}

CircularBody::CircularBody(const CircularBody& other)
    : position(other.position)
    , rayon(other.rayon)
{}

const Vec2d& CircularBody::getPosition() const {
    return position;
}
void CircularBody::setPosition(const Vec2d& position)
{
    this->position=position;
}

double CircularBody::getRadius() const{
    return rayon;
}
void CircularBody::setRadius(double rayon) {
    this->rayon=rayon;
}

CircularBody& CircularBody::operator=(const CircularBody& other) {
    rayon = other.rayon;
    position = other.position;
    return (*this);
}

bool CircularBody::operator>(const CircularBody& body2) {
    if(contains(body2)) {
        return true;
    }
    return false;
}

bool CircularBody::operator&(const CircularBody& body2) {
    if(isColliding(body2)) {
        return true;
    }
    return false;
}

void CircularBody::move(const Vec2d& mouvement) {
    position += mouvement;
}

bool CircularBody::contains(const CircularBody& other) const{
    if (rayon >= other.rayon and distance(position, other.position)<= abs(other.rayon-rayon)) {
        return true;
    }
    return false;
}

bool CircularBody::contains(const Vec2d& p) const {
    if (distance(p, position) <= rayon) {
        return true;
    }
    return false;
}

bool CircularBody::isColliding(const CircularBody& other) const{
    if (distance(position, other.position) <= (rayon+other.rayon)) {
        return true;
    }
    return false;
}

bool operator>(CircularBody body, const Vec2d& point) {
    if(body.CircularBody::contains(point)) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& out, const CircularBody& other) {
    out << "CircularBody: position = " << other.CircularBody::getPosition();
    out << " radius = " << other.CircularBody::getRadius();
    return out;
}


