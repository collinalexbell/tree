#include <stdio.h>
#include <string>
#include <vector>

class Choice
{
  //+++++++++++++++++++++++
  public:
  //+++++++++++++++++++++++

  Choice(const char* _name)
  {
   name = _name;
  }

  //-----------------------

  const char* getName()
  {
    return name.c_str();
  }
  //-----------------------


 
  
  //+++++++++++++++++++++++
  private:
  //+++++++++++++++++++++++
  std::string name;
  //-----------------------
  //-----------------------

};

int enter_a_number() {
  printf("enter a number: ");
  int choice;
  scanf("%d", &choice);
  return choice;
}

Choice main_menu()
{
  std::vector<Choice> choices;
  choices.push_back(Choice("test all"));
  choices.push_back(Choice("test one"));
  int x = 0;
  for(auto it = choices.begin(); it != choices.end(); it++)
  {
    printf("%d): %s\n", x, it->getName());
    x++;
  }
  int choice = enter_a_number();
  return choices[choice];
}

int main()
{
  printf("welcome to tree\n");
  printf("selected: %s\n", main_menu().getName());
}
