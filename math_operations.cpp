/**
 * @file math_operations.cpp
 * @brief Implementation of the MathOperations class.
 */

#include "math_operations.h"
#include <stdexcept>

/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return The sum of a and b.
 */
double MathOperations::add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts two numbers.
 * @param a First number.
 * @param b Second number.
 * @return The result of a - b.
 */
double MathOperations::subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First number.
 * @param b Second number.
 * @return The product of a and b.
 */
double MathOperations::multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides two numbers.
 * @param a Numerator.
 * @param b Denominator.
 * @return The result of a / b.
 * @throws std::runtime_error if b is zero.
 */
double MathOperations::divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero error");
    }
    return a / b;
}
