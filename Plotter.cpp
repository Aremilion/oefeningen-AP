//
// Created by jules on 28/10/2026.
//

#include "Plotter.h"
#include <iostream>
inline double SizeOfRange(const double startrange , const double endrange) {
    if (startrange < endrange) {
        return endrange-startrange;
    }
    else {
        return startrange-endrange;
    }
}

void Plotter::plot(const Polynomials& p,
                   const double startrange,
                   const double endrange,
                   const std::size_t n) {
    if (n == 0) {
        return;
    }
    const double step = (endrange - startrange) / static_cast<double>(n);
    for (std::size_t i = 0; i <= n; ++i) {
        const double x = startrange + static_cast<double>(i) * step;
        std::cout << p.apply(x) << '\n';
    }
}
