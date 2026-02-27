#include <iostream>
#include <cassert>
#include "student.h"
#include "database.h"
using namespace std;

void showMenu() { // 显示菜单
  cout << "===== Student DB =====" << endl;
  cout << "1. Add student" << endl;
  cout << "2. Delete student" << endl;
  cout << "3. Update student" << endl;
  cout << "4. List students" << endl;
  cout << "0. Exit" << endl;
}

void addStudent( Database& db ) { // 添加学生信息
  string name;
  int age;
  double score;
  cout << "Please enter the student's information:" << endl;
  cout << "Name: ";
  cin >> name;
  cout << "Age: ";
  cin >> age;
  cout << "Score: ";
  cin >> score;
  Student st( name, age, score );
  db.execute( "insert into student (name,age,score) values "
              + st.ins_str() + ";" );
}

void delStudent( Database& db ) { // 删除学生信息
  int id;
  cout << "Please enter the ID of the student to be deleted: ";
  cin >> id;
  db.execute( "delete from student where id = " + to_string( id )
              + ";" );
}

void updStudent( Database& db ) { // 修改学生信息
  int id;
  cout << "Please enter the ID of the student to be updated: ";
  cin >> id;
  string name;
  int age;
  double score;
  cout << "Please enter the new information of the student: " << endl;
  cout << "Name: ";
  cin >> name;
  cout << "Age: ";
  cin >> age;
  cout << "Score: ";
  cin >> score;
  Student st( name, age, score );
  db.execute( "update student set " + st.upd_str() + " where id = "
              + to_string( id ) + ";" );
}

void listStudents( Database& db ) { // 列出学生信息
  db.execute( "select * from student;" );
}

int main() {
  Database db( "./data/student.db" );
  while ( true ) {
    showMenu();
    cout << "Please enter the operation number: ";
    int num;
    while ( true ) {
      cin >> num;
      if ( 0 <= num && num <= 4 ) {
        break;
      } else {
        cout << "Input is invalid. Please re-enter the number: "; 
      }
    }
    switch ( num ) {
    case 1:
      addStudent( db );
      break;
    case 2:
      delStudent( db );
      break;
    case 3:
      updStudent( db );
      break;
    case 4:
      listStudents( db );
      break;
    case 0:
      return 0;
      break;
    default:
      assert( false );
      break;
    }
  }
  return 0;
}
