/*
 *  vect.cc
 *  vectclass
 *
 *  Created by Federico D'Ambrosio on 02/05/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef VECT_CC_
#define VECT_CC_
#include "vect.hh"
#include "angle.cc"


vect operator+(vect & v, vect & u){
	double x=u.x()+v.x();
	double y=u.y()+v.y();
	double z=u.z()+v.z();
	vect result(x,y,z);
	return result;
}

//molt per scalare
vect operator*(vect&v, double a){
	double X,Y,Z;
	X=v.x()*a;
	Y=v.y()*a;
	Z=v.z()*a;
	vect result(X,Y,Z);
	return result;
	
}

//commutativa
vect operator*(double a, vect& v){
	return (v*a);
}

//modulo
double vect::mod(){
	return(sqrt(x()*x()+y()*y()+z()*z()));
}

//prodotto vettoriale
vect operator%(vect & v, vect & u) {
	double X,Y,Z;
	X=v.x()*u.z()-v.z()*u.y();
	Y=-v.x()*u.z()+v.z()*u.x();
	Z=v.x()*u.y()-v.y()*u.x();
	vect result(X,Y,Z);
	return result;
}

//prodotto scalare
double operator*(vect & v, vect & u) {
	double result=v.x()*u.x()+v.y()*u.y()+v.z()*u.z();
	return result;
}


//cout
std::ostream & operator<<(std::ostream & os, vect & v){
	os<<"("<<v.x()<<","<<v.y()<<","<<v.z()<<")";
	return os;
}


//angolo di un vettore
angle vect::anglewith(vect& v){
	vect u(x(),y(),z());
	double a=u*v;
	double b=u.mod()*v.mod();
	angle alpha(a/b);
	return alpha;
}

#endif