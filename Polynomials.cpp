// Polynomials.cpp
#include "Polynomials.h"
#include <cmath>

Polynomials::Polynomials(const std::vector<double>& p) : coefficients(p) {}


double Polynomials::apply(const double x) const {
    double total = 0.0;
    for (std::size_t i = 0; i < coefficients.size(); ++i) {
        total += coefficients[i] * std::pow(x, i);
    }
    return total;
}
double Polynomials::applyHornersMethod(const double x) const {
    double total = 0.0;
    for (auto it = coefficients.rbegin(); it != coefficients.rend(); ++it) {
        total = total*x + *it;
    }
    return total;
}

Polynomials Polynomials::derive() const {
    std::vector<double> result;
    for (std::size_t i = 1; i < coefficients.size(); ++i) {             // i starts at 1
        result.push_back(static_cast<double>(i) * coefficients[i]);  //  index 1 is element 2
    }
    return Polynomials(result);
}

Polynomials &Polynomials::operator*(const Polynomials &p)const  {
    auto *newPolynomials = new Polynomials(coefficients);
    for (std::size_t i = 0; i < coefficients.size(); ++i) {
        newPolynomials->coefficients[i] = coefficients[i]* p.coefficients[i];
    }
    return *newPolynomials;
}
Polynomials &Polynomials::operator+(const Polynomials &p)const  {
    auto *newPolynomials = new Polynomials(coefficients);
    for (std::size_t i = 0; i < coefficients.size(); ++i) {
        newPolynomials->coefficients[i] = coefficients[i]+ p.coefficients[i];
    }
    return *newPolynomials;
}

Polynomials &Polynomials::operator-(const Polynomials &p)const  {
    auto *newPolynomials = new Polynomials(coefficients);
    for (std::size_t i = 0; i < coefficients.size(); ++i) {
        newPolynomials->coefficients[i] = coefficients[i]- p.coefficients[i];
    }
    return *newPolynomials;
}