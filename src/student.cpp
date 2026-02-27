#include "student.h"
#include <sstream>

Student::Student() : name( "" ), age( 0 ), score( 0 ) {}

Student::Student( std::string n, int a, double s ) 
  : name( n ), age( a ), score( s ) {}

std::string Student::ins_str() {
  std::stringstream ss;
  ss << "(" << name << "," << age << "," << score << ")";
  return ss.str();
}

std::string Student::upd_str() {
  std::stringstream ss;
  ss << "name=" << name << ", age=" << age << ", score=" << score;
  return ss.str();
}
