#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#define PI 3.14159265
//This fabs() function returns absolute value of the number
double fabs(double x) {
	if (x >= 0.00)
		return x;
	else 
		return (-x);
}
//This sqrt() function returns the squareroot of given number
double sqrt(double x) {
	if (x < 0.00000000) {
		printf("invalid input ");
		return -1;
	}
	double l, h = x, b;
	double m;
	int i;
	l = 0.0;
	m = (l + h) / 2;
	for (i = 0; i <= 50; i++) {
		b = m * m;
		if(b == x) {
	        	return m;
	           	break;
	        } 
		else {
	        	if(m * m > x) {
	        		h = m;
	                	m = (l + h) / 2;
	           	} 
			else {
               			l = m;
               			m = (l + h) / 2;
            		}
         	}
      	}
	return m;
}
//This pow() function returns the value of x raised to the power of y 
double pow(double x, double y) {
    int i = 1;
	double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
	}
	return (i / p);
}
//This fact() function returns the factorial of the given number
long int fact(int x) {
	if (x < 0.00000000) {
		printf("invalid input ");
		return -1;
	}
	long int i = 1;
	long int j = 1;
	if (x == 0)
		return 1;
	else {
		for(i = 1; i <= x; i++) {
			j = j * i;
		}
	}
	return j;
}
//This sine() function returns sine of the angle in radians
double sin(double x) {
	
	int n = 1;
	double sin = x, t = x;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (-t) * (x * x) / ((2 * n + 1) * (2 * n));
		sin = sin + t;	
		n++;
	}
	return sin;
}
//This cosine() function returns cosine of the angle in radians
double cos(double x) {
	int n = 1;
	double cos = 1, t = 1;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (-t) * (x * x) / ((2 * n - 1) * (2 * n));
		cos = cos + t;	
		n++;
	}
	return cos;
}
//This tan() function returns tan of the angle in radians
double tan(double x) {
	double tan;
	if(cos(x) == 0) {
		printf("invalid input tan value is infnite ");
		return -1;
	}
	tan = sin(x) / cos(x);
	return tan;
}
//This sinh() function returns hyperbolic sine of x
double sinh(double x) {
	int n = 1;
	double sinh = x, t = x;
	while (!(t >= -0.0000000001 && t <= 0.000000001)) {
		t = (t) * (x * x) / ((2 * n + 1) * (2 * n));
		sinh = sinh + t;	
		n++;
	}
	return sinh;
}
//This cosh() function returns hyperbolic cos of x
double cosh(double x) {
	int n = 1;
	double cosh = 1, t = 1;
	while (!(t >= -1.0000000001 && t <= 1.000000001)) {
		t = (t) * (x * x) / ((2 * n - 1) * (2 * n));
		cosh = cosh + t;	
		n++;
	}
	return cosh;
}
//This tanh() function returns hyperbolic tan of x
double tanh(double x) {
	double tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}/*
//This asin() function returns the arc sine of x
double asin(double x) {
	double asin = x, t = x;
	int n = 1;
	while (!(t >= -0.0000001 && t <= 0.0000001)) {
		t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
		asin = asin + t;	
		n++;
	}
	return asin;
}
//This acos() function returns the arc cos of x

double acos(double x) {
	
	double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}
//This atan() function returns the arc tan of x
double atan(double x) {
	double atan = x;
	int n = 1;
	double t = x;
	while (!(t >= -0.001 && t <= 0.001)) {
		t = (-t) * (x * x) * (2 * n - 1) / (2 * n + 1);
		atan = atan + t;	
		n++;
	} 
	return atan;
}*/
//This exp() function returns the exponential value of number 
double exp(double x) {
	double ex = 1;
	double t = 1;
	int n = 1;
	while (!(t >= -0.001 && t <= 0.001)) {
		t = (t * x) / n;
		ex = ex + t;
		n++;
	}	
	return ex;
}
//This log() function returns the logarithmic value  of x to the base e			
double log(double x) {
	if (x < 0.00000000) {
		printf("invalid input ");
		return -1;
	}
	if (x == 0) {
		printf("ERROR:Entered value should be greater than 0 as domain is the numbers greater than ZERO ");
		return -1;
	}
	double y;
	y = (x - 1)/(x + 1);
	double sum;
	sum = 0.0;
	double den = 1.0;
	double frac = y;
	double term = frac / den;
	while(term > 0.00000000000001) {
		sum += term;
		den += 2.0;
		frac = frac * y * y;
		term = frac / den;
	}
	return 2.0 * sum;
}
//This log10() fuction returns the natural logarithmic value of x	
double log10(double x) {
	if (x < 0.00000000) {
		printf("invalid input ");
		return -1;
	}
	if (x == 0) {
		printf("ERROR:Entered value should be greater than 0 as domain is the numbers greater than ZERO");
		return -1;
	}
	else {
		double l;
		l = log(x);
		return (l / 2.3025850929940);
	}
}

//This floor() function returns largest integral value less than x. 
double myfloor(double x) {
	int y = (int) x;
	if(x >= 0) {
		return (double)(y);
	}	
	if((x < 0) && (y > x)) {
		return (double)(--y);
	}
	else if((x < 0) && (x = y)) {
		return (double)(y);
	}
}
//This myceil() function returns smallest integral value that exceeds x. 
double myceil(double x) {
	int y = (int) x;
	if((x >= 0) && (y < x))
		return (double)(++y);
	else if((x >= 0) && (y == x))
		return (double)(y);
	if(x < 0)
		return (double)(y);
}
//this myround() fuction returns rounding of value of given double value.
int myround(double x) {
	if(x < 0.0)
		return (x - 0.5);
	else
		return (x + 0.5);
}










