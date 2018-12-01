//
// Created by Tristan Brindle on 10/07/2018.
//

#include "point.hpp"

bool operator== (const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!= (const point& lhs, const point& rhs){

    return (lhs.x != rhs.x && lhs.x != rhs.y);

}

point operator+ (const point& lhs, const point& rhs){

    return {lhs.x + rhs.x, lhs.y + rhs.y};

}

point operator- (const point& lhs, const point& rhs){

    return {lhs.x - rhs.x, lhs.y - rhs.y};

}

point operator+= (const point& lhs, const point& rhs){

    return {lhs.x + rhs.x, lhs.y + rhs.y};

}

point operator-= (const point &lhs, const point &rhs) {
    return {lhs.x - rhs.x, lhs.y - rhs.y};
}

std::ostream &operator<< (std::ostream &os, const point &a) {

    os << '(' << a.x << ", " << a.y << ")";

    return os;
}

line::line(const point &a, const point &b) {

    this->start = a;
    this->end = b;

}


line::line() = default;


//:start{0,0} , end{0,0} {}