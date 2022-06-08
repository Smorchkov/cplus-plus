#include <iostream>
#include "lab3.h"

int main()
{
    Triangle t;
    t.set_point(0, 0, 0);
    t.set_point(1, 0, 3);
    t.set_point(2, 4, 0);
    t.print();
    Sphere s;
    s.set_center(9, 9, 9);
    s.set_radius(7);
    s.print();
    Cube cub;
    cub.set_point(0, 0, 0, 0);
    cub.set_point(1, 0, 0, 5);
    cub.set_point(2, 5, 0, 5);
    cub.set_point(3, 5, 0, 0);
    cub.set_point(4, 5, 5, 0);
    cub.set_point(5, 0, 5, 0);
    cub.set_point(6, 0, 5, 5);
    cub.set_point(7, 5, 5, 5);
    cub.print();
    Cuboid boid;
    boid.set_point(0, 0, 0, 0);
    boid.set_point(1, 0, 0, 8);
    boid.set_point(2, 5, 0, 8);
    boid.set_point(3, 5, 0, 0);
    boid.set_point(4, 5, 7, 0);
    boid.set_point(5, 0, 7, 0);
    boid.set_point(6, 0, 7, 8);
    boid.set_point(7, 5, 7, 8);
    boid.print();
    TetrahedralPrism p;
    p.set_point(0, 0, 0, 0);
    p.set_point(1, 0, 4, 0);
    p.set_point(2, 4, 4, 0);
    p.set_point(3, 4, 0, 0);
    p.set_point(4, 4, 0, 4);
    p.set_point(5, 0, 0, 9);
    p.set_point(6, 0, 4, 9);
    p.set_point(7, 4, 4, 9);
    p.print();
    return 0;
}