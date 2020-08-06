//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
using namespace std;

class University {
private:
string name;
Professor professor;
Administrative administrative;

public:
University();
University(string name);
University(string name,Professor professor,Administrative administrative);
string getName();
Professor getProfesor();
Administrative getAdministrative();
void setName(string name);
void setProfessor(Professor professor);
void setAdministrative(Administrative administrative);


};


#endif //LAB02_OOP_UNIVERSITY_H
