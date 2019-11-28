#include <iostream>
#include <fstream>
#include <cmath>


void inicializa(double *fi, double *finueva, double *finueva2, double pi, double l, double deltax);
void ecua(double *fi, double *finueva, double *finueva2, double deltat, double t, double tmax);
int main (){
    
double tmax=0.1;
    double T=40;
    double t;
    double ro=0.01;
    double l=1.0;
    double pi=3.14159;
    double c = sqrt(T/ro);
    double deltat=0.01;
    double deltax=0.01;
    double cl=c;
    double ratio= c*c/(cl*cl);
    int n_t=0;
   
    double n_x=90;
    double *fi = NULL;
  double *finuevo = NULL;
    double *finuevo2 = NULL;
    
fi = new double [90];
  finuevo  = new double [90];
      finuevo2  = new double [90];

  return 0;

}

void inicializa(double *fi, double *finueva, double *finueva2, double pi, double l, double deltax){
 double x;
    for(int i=0;i<90;i++){
        fi[i]= 1.0e-4*sin(2*pi*(x/l));
        finueva[i]=fi[i];
        finueva2[i]=fi[i];
        x = i*deltax;

std::cout << fi << " " << finueva<< " " << finueva2 << std::endl;
    }
}
    
void ecua(double *fi, double *finueva, double *finueva2, double deltat, double ratio, double t, double tmax){
  int i;
    while(t<tmax){
  for(i=1;i<89;i++){
    finueva[i] = fi[i];
    finueva2[i] += 2*finueva[i]-fi[i]+ ratio * (finueva[i+1]+finueva[i-1]-2*finueva[i]);
    finueva[i] += deltat * i;
       std::cout << fi << " " << finueva<< " " << finueva2 << std::endl;
  }
    }
}

