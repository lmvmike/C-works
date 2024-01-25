//
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std;

unsigned int rollDice();// rolls dice, calculates and displays sum

int main(){
    // scoped enumeration with constants that represent the game status
    enum class Status{CONTINUE, WON, LOST};

    //randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint{0};
    Status gameStatus;
    unsigned int sumOfDice{rollDice()};

    //determine game status and point (if needed) based on first roll
    switch (sumOfDice) {
        case 7://win with 7 on fisrt roll
        case 11://win with 11 on fisrt roll
            gameStatus = Status::WON;
            break;
        case 2://lose with 2 on fisrt roll
        case 3://lose with 3 on fisrt roll
        case 12://lose with 12 on fisrt roll
            gameStatus = Status::LOST;
            break;
        default:// did not win or lose, so remember point
        gameStatus = Status::CONTINUE;
        myPoint = sumOfDice; // remmebr the point
        cout << "Point is " << myPoint << endl;
        break; // optional at end of switch
    }

    // while ghame is not complete
    while(Status::CONTINUE == gameStatus){
        sumOfDice = rollDice();

        //while game is not complete
        if (sumOfDice == myPoint){
            gameStatus = Status::WON;
        }
        else{
            if (sumOfDice == 7){
                gameStatus = Status::LOST;
            }
        }
    }

    //dislpay won or lost message
    if(Status::WON == gameStatus){
        cout << "Player wins" << endl;
    }
    else {
        cout << "PLayer loses" << endl;
    }
}

// roll dice, calculate sum and dispay results
unsigned int rollDice(){
    int die1{1 + rand() % 6};
    int die2{1 +rand() % 6};
    int sum{die1 + die2};

    //display results of this roll
    cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}
