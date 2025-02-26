#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"

void Address();
void Date();
void Student();

int main(){
  Address();
  Date();
  Student();
  return 0;
} // end main

void Address(){
  Address a;
  a.init("", "", "", "");
  a.printAddress();
} // end Address

void Date(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end Date

void Student(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end Student
