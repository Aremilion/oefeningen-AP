#ifndef OEFENINGEN_AP_PLOTTER_H
#define OEFENINGEN_AP_PLOTTER_H

#include <vector>
#include "Polynomials.h"

class Plotter {
private:
    const std::vector<double> result;

public:
    Plotter() = default;
    Plotter(const Plotter&) = default;
    ~Plotter() = default;
    static void plot( const Polynomials& p , const double startrange , const double endrange , const std::size_t n)  ;
};

#endif //OEFENINGEN_AP_PLOTTER_H