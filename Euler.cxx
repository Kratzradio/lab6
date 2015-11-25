
#include <cmath>
#include <iostream>

/*
y'=lambda y,
y(0)=1
lambda<0

*/

using namespace std;

int main(){
int N = 5000;
double y = 1;
double thl=1.3863;
const double lambda = -0.5;
double dt=5*thl/N;
double f = 1;
double b = 1;
double u = 1;

cout << 0 << "\t" << y << "\t" << f << "\t" << b << "\t" << u << endl;
    for(int i=0; i<N; i++){

      f = f + dt * lambda * f;		//euler forward
      b = b / (1 - (dt * lambda));	//euler backward
      y = exp(lambda*dt*(i+1));		//analytic solution
      u = u * (1 + (lambda * dt *0.5))/(1 - (lambda * dt * 0.5));
     
      cout << i*dt << "\t" << y << "\t" << f << "\t" << b << "\t" << u << endl;
    }
    

 return 0; 
}

