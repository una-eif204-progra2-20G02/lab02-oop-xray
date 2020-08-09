//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


  Professor::Professor() {}
  Professor::Professor(double monthlySalary,double commissionRate) {
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;
  }
  Professor::Professor(string firstName, string lastName ,int documentId ,double monthlySalary ,double commissionRate ) : Person(firstName, lastName, documentId){
    this->monthlySalary = monthlySalary;
    this->commissionRate = commissionRate;    
  }
  Professor::~Professor(){} 

  double Professor ::getMonthlySalary() { return monthlySalary;}
  double Professor::getCommissionRate() {return commissionRate;}

  void Professor::setMonthlySalary(double monthlySalary ) { this->monthlySalary = monthlySalary ;}
  void Professor::setCommissionRate(double commissionRate ) { this->commissionRate = commissionRate;}

  double Professor::salary() {
    return (monthlySalary - (monthlySalary*(commissionRate/100)));
  }
  
  string Professor::toString(){
    stringstream s;
    s<< "Professor Information: "<<firstName<<" "<<lastName<<endl;
    s<<"Doc Id: "<<documentId<<", "<<"Monthly Salary :"<<salary()<<endl;
    return s.str();
  }