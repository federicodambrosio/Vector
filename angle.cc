#ifndef ANGLE_CC_
#define ANGLE_CC_
#include "angle.hh"

degree::degree(double n){
	DEG=int(n);
	double rest=n-DEG;
	FIRSTS=int(rest*60);
	rest=rest-FIRSTS;
	SECONDS=int(rest*3600);
	}

degree::degree(int deg, int firsts, int seconds){
	DEG=deg;
	if(firsts < 60){
		FIRSTS=firsts;
		if (seconds < 60){
			SECONDS=seconds;
			}
		else {
			cout<<"NON VALIDO";
			
			}
		}
	else {
		cout<<"NON VALIDO";
		
		}
	}

degree operator+(degree& a, degree& b){
	double n=a.num()+b.num();
	degree result(n);
	return result;
	}

degree operator-(degree& a, degree& b){
	double n=a.num()-b.num();
	degree result(n);
	return result;
	}

ostream& operator<<(ostream& output, degree& a){
	int f=a.deg();
	int g=a.fir();
	int h=a.sec();
	output<<f<<"°"<<g<<"'"<<h<<"''";
	return output;
	}
	
degree angle::deg(){
	degree result(RAD);
	return result;
	}

angle operator+(angle& a, angle& b){
	double rad=a.rad()+b.rad();
	angle result(rad);
	return result;
}

angle operator-(angle& a, angle& b){
	double rad=a.rad()-b.rad();
	angle result(rad);
	return result;
}

ostream& operator<<(ostream& output, angle& a){
	double f=a.rad();
	degree g=a.deg();
	output<<f<<" rad or "<<g;
	return output;
}

#endif