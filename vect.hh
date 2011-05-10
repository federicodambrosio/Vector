/*
 *  vect.hh
 *  vectclass
 *
 *  Created by Federico D'Ambrosio on 02/05/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef VECT_H_
#define VECT_H_
#include <cmath>
#include <iostream>
#include "angle.cc"

class vect{
private:
	double X;
	double Y;
	double Z;
	
public:
	//Costruttori
	vect(){
		X=0;
		Y=0;
		Z=0;
	}
	vect(double x, double y){
		X=x;
		Y=y;
		Z=0;
	}
	vect(double x, double y, double z){
		X=x;
		Y=y;
		Z=z;
	}
	
	
	//distruttore
	~vect(){
		
	}
	
	//restituzione variabile
	double x(){
		return X;
	}
	double y(){
		return Y;
	}
	double z(){
		return Z;
	}
	
	//somma
	friend vect operator+(vect & v, vect & u);
	//molt per scalare
	friend vect operator*(vect & v, double a);
	//commutativa
	friend  vect operator*(double a, vect& v);
	//modulo
	double mod();
	//prodotto vettoriale
	friend vect operator%(vect & v, vect & u) ;
	//prodotto scalare
	friend double operator*(vect & v, vect & u) ;
	
	//angolo con vettore
	angle anglewith(vect & v);
	
	//cout
	friend std::ostream & operator<<(std::ostream & os, vect & v);
};

#endif

