#include <iostream>
#include <cassert>
using namespace std;

void showMenu() {
  cout << "===== Student DB =====" << endl;
  cout << "1. Add student" << endl;
  cout << "2. Delete student" << endl;
  cout << "3. Update student" << endl;
  cout << "4. List students" << endl;
  cout << "0. Exit" << endl;
}

void addStudent() {
  cout << "Add student" << endl;
}

void delStudent() {
  cout << "Delete student" << endl;
}

void updStudent() {
  cout << "Update student" << endl;

}

void listStudents() {
  cout << "List students" << endl;
}

int main() {
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
      addStudent();
      break;
    case 2:
      delStudent();
      break;
    case 3:
      updStudent();
      break;
    case 4:
      listStudents();
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
