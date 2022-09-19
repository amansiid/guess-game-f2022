#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(){
    srand(time(0));
    int magic, guess, cont = 1;

    while (cont == 1){
         magic = rand() % 10 + 1;
         cerr << magic << endl;
         cout << "Please Guess a number" << endl;
         for (int curTry = 0; curTry < 3; ++curTry){
             cin >> guess;
             if (guess == magic){
                 cout << "You win!" << endl;
                 break;
             }else if (curTry < 2){
                 cout << "Try again!" << endl;
             }
         }
         if (guess != magic){
             cout << "Looser" << endl;
         }
         cout << "Wanna go again? [0 for no]";
         cin >> cont;
     }
    return 0;
}
