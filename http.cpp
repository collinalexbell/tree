#include <cpr/cpr.h>

void goTo(std::string arg) {
  cpr::Get(cpr::Url{arg});
}

int main(int argc, char** argv) {

  auto r = cpr::Get(cpr::Url{"https://example.com"});
  printf("\n%d\n", r.status_code);
  printf("\n%s\n", r.text.c_str());
}
