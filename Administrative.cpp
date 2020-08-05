//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"


  Administrative() {}
  Administrative(double ms) {
    monthlySalary = ms;
  }
  Administrative(string f,string l,int d,double ms)
  : firstName(f), lastName(l), documentId(d)  {
    monthlySalary = ms;  
  }
  virtual Administrative::~Administrative()

  double Administrative::getMonthlySalary() { return monthlySalary;}

  void Administrative::setMonthlySalary(double ms) { monthlySalary = ms;}

  double Administrative::salary() {}
  string Administrative::toString() {
    stringtostream p;
    //Por completar
    return p.str();
  }