#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define PI 3.14159265

#include <math.h>

double degrees(double x) {
	return (x * PI) / 180;
}

double sin_d(double x) {
	return sin(degrees(x));
}

double cos_d(double x) {
	return cos(degrees(x));
}

double atan_d(double x) {
	return atan(degrees(x));
}

double acos_d(double x) {
	return acos(degrees(x));
}

#endif