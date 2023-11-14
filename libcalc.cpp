#include <iostream>
#include <math.h>
#include <cmath>
#include <float.h>
#include <cstdlib>
#include <ctime>

using namespace std;

float calc_log(float a, float b) {
    b = log10(a);
    return b;
}

float calc_sin(float a, float b) {
    b = sin(a);
    return b;
}

float calc_cos(float a, float b) {
    b = cos(a);
    return b;
}

float calc_tan(float a, float b) {
    b = tan(a);
    return b;
}

float calc_sqrt(float a, float b) {
    b = sqrt(a);
    return b;
}

float calc_pi(float a, float b) {
    b = ((atan(1) * 4)*a);
    return b;
}

float calc_sqr(float a, float b) {
    b = pow(a, 2);
    return b;
}
float calc_csqr(float a, float b) {
    b = pow(a, 3);
    return b;
}

float calc_fac(float a) {
    if (a < 0) {
        // Factorial is not defined for negative numbers
        return 0;
    }

    float result = 1;
    for (int i = 2; i <= a; ++i) {
        result *= i;
    }

    return result;
}

int calc_sum(int a, int b, int c, int d, int e, int f) {
    return a+b+c+d+e+f;
}
int calc_sub(int a, int b, int c, int d, int e, int f) {
    return a-b-c-d-e-f;
}
int calc_mul(int a, int b, int c, int d, int e, int f) {
    return a*b*c*d*e*f;
}
int calc_div(int a, int b, int c, int d, int e, int f) {
    return a/b/c/d/e/f;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

double applyOperator(double left, double right, char op) {
    switch (op) {
        case '+':
            return left + right;
        case '-':
            return left - right;
        case '*':
            return left * right;
        case '/':
            if (right != 0) {
                return left / right;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                exit(EXIT_FAILURE);
            }
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            exit(EXIT_FAILURE);
    }
}
int calc_rng_int(int a, int b, int c) {
    srand(static_cast<unsigned int>(time(0)));
    return c = (a + rand() % (b - a + 1));
}
float calc_rng_float (float a, float b, float c) {
    srand(static_cast<unsigned int>(time(0)));
    float random = static_cast<float>(rand())/static_cast<float>(RAND_MAX);
    return c = (a+random*(b-a));
}

