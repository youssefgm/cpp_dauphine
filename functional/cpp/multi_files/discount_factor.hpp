// Put here the declarations of discount_factor and print_discount_factor

#ifndef DISCOUNT_FACTOR_HPP // Inclusion Guard
#define DISCOUNT_FACTOR_HPP

inline double discount_factor(double rate, double maturity)
{
    double res = std::exp(-rate * maturity);
    return res;
}

#endif // DISCOUNT_FACTOR_HPP
