#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class RPS{
    private:
        string playerName;
        int playerScore, compScore, totalRound;
        string ops[3] = {"Rock","Paper","Scissors"};
    public:
    //default constructore to set initial values to zero ;
        RPS(){
            playerScore = 0;
            compScore = 0;
            totalRound = 0;
        }

    //setting player name
    void set(){
        cout<<"\nEnter your name : ";
        cin>>playerName;
    }

//member function for showing menu
    void showMenu(){
        cout<<"\n\n\n:--------------:Welcome to RPS GAME:---------------:"<<endl;
        cout<<"Chooose :-------->  round left " <<totalRound<<endl ;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"| Rock -->[r] ||  Paper -->[p] ||  Scissors -->[s] |" <<endl;
        cout<<"-----------------------------------------------------"<<endl;
    }

//member function to play number of rounds user play
    void playRounds(int roundCount){
        showMenu();

        
        //computer choice random
        int compChoose = (rand() % 3) + 1;


        string playerChoose;

        cout<<"\n====================================================="<<endl;
        cout<<"Score :---> "<<playerName <<" : "<<playerScore <<" |  Computer : "<<compScore; 
        cout<<"\n====================================================="<<endl;
        
        cout<<"Enter your choice : " ;
        cin>>playerChoose;

        playerChoose = playerChoose == "r" || playerChoose == "1" ? "Rock" : playerChoose == "p" || playerChoose == "2" ? "Paper" : "Scissors";

        //display user choice and computer choice;
        
        cout<<"\n=====================================================";
        cout<<"\n\t\tCHOICES";
        if(playerChoose == "Scissors"){
            cout<<endl<<playerName <<"\t\t\t\t"<<"Computer"<<endl<<endl;
            cout<<playerChoose <<"\t\t\t" <<ops[compChoose-1];
        } else {
            cout<<endl<<playerName <<"\t\t\t\t"<<"Computer"<<endl<<endl;
            cout<<playerChoose <<"\t\t\t\t" <<ops[compChoose-1]<<endl;
            
        }
        //determine who wins the round
        string result = win(playerChoose, ops[compChoose-1]);

        if(result == "p"){
            cout<<endl<<"Result :---> "<<playerName <<" wins"<<endl;
        } else if(result == "Draw"){
            cout<<endl<<"\nResult :---> "<<result<<endl;
        } else {
            cout<<endl<<"\nResult :---> "<<result<<endl;
        }

        cout<<"-----------------------------------------------------------------------------------";
    }


//games rules | wining function | result function
    string win(string p, string c){
        if((p == "Rock" && c == "Scissors") || ( p == "Paper" && c == "Rock" ) || ( p == "Scissors" && c == "Paper" )  ){
            ++playerScore;
            return "p";
        } else if(p == c){
            return "Draw";
        } else {
            ++compScore;
            return "Computer wins";
        }
    }
    
    
    
//main game functions
    void playGame(){
        set();

        //preseding time with current time
        srand(time(0));
        
        int rounds;
        cout<<playerName<<" How many rounds you want to play ---: ";
        cin>>rounds;

        //setting rounds to total rounds 
        totalRound = rounds;
        
        if(totalRound <=0){
            cout<<"\nInvalid you atlease play 1 round : "<<endl;
            return;
        }

        //calling rounds funcitons
        for(int i=1; i<=rounds; i++){
            playRounds(i);
            totalRound--;
        }

        //declearing the final according the total score
        
        if(playerScore < compScore){
            cout<<"\n===========================";
            cout<<"\nFinal winner is : computer";
            cout<<"\n===========================";
        } else if(playerScore > compScore){
            cout<<"\n===========================";
            cout<<"\nFinal winner is : "<<playerName;
            cout<<"\n===========================";
        } else {
            cout<<"\n===========================";
            cout<<"\nMatch is DRAW" ;
            cout<<"\n===========================";
        }

    }

    
};

int main(){
    RPS game;
    game.playGame();


    return 0;
}