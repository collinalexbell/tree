#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;


int main() {
  int choice;
  cout << "Empire" << endl;
  cout << "   1) Vehicles" << endl;
  cin >> choice;
  if(choice == 1){
    auto fs = fstream("vehicle.txt", fstream::in | fstream::out);
    char txt[1024];
    while(!fs.eof()) {
      fs.getline(txt, 1024);
      cout << txt << endl;
    }
    fs.close();
  } else {
    cout << "choose a valid option" << endl;
    main();
  }
}
