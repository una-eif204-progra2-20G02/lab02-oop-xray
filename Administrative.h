//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include <iostream>
#include "Person.h"
Using namespace std;

class Administrative: public Person {
private:
  double monthlySalary;
  
public:
  Administrative();
  Administrative(double monthlySalary );
  Administrative(string firstName ,string lastName ,int documentId ,double monthlySalary );
  ~Administrative();

  double getMonthlySalary();

  void setMonthlySalary(double monthlySalary);

  double salary();
  string toString();
};


#endif //LAB02_OOP_ADMINISTRATIVE_H
