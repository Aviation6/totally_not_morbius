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
  string userinputCloned;
  int hunger = 15;
  int thirst = 15;
  int money = 5;
  bool morbiusIsLife = true;
  string location;
  bool tick = false;
  string inv1 = "NaN";
  string inv2 = "NaN";
  string inv3 = "NaN";


  cout << "Do you want a tutorial? yes/anything else \n";

  cin >> userinput;
  if (userinput == "yes"){
    cout << "Welcome to Morbius simulator, it's Morbin time, this is a port of a game made in python but now it exists as a program \n";
    cout << "In this game, you must go on an epic quest to watch Morbius, you need to manage thirst and hunger, good luck! \n";
  }
  while (morbiusIsLife){
  location = "Cinema";

  while (location == "Cinema"){
    cout << "Welcome to the Cinema! You can watch Morbius here, if you have a ticket \n";
    cout << "Choices: You can Try and enter the *cinema* (need a ticket), enter *shop* to buy food and tickets, or exit to *street* \n";
    cin >> userinput;
    if (userinput == "cinema"){
      if (tick == false){
        cout << "You need a ticket to enter! \n";
      }
      else{
        cout << "Congratulations! You were able to enter the cinema and watch the film! Type anything and press enter to quit";
        cin >> userinput;
        return(0);
      }
      }
      else if(userinput == "shop"){
        location = "shop";
      }
      else if(userinput == "street"){
        location = "street";
      }

      while (location == "shop"){
        cout << "The shop keeper is a middle adged man with a bright orange beard and a cartoonly smug grin on his mouth \n . He asks you 'what ya buying? You can buy overpriced *popcorn*, movie *ticket* or movie *water*' \n";
        cin >> userinput;
        if (userinput == "popcorn"){
          if (money >= 5){
            if (inv1 == "NaN"){
              inv1 = "popcorn";
              cout << "You obtained popcorn! \n";
              money -= 5;
            }
            else if (inv2 == "NaN"){
              inv2 = "popcorn";
              cout << "You obtained popcorn! \n";
              money -= 5;
            }
            else if (inv3 == "NaN"){
              inv3 = "popcorn";
              cout << "You obtained popcorn! \n";
              money -= 5;
            }
            else{
              cout << "You have no free space in your inventory! \n";
            }
          }
          else{
            cout << "You don't have enough money!";
          }
        }
        else if (userinput == "water"){
          if (money >= 3){
            if (inv1 == "NaN"){
              inv1 = "water";
              cout << "You obtained water! \n";
              money -= 3;
            }
            else if (inv2 == "NaN"){
              inv2 = "water";
              cout << "You obtained water! \n";
              money -= 3;
            }
            else if (inv3 == "NaN"){
              inv3 = "water";
              cout << "You obtained water! \n";
              money -= 3;
            }
            else{
              cout << "You have no free space in your inventory! \n";
            }
          }
          else{
            cout << "You don't have enough money! \n";
          }
        }
        else if (userinput == "ticket"){
          if (tick == false){
            if (money >= 15){
              cout << "You have bought a ticket! \n";
              tick = true;
              money -= 15;
            }
            else {
              cout << "Not enough money! ): \n";
            }
          }
          else{
          cout << "You already have a ticket! \n";
        }
        }
    }
  }

    while (location == "street"){
      cout << "Welcome to the street, you can head *home*, enter the *cinema* or go to the *workshop*\n";
      cin >> userinput;

      if (userinput == "home"){
        cout << "You head home only to find a copy of Morbline Miami already sitting there! You decide to give it a whirl and end up having a blast! \n";
        cout << "Please close the window as I don't know how to exit the program properly";
        cin >> userinput;
        return 0;
      }
      else if (userinput == "cinema"){
        cout << "You have returned to the cinema";
        location = "cinema";
      }
    if (userinput == "workshop"){
       cout << "You are now at work. Would you like to *work* for 7 money or *leave*? \n";
       cin >> userinput;
       while (userinput == "work"){
        cout << "*work* for money or *leave?*";
        cin >> userinputCloned;
        if (userinputCloned == "work"){
          cout << "You worked and made 7 money! Maybe you can afford a morbius ticket \n";
        }
        else if (userinputCloned == "leave"){
          cout << "you have left, you are back on the street \n";
          location = "street";
        }
       }
     }
    else if (userinput == "leave"){
     cout << "You have left the workshop \n";
     location = "street";
    }
    }
    }
    }
