#include <iostream>
#include <cmath>
#ifndef ANGLE_H_
#define ANGLE_H_
using namespace std;

class degree {
	int DEG;
	int FIRSTS;
	int SECONDS;
	
public:	
	degree(double n);
	degree(int deg, int firsts, int seconds);
	degree(){DEG=0;
		FIRSTS=0;
		SECONDS=0;
		}
	~degree(){}
	
	double rad(){
		return(num()*M_PI/180);
	}
	int deg(){return DEG;}
	int fir(){return FIRSTS;}
	int sec(){return SECONDS;}
	double num(){return (DEG+(FIRSTS/60)+(SECONDS/3600));}
	
	friend degree operator+(degree& a, degree& b);
	friend degree operator-(degree& a, degree& b);
	friend ostream& operator<<(ostream& output, degree& a);
	}; 
	
	
class angle {
	double RAD;
	
public:
	angle(){RAD=0;}
	angle(double rad){RAD=rad;}
	angle(degree a){
		RAD=a.rad();
	}
	~angle(){}
	
	double rad(){return RAD;}
	degree deg();
	
	friend angle operator+(angle& a, angle& b);
	friend angle operator-(angle& a, angle& b);
	friend ostream& operator<<(ostream& output, angle& a);
	
	friend double sin(angle& a){
		double b=a.rad();
		return sin(b);}
	friend double cos(angle& a){
		double b=a.rad();
		return cos(b);}
	friend double tan(angle& a){
		double b=a.rad();
		return tan(b);}
	friend double cosh(angle& a){
		double b=a.rad();
		return cosh(b);}
	friend double sinh(angle& a){
		double b=a.rad();
		return sinh(b);}
	friend double tanh(angle& a){
		double b=a.rad();
		return tanh(b);}
	
	};


#endif
	
