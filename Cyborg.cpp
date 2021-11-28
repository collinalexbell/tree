#include <iostream> 
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;

string left() {

  string rv =
"              .'\\   /`.              \n"
"            .'.-.`-'.-.`.             \n"
"       ..._:   .-. .-.   :_...        \n"
"     .'    '-.(o ) (o ).-'    `.      \n"
"    :  _    _ _`~(_)~`_ _    _  :     \n"
"   :  /:   ' .-=_   _=-. `   ;\\  :   \n"
"   :   :|-.._  '     `  _..-|:   :    \n"
"    :   `:| |`:-:-.-:-:'| |:'   :     \n"
"     `.   `.| | | | | | |.'   .'      \n"
"       `.   `-:_| | |_:-'   .'        \n"
"    jgs  `-._   ````    _.-'          \n"
"             ``-------''              \n";

  return rv;
}

string right() {

  string rv =
"              .'\\   /`.              \n"
"            .'.-.`-'.-.`.             \n"
"       ..._:   .-. .-.   :_...        \n"
"     .'    '-.( o) ( o).-'    `.      \n"
"    :  _    _ _`~(_)~`_ _    _  :     \n"
"   :  /:   ' .-=_   _=-. `   ;\\  :   \n"
"   :   :|-.._  '     `  _..-|:   :    \n"
"    :   `:| |`:-:-.-:-:'| |:'   :     \n"
"     `.   `.| | | | | | |.'   .'      \n"
"       `.   `-:_| | |_:-'   .'        \n"
"    jgs  `-._   ````    _.-'          \n"
"             ``-------''              \n";

  return rv;
}

string stare() {

  string rv =
"              .'\\   /`.              \n"
"            .'.-.`-'.-.`.             \n"
"       ..._:   .-. .-.   :_...        \n"
"     .'    '-.( o) (o ).-'    `.      \n"
"    :  _    _ _`~(_)~`_ _    _  :     \n"
"   :  /:   ' .-=_   _=-. `   ;\\  :   \n"
"   :   :|-.._  '     `  _..-|:   :    \n"
"    :   `:| |`:-:-.-:-:'| |:'   :     \n"
"     `.   `.| | | | | | |.'   .'      \n"
"       `.   `-:_| | |_:-'   .'        \n"
"    jgs  `-._   ````    _.-'          \n"
"             ``-------''              \n";

  return rv;
}

void clear() {
  system("clear");
}

void sleep() {
  std::this_thread::sleep_for(std::chrono::seconds(4));
}

int main() {
  while(true) {
    cout << left() << endl;
    sleep();
    clear();
    cout << right() << endl;
    sleep();
    clear();
    cout << stare() << endl;
    sleep();
    clear();
    cout << right() << endl;
    sleep();
    clear();
  }
}
