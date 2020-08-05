//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


  Professor() {}
  Professor(double ms,double cr) {
    monthlySalary = ms;
    commissionRate = cr;
  }
  Professor(string f,string l,int d,double ms,double cr)
  : firstName(f), lastName(l), documentId(d)  {
    monthlySalary = ms;
    commissionRate = cr;    
  }
  virtual Professor::~Professor()

  double Professor::getMonthlySalary() { return monthlySalary;}
  double Professor::getCommissionRate() {return commissionRate;}

  void Professor::setMonthlySalary(double ms) { monthlySalary = ms;}
  void Professor::setCommissionRate(double cr) { commissionRate = cr;}

  double Professor::salary() {}
  
  string Professor::toString() {
    stringtostream p;
    //Por completar
    return p.str();
  }