//how I am going to do the inventory, variables. Ok capiche?

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*void hunger_system(hunger){
  hunger -= 1;
  if (hunger <= 10){
    cout << "You are getting hungry"}
  else if (hunger <= 7 and "popcorn"){
    cout << "You were hungry so you ate popcorn";
    hunger = 15;
  }
  else if (hunger <= 3){
    cout << "You are about to starve to death";
  }
  else if (hunger == 0){
    cout << "You have starved to death!"
  }
}*/



int main(){
  string userinput;
  int hunger = 15;
  int thirst = 15;
  int money = 5;
  bool morbiusIsLife == true;
  string location;
  bool ticket == false;
  string inv1;
  string inv2;
  string inv3;
  //vector<string> inventory {}


  cout << "Do you want a tutorial? yes/anything else \n";

  cin >> userinput;
  if (userinput == "yes"){
    cout << "Welcome to Morbius simulator, it's Morbin time, this is a port of a game made in python but now it exists as a program \n";
    cout << "In this game, you must go on an epic quest to watch Morbius, you need to manage thirst and hunger, good luck! \n";

  location = "Cinema";

  while (location == "Cinema"){
    cout << "Welcome to the Cinema! You can watch Morbius here, if you have a ticket \n";
    cout << "Choices: You can Try and enter the *cinema* (need a ticket), enter *shop* to buy food, or exit to *street* \n";
    cin >> userinput;
    if (userinput == "cinema"){
      if (ticket == false){
      cout << "You try and enter the cinema only to be told you need a ticket to enter!"

    if (userinput == "shop"){
      location = "shop"
    }
    }
    }
  }
  }
}
