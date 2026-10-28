//
// Created by jules on 28/10/2026.
//

#ifndef OEFENINGEN_AP_POLYNOMIALS_H
#define OEFENINGEN_AP_POLYNOMIALS_H

#endif //OEFENINGEN_AP_POLYNOMIALS_H
// Polynomials.h
#ifndef POLYNOMIALS_H
#define POLYNOMIALS_H

#include <vector>

class Polynomials {
private:
    std::vector<double> coefficients;

public:
    Polynomials() = default;
    explicit Polynomials(const std::vector<double>& p);
    Polynomials(const Polynomials& p) = default;
    ~Polynomials() = default;
    inline double apply( double x) const ;
    Polynomials& operator=(const Polynomials& p) = default;
    Polynomials& operator+(const Polynomials& p) const ;
    Polynomials& operator-(const Polynomials& p) const ;
    Polynomials& operator*(const Polynomials& p) const ;
    inline double applyHornersMethod( double x ) const  ;
    Polynomials derive() const;
};

#endif