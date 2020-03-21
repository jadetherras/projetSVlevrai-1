#pragma once
#include "Utility/Vec2d.hpp"
#include <iostream>

class CircularBody
{
public :
    CircularBody(const Vec2d& position, double rayon);
    CircularBody(const CircularBody& other);

    const Vec2d &getPosition() const;
    void setPosition(const Vec2d& position);
    double getRadius() const;
    void setRadius(double rayon);

    CircularBody& operator=(const CircularBody& other);
    bool operator>(const CircularBody& body2);
    bool operator&(const CircularBody& body2);


    void move(const Vec2d& mouvement);

    bool contains(const CircularBody& other) const;
    bool contains(const Vec2d& point) const;

    bool isColliding(const CircularBody& other) const;

    protected :
    Vec2d position;
    double rayon;
};

bool operator>(CircularBody body, const Vec2d& point);
std::ostream& operator<<(std::ostream& out, const CircularBody& other);
