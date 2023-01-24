//
// Author: Stanislaw Adaszewski, 2019
//

/*
BSD 2-Clause License

Copyright (c) 2019, sadaszewski
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
#include "concaveman.h"

void pyconcaveman2d(double *points_c, size_t num_points,
    int *hull_points_c, size_t num_hull_points,
    double concavity, double lengthThreshold,
    double **p_concave_points_c,
    size_t *p_num_concave_points,
    void(**p_free)(void*)) {

//    std::cout << "pyconcaveman2d(), concavity: " << concavity <<
//        " lengthThreshold: " << lengthThreshold << std::endl;

    typedef double T;
    typedef std::array<T, 2> point_type;

    std::vector<point_type> points(num_points);
    for (auto i = 0; i < num_points; i++) {
        points[i] = { points_c[i << 1], points_c[(i << 1) + 1] };
    }

    std::cout << "points:" << std::endl;
    for (auto &p : points)
        std::cout << p[0] << " " << p[1] << std::endl;

    std::vector<int> hull(num_hull_points);
    for (auto i = 0; i < num_hull_points; i++) {
        hull[i] = hull_points_c[i];
    }

    std::cout << "hull:" << std::endl;
    for (auto &i : hull)
        std::cout << i << std::endl;

    auto concave_points = concaveman<T, 16>(points, hull, concavity, lengthThreshold);

    std::cout << "concave_points:" << std::endl;
    for (auto &p : concave_points)
        std::cout << p[0] << " " << p[1] << std::endl;

    double *concave_points_c = *p_concave_points_c = (double*) malloc(sizeof(double) * 2 * concave_points.size());
    for (auto i = 0; i < concave_points.size(); i++) {
        concave_points_c[i << 1] = concave_points[i][0];
        concave_points_c[(i << 1) + 1] = concave_points[i][1];
    }

    *p_num_concave_points = concave_points.size();
    *p_free = free;
}

*/

/*
static void test_07_concaveman() {
    std::cout << "test_07_concaveman() : ";
    typedef double T;
    typedef std::array<T, 2> point_type;
    std::vector<point_type> points {
        {0, 0},
        {1, 0},
        {0.25, 0.15},
        {1, 1}
    };
    std::vector<int> hull {
        0, 1, 3
    };
    auto concave = concaveman<T, 16>(points, hull, 2, 1);
    for (auto &p : concave) {
        std::cout << p[0] << " " << p[1] << std::endl;
    }
    std::cout << "PASSED" << std::endl;
}
*/

