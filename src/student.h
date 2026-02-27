#include <string>

class Student {
private:
  std::string name;
  int age;
  double score;

public:
  Student();
  Student( std::string n, int a, double s );
  std::string ins_str();
  std::string upd_str();
}; 
