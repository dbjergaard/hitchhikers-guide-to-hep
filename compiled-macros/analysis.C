#include <cstdlib>
#include "TFile.h"
#include "TH1F.h"


// Generates a random number between min and max
double randomP(double min, double max){
  return (max-min)*((double)rand())/RAND_MAX+min;
}

int doAnalysis(){
  //Since the ROOT binary already defines a "main" an error will occur
  //if you redefine another function named "main", therefore we use
  //the verb "doAnalysis"
  
  //Open files and retrieve pointers here

  const int N=10000;

  double jet_E=0,jet_px=0,jet_py=0,jet_pz=0;

  //initialize random seed, use a fixed number to make the results
  //repeatable 
  srand(42);

  for(size_t i=0; i < N; i++  ){
    jet_E=randomP(0,100);
    jet_px=randomP(0,100);
    jet_py=randomP(0,100);
    jet_pz=randomP(0,100);
  }
  return 42;
}
