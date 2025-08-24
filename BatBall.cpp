#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int batting();
int balling();
int compscore=0;
int userscore=0;

int main(){
    srand(time(0));
    string choice;
    cout<<"Choose Between Batting and Balling : ";
    cin>>choice;

    if(choice == "Batting" || choice == "batting"){
        batting();
        cout<<"Now Computer come for Batting"<<endl;
        balling();
    }
    else if (choice == "Balling" || choice == "balling"){
        balling();
        cout<<"Now You come for Batting"<<endl;
        batting();
    }
    else{
        cout<<"Invalid Input."<<endl;
    }

    if(userscore==compscore){
        cout<<"Match Draw."<<endl;
    }

    else if(userscore<compscore){
        int finalscore = compscore - userscore;
        cout<<"You lose! By "<<finalscore<<" runs"<<endl;
    }

    else if(userscore>compscore){
        int finalscore=userscore - compscore;
        cout<<"You Win! By "<<finalscore<<" runs"<<endl;
    }


    else{
        cout<<"Invalid Input!"<<endl ;
    }
}

int batting(){
    int user;
    int score = 0;
    bool game_over=false;
    while(!game_over){
        cout<<"Enter the Runs : ";
        cin>>user;
        int comp = rand() % 6 + 1;
        cout<<"Your runs : "<<user<<endl;
        cout<<"Computer runs : "<<comp<<endl;
        if(user<0 || user>6){
            cout<<"Invalid Input."<<endl;
        }
        else if(user == comp){
            cout<<"OUT!"<<endl;
            game_over=true;
        }
        else{
            score+=user;
            cout<<"Your current score : "<<score<<endl;
        }
    }
    cout << "Your final score : " << score << endl;
    userscore=score;
    return score;
}

int balling(){
    int user;
    int score = 0;
    bool game_over=false;
    while(!game_over){
        cout<<"Enter the Runs : ";
        cin>>user;
        int comp = rand() % 6 + 1;
        cout<<"Your runs : "<<user<<endl;
        cout<<"Computer runs : "<<comp<<endl;
        if(user<0 || user>6){
            cout<<"Invalid Input."<<endl;
        }
        else if(user == comp){
            cout<<"OUT!"<<endl;
            game_over=true;
        }
        else{
            score+=comp;
            cout<<"Computer current score : "<<score<<endl;
        }
    }
    cout << "Computer final score : " << score << endl;
    compscore=score;
    return score;
}