//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

  Administrative::Administrative()
  {
    this->monthlySalary = 0;
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

  double Administrative::salary() 
  {
    return;
  }
  string Administrative::toString()
  {
    stringstream s;
    s<< "nombre: " << getFirstName() <<endl;
    s<< "apellido: " << getLastName() <<endl;
    s<< "Id del documento" << getDocumentId() <<endl;
    s<< "salario mensual:  " << monthlySalary <<endl;
   return s.str();
  }