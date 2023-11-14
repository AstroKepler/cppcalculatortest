
#ifndef LIBCALC_H
#define LIBCALC_H

// Function declaration
float calc_log(float a, float b);
float calc_sin(float a, float b);
float calc_cos(float a, float b);
float calc_tan(float a, float b);
float calc_sqrt(float a, float b);
float calc_pi(float a, float b);
float calc_sqr(float a, float b);
float calc_csqr(float a, float b);
float calc_fac(float a);
int calc_sum(int a, int b, int c, int d, int e, int f);
int calc_sub(int a, int b, int c, int d, int e, int f);
int calc_mul(int a, int b, int c, int d, int e, int f);
int calc_div(int a, int b, int c, int d, int e, int f);
bool isOperator(char c);
double applyOperator(double left, double right, char op);

#endif