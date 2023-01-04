//how I am going to do the inventory, variables. Ok capiche?

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
//programming this on Linux so windows.h library not avaliable
//#include <windows.h>
using namespace std;

/* void hunger_system(){
  int hunger = 15;
  hunger -= 1;
  if (hunger <= 10){
    cout << "You are getting hungry";
    }
  else if (hunger <= 7 and "popcorn"){
    cout << "You were hungry so you ate popcorn";
    hunger = 15;
  }
  else if (hunger <= 3){
    cout << "You are about to starve to death";
  }
  else if (hunger == 0){
    cout << "You have starved to death!";
  }
} */



int main() {
    string userinput;
    string userinputCloned;
    int hunger = 15;
    int thirst = 15;
    int money = 5;
    bool movieIsLife = true;
    string location;
    bool tick = false;
    string inv1 = "NaN";
    string inv2 = "NaN";
    string inv3 = "NaN";


    cout << "Do you want a tutorial? yes/anything else \n";

    cin >> userinput;
    if (userinput == "yes") {
        cout << "Welcome to Movie watching simulator, this is a port of a game made in python but now it exists as a program \n";
        cout << "In this game, you must go on an epic quest to watch a movie, you need to manage thirst and hunger, good luck! \n";
    }
    while (movieIsLife) {
        location = "Cinema";

        while (location == "Cinema") {
            cout << "Welcome to the Cinema! You can watch the movie here, if you have a ticket \n";
            cout << "Choices: You can Try and enter the *cinema* (need a ticket), enter *shop* to buy food and tickets, or exit to *street* \n";
            cin >> userinput;
            if (userinput == "cinema") {
                if (tick == false) {
                    cout << "You need a ticket to enter! \n";
                }
                else {
                    cout << "Congratulations! You were able to enter the cinema and watch the film! \n";
                    cout << "You realise about half way through however that this film sucks and you're not sure why you spent so much time on it, but oh well... \n";
                    cout << "Please close this window to restart";
                    sleep(2);
                    return 0;
                }
            }
            else if (userinput == "shop") {
                location = "shop";
            }
            else if (userinput == "street") {
                location = "street";
            }

            while (location == "shop") {
                cout << "The shop keeper is a middle adged man with a bright orange beard and a cartoonly smug grin on his mouth \n . He asks you 'what ya buying? You can buy overpriced *popcorn*, movie *ticket* or movie *water*' \n";
                cin >> userinput;
                if (userinput == "popcorn") {
                    if (money >= 5) {
                        if (inv1 == "NaN") {
                            inv1 = "popcorn";
                            cout << "You obtained popcorn! \n";
                            money -= 5;
                        }
                        else if (inv2 == "NaN") {
                            inv2 = "popcorn";
                            cout << "You obtained popcorn! \n";
                            money -= 5;
                        }
                        else if (inv3 == "NaN") {
                            inv3 = "popcorn";
                            cout << "You obtained popcorn! \n";
                            money -= 5;
                        }
                        else {
                            cout << "You have no free space in your inventory! \n";
                        }
                    }
                    else {
                        cout << "You don't have enough money!";
                    }
                }
                else if (userinput == "water") {
                    if (money >= 3) {
                        if (inv1 == "NaN") {
                            inv1 = "water";
                            cout << "You obtained water! \n";
                            money -= 3;
                        }
                        else if (inv2 == "NaN") {
                            inv2 = "water";
                            cout << "You obtained water! \n";
                            money -= 3;
                        }
                        else if (inv3 == "NaN") {
                            inv3 = "water";
                            cout << "You obtained water! \n";
                            money -= 3;
                        }
                        else {
                            cout << "You have no free space in your inventory! \n";
                        }
                    }
                    else {
                        cout << "You don't have enough money! \n";
                    }
                }
                else if (userinput == "ticket") {
                    if (tick == false) {
                        if (money >= 15) {
                            cout << "You have bought a ticket! \n";
                            tick = true;
                            money -= 15;
                        }
                        else {
                            cout << "Not enough money! ): \n";
                        }
                    }
                    else {
                        cout << "You already have a ticket! \n";
                    }
                }
            }
        }

        while (location == "street") {
            cout << "Welcome to the street, you can head *home*, enter the *cinema*, go to the *workshop* or visit the *piracy* store \n";
            cin >> userinput;

            if (userinput == "home") {
                if (inv1 == "PiratedDVD") {
                    cout << "You head home to watch your new 'legally' obtained copy of the movie when suddenly MI5 burst in through the front door and tell you off, nothing else really happens but you get a pretty stern warning \n";
                    cout << "You decided to watch the film anyway to find out it doesn't work and now you're missing your front door \n";
                    cout << "You got the Pirated Movie Ending! \n";
                    cout << "Please close this window to restart";
                    sleep(2);
                    return 0;
                }
                else if (inv2 == "PiratedDVD") {
                    cout << "You head home to watch your new 'legally' obtained copy of the movie when suddenly MI5 burst in through the front door and tell you off, nothing else really happens but you get a pretty stern warning \n";
                    cout << "You decided to watch the film anyway to find out it doesn't work and now you're missing your front door \n";
                    cout << "You got the Pirated Movie Ending! \n";
                    cout << "Please close this window to restart";
                    sleep(2);
                    return 0;
                }
                else if (inv3 == "PiratedDVD") {
                    cout << "You head home to watch your new 'legally' obtained copy of the movie when suddenly MI5 burst in through the front door and tell you off, nothing else really happens but you get a pretty stern warning \n";
                    cout << "You decided to watch the film anyway to find out it doesn't work and now you're missing your front door \n";
                    cout << "You got the Pirated Movie Ending! \n";
                    cout << "Please close this window to restart";
                    sleep(2);
                    return 0;
                }
                else {
                    cout << "You head home only to find a copy of Movline Movbami already sitting there! You decide to give it a whirl and end up having a blast! \n";
                    cout << "You got the Movline ending! \n";
                    cout << "Please close this window to restart";
                    sleep(2);
                    return 0;
                }
            }
            else if (userinput == "cinema") {
                cout << "You have returned to the cinema";
                location = "cinema";
            }
            if (userinput == "workshop") {
                cout << "You are now at work. Would you like to *work* for 7 money or *leave*? \n";
                cin >> userinput;
                while (userinput == "work") {
                    cout << "*work* for money or *leave?*";
                    cin >> userinputCloned;
                    if (userinputCloned == "work") {
                        cout << "You worked and made 7 money! Maybe you can afford a movie ticket \n";
                    }
                    else if (userinputCloned == "leave") {
                        cout << "you have left, you are back on the street \n";
                        location = "street";
                    }
                }
            }
            else if (userinput == "leave") {
                cout << "You have left the workshop \n";
                location = "street";
            }
            else if (userinput == "piracy") {
                cout << "Welcome to the piracy store, they seem to have the movie here, the legality is questionable \n";
                cout << "The mysterious induvidual behind the counter says they will give you the movie for free!";

                cout << "Will you take the free copy of the movie? *yes*/*no*";
                cin >> userinput;

                if (userinput == "yes") {
                    if (inv1 == "NaN") {
                        cout << "You got the DVD";
                        inv1 = "PiratedDVD";
                    }
                    else if (inv2 == "NaN") {
                        cout << "You got the DVD";
                        inv2 = "PiratedDVD";
                    }
                    else if (inv3 == "NaN") {
                        cout << "You got the DVD";
                        inv3 = "PiratedDVD";
                    }
                    else {
                        cout << "You have no free space in your inventory! You'll need to head home to watch it though \n";
                    }
                }
                else if (userinput == "no") {
                    cout << "The person looks at you and tells you to get out \n";
                    location = "street";
                }
            }
        }
    }