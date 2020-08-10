//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

  Administrative::Administrative(){}
  Administrative::Administrative(double monthlySalary ) {
    this->monthlySalary = monthlySalary;
  }
  Administrative::Administrative(string firstName ,string lastName ,int documentId ,double monthlySalary) : Person(firstName, lastName, documentId) {
    this->monthlySalary = monthlySalary;  
  }
  Administrative::~Administrative() {}

  double Administrative::getMonthlySalary() {return monthlySalary;}
  void Administrative::setMonthlySalary(double monthlySalary) { this->monthlySalary = monthlySalary;}
  double Administrative::salary() {return monthlySalary;}
  string Administrative::toString(){
    stringstream s;
    s<< "Administrative Information: " <<firstName<<" "<<lastName<<endl;
    s<<"Doc Id: "<<documentId<<", "<<"Monthly Salary: "<<monthlySalary<<endl;
   return s.str();
  }