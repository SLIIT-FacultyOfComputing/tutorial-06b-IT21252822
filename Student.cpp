#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char uName[]) {
  studentId = id ;
  strcpy(name, uName);
  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID :- " << studentId << endl;
  cout << "Student Name :- " ;
  for(int i = 0 ; i < strlen(name) ; i++ )
    {
      cout << name[i] ;
    }
}
