#include <iostream>
#include <string>
#include "3d.h"

using namespace std;

string get_tree_ascii() {
  string tree = 

"                                  # #### ####                             \n"
"                                ### \/#|### |/####                        \n"
"                               ##\/#/ \||/##/_/##/_#                      \n"
"                             ###  \/###|/ \/ # ###                        \n"
"                           ##_\_#\_\## | #/###_/_####                     \n"
"                          ## #### # \ #| /  #### ##/##                    \n"
"                           __#_--###`  |{,###---###-~                     \n"
"                                     \ }{                                 \n"
"                                      }}{                                 \n"
"                                      }}{                                 \n"
"                                 ejm  {{}                                 \n"
"                                , -=-~{ .-^- _                            \n"
"                                      `}                                  \n"
"                                       {                                  \n";
  return tree;
}

int main() {
  cout << get_tree_ascii();
  cout << endl << endl << "Welcome to Treelon" << endl;
  init_3d();
}
