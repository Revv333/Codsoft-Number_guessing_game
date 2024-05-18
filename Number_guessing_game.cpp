#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int minRange=1;
    int maxRange=100;
    int maxAttempts=10;
    bool playAgain=true;
    int roundsPlayed=0; 
    int totalAttempts=0;
    while(playAgain){
        int tarnum=rand()%(maxRange-minRange+1)+minRange;
        int attempts=0;
        roundsPlayed++;
        cout<<"Round "<<roundsPlayed<< ":"<<endl;
        cout<<"Guess the number between "<<minRange<<" and "<<maxRange<<endl;
        while(attempts<maxAttempts){
            cout<<"Enter your guess: ";
            int Guess;
            cin>>Guess;
            attempts++;
            if(Guess==tarnum){
                cout<<"Congratulations! You guessed the number in "<< attempts <<"attempts."<<endl;
                totalAttempts +=attempts;
                break;
            } 
            else if(Guess<tarnum){
                cout <<"Too low! Try again."<<endl;
            }
            else{
                cout<<"Too high! Try again."<<endl;
            }
        }
        if (attempts==maxAttempts) {
            cout<<"Sorry, you've reached the maximum number of attempts. The number was: "<<tarnum<<endl;
        }
        cout<<"Do you want to play again?(yes/no): ";
        string Response;
        cin>>Response;
        if(Response=="Yes"){
            playAgain=true;
        }
        else{
            playAgain=false;
        }
    }
    double avgAttemptsPerRound = (double)totalAttempts/roundsPlayed;
    cout<<"Game over. Rounds played: "<<roundsPlayed<<endl;
    cout<<"Your average attempts per round: "<<avgAttemptsPerRound<<endl;
    return 0;
}

