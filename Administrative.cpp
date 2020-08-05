//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"


  Administrative::Administrative() 
  {
    this->monthlySalary = monthlySalary;
  }
  Administrative::Administrative(double monthlySalary ) 
  {
    this->monthlySalary = monthlySalary;
  }
  Administrative::Administrative(string firstName ,string lastName ,int documentId ,double monthlySalary ) : Person(firstName, lastName, documentId) 
  {
    this->monthlySalary = monthlySalary;  
  }
  Administrative::~Administrative() {}

  double Administrative::getMonthlySalary() {return monthlySalary;}

  void Administrative::setMonthlySalary(double monthlySalary) 
  { 
    this->monthlySalary = monthlySalary;
  }

  double Administrative::salary() {}
  string Administrative::toString() {
    stringtostream s;
    s<<"nombre: " << getNombre() <<endl;
    s<<"apellido: ", << getLastName() <<endl;
    s
    s<<"salario mensual:  " << monthlySalary <<endl; "ID del documento: " <<get documentId() <<endl;
   return s.str();
  }