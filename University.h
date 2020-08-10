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
vector<Professor> professorList;
vector<Administrative> administrativeList;

public:
University();
University(string name);
University(string name,Professor professor,Administrative administrative);

string getName();
Professor getProfessor();
Administrative getAdministrative();
Professor* getProfessorList();
Administrative* getAdministrativeList();

void setName(string name);
void setProfessor(Professor professor);
void setAdministrative(Administrative administrative);

Professor addProfessor(Professor professor);
Administrative addAdministrative(Administrative administrative);
};


#endif //LAB02_OOP_UNIVERSITY_H
