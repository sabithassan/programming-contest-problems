#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

bool isStopped(int n, bool king, bool queen, bool jack) {

    if ((king && n > 1) || (queen && n > 2))
        return true;
    return false;
}

int getCards(int numCards, bool king, bool queen, bool jack) {
    return numCards - (int)king - (int)queen - (int)jack;
}

int rule3(int numCards, bool queen) { // return 1 or 0
    return queen && numCards < 3;
}

int rule4(int numCards, bool jack){
    return jack && numCards < 4;

}

int rule5(int numCards) {
    return numCards == 2;
}

int rule6(int numCards) {
    if (numCards == 1)
        return 2;
    return 0;
}

int rule7(int numCards) {
    if (numCards == 0)
        return 2;
    return 0;
}


 int main () {
    int points, pointswo567, counter;
    int numS, numH, numD, numC;
    char curCard[128];
    bool stoppedS, stoppedH, stoppedD, stoppedC;
    bool kingS, kingH, kingD, kingC;
    bool queenS, queenH, queenD, queenC;
    bool jackS, jackH, jackD, jackC;

    counter = 0;
    stoppedS = false;
    stoppedH = false;
    stoppedD = false;
    stoppedC = false;

    kingS = false;
    kingH = false;
    kingD = false;
    kingC = false;

    numS = 0;
    numH = 0;
    numD = 0;
    numC = 0;


    queenS = 0;
    queenH = 0;
    queenC = 0;
    queenD = 0;

    jackS = 0;
    jackH = 0;
    jackC = 0;
    jackD = 0;


    while (cin >> curCard){
        counter ++;
        if (counter == 13){
            if (!stoppedS)
                stoppedS = isStopped(numS, kingS, queenS, jackS);
            if (!stoppedH)
                stoppedH = isStopped(numH, kingH, queenH, jackH);
            if (!stoppedC)
                stoppedC = isStopped(numC, kingC, queenC, jackC);
            if (!stoppedD)
                stoppedD = isStopped(numD, kingD, queenD, jackD);


            //rule 2:

            if (kingS && numS == 1){
                points --;
                pointswo567 --;
            }
            if (kingD && numD == 1){
                points --;
                pointswo567 --;
            }
            if (kingH && numH == 1){
                points --;
                pointswo567 --;
            }
            if (kingC && numC == 1){
                points --;
                pointswo567 --;
            }

            points = points - rule3(numS, queenS);
            points = points - rule3(numH, queenH);
            points = points - rule3(numD, queenD);
            points = points - rule3(numC, queenC);

            pointswo567 = pointswo567 - rule3(numS, queenS);
            pointswo567 = pointswo567 - rule3(numH, queenH);
            pointswo567 = pointswo567 - rule3(numD, queenD);
            pointswo567 = pointswo567 - rule3(numC, queenC);

            points = points - rule4(numS, jackS);
            points = points - rule4(numH, jackH);
            points = points - rule4(numC, jackC);
            points = points - rule4(numD, jackD);

            pointswo567 = pointswo567 - rule4(numS, jackS);
            pointswo567 = pointswo567 - rule4(numH, jackH);
            pointswo567 = pointswo567 - rule4(numD, jackD);
            pointswo567 = pointswo567 - rule4(numC, jackC);

            points += rule5(numS);
            points += rule5(numH);
            points += rule5(numD);
            points += rule5(numC);

            points += rule6(numS);
            points += rule6(numH);
            points += rule6(numD);
            points += rule6(numC);

            points += rule7(numS);
            points += rule7(numH);
            points += rule7(numD);
            points += rule7(numC);



            if (pointswo567 >= 16 && stoppedS && stoppedH && stoppedC && stoppedD){
                cout << "BID NO-TRUMP" << endl;

            } else if (points >= 14){
                if (numS >= numH && numS >= numD && numS >= numC)
                    cout << "BID S" << endl;
                else if (numH >= numC && numH >= numD && numH >= numS){
                    cout << "BID H" << endl;
                } else if (numD >= numC && numD >= numH && numD >= numS){
                    cout << "BID D" << endl;
                } else {
                    cout << "BID C" << endl;
                }
            } else {
                cout << "PASS" << endl;
            }



            counter = 0;
            stoppedS = false;
            stoppedH = false;
            stoppedD = false;
            stoppedC = false;

            kingS = false;
            kingH = false;
            kingD = false;
            kingC = false;

            numS = 0;
            numH = 0;
            numD = 0;
            numC = 0;


            queenS = 0;
            queenH = 0;
            queenC = 0;
            queenD = 0;

            jackS = 0;
            jackH = 0;
            jackC = 0;
            jackD = 0;

            points = 0;
            pointswo567 = 0;
        }
        if (curCard[1] == 'S'){
            numS ++;
            if (curCard[0] == 'A') {
                points += 4;
                pointswo567 += 4;
                stoppedS = 1;


            } else if (curCard[0] == 'K'){
                points += 3;
                pointswo567 += 3;
                kingS = 1;
            } else if (curCard[0] == 'Q'){
                points += 2;
                pointswo567 += 2;
                queenS = 1;
            } else if (curCard[0] == 'J'){
                points += 1;
                pointswo567 += 1;
                jackS = 1;
            } else {
                // do nothing?
            }

       } else if (curCard[1] == 'H'){
           numH ++;
            if (curCard[0] == 'A') {
                points += 4;
                pointswo567 += 4;
                stoppedH = 1;


            } else if (curCard[0] == 'K'){
                points += 3;
                pointswo567 += 3;
                kingH = 1;
            } else if (curCard[0] == 'Q'){
                points += 2;
                pointswo567 += 2;
                queenH = 1;
            } else if (curCard[0] == 'J'){
                points += 1;
                pointswo567 += 1;
                jackH = 1;
            } else {
                // do nothing?
            }
        }  else if (curCard[1] == 'D'){
           numD ++;
            if (curCard[0] == 'A') {
                points += 4;
                pointswo567 += 4;
                stoppedD = 1;


            } else if (curCard[0] == 'K'){
                points += 3;
                pointswo567 += 3;
                kingD = 1;
            } else if (curCard[0] == 'Q'){
                points += 2;
                pointswo567 += 2;
                queenD = 1;
            } else if (curCard[0] == 'J'){
                points += 1;
                pointswo567 += 1;
                jackD = 1;
            } else {
                // do nothing?
            }

        }  else if (curCard[1] == 'C') {
            numC ++;
            if (curCard[0] == 'A') {
                points += 4;
                pointswo567 += 4;
                stoppedC = 1;


            } else if (curCard[0] == 'K'){
                points += 3;
                pointswo567 += 3;
                kingC = 1;
            } else if (curCard[0] == 'Q'){
                points += 2;
                pointswo567 += 2;
                queenC = 1;
            } else if (curCard[0] == 'J'){
                points += 1;
                pointswo567 += 1;
                jackC = 1;
            } else {
                // do nothing?
            }

        }
    }
}
