//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

private:
  double monthlySalary;
  double commissionRate;

public:
  Professor();
  Professor(double monthlySalary,double commissionRate);
  Professor(string firstName ,string lastName ,int documentId ,double monthlySalary,double commissionRate);
  ~Professor();

  double getMonthlySalary();
  double getCommissionRate();

  void setMonthlySalary(double monthlySalary);
  void setCommissionRate(double commissionRate);

  double salary();
  string toString();

};

#endif //LAB02_OOP_PROFESSOR_H
