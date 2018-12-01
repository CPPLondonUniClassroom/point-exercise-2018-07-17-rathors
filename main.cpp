
#include "point.hpp"

#include <cassert>

int main()
{
    const point p1{1, 2};
    const point p2 = p1;
    const point p3{3, 4};

    assert(p1 == p2);
    assert(!(p1 == p3));

    assert(p1 != p3);
    //assert(!(p1 != p3));

    point p4 = p3 - p2;
    assert(p4.x == 2 && p4.y == 2);

    point p5 = p1 + p3;
    assert(p5.x == 4 && p5.y == 6);

    point p6 = p6 += p1;
    assert(p6.x == 1 && p6.y == 2 );

    point p7 = p3 -= p1;
    assert(p7.x == 2 && p7.y == 2);

    std::cout << p1 << '\n';

    line l1 = line(p1,p3);
    assert(l1.start == p1 && l1.end == p3);

    line l2 = line();
    assert(l2.start.x == 0 && l2.start.y == 0 && l2.end.x == 0 && l2.end.y == 0);

    //line l3 = line(p1,p3);

    //line l4;



}