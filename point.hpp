

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

#include <iosfwd>
#include <iostream>

//struct point;



struct point {
    int x = 0;
    int y = 0;
};

struct line{

    point start;
    point end;

    line(const point& a, const point& b);

    line();
    //line() = delete;
    //line() : start({0,0}) , end({0,0}) {}
};

bool operator==(const point& lhs, const point& rhs);

bool operator!=(const point& lhs, const point& rhs);

point operator+(const point& lhs, const point& rhs);

point operator-(const point& lhs, const point& rhs);

point operator+=(const point& lhs, const point& rhs);

point operator-=(const point& lhs, const point& rhs);

std::ostream& operator<<(std::ostream& os, const point& a);


#endif //WEEK11_POINT_EXERCISE_POINT_HPP
