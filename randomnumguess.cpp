#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<"Welcome to NUMBER GUESS GAME!"<<endl;
    cout<<"You have to choice a number between 1 to 100 \n"
        <<"Based on choice \n"
        <<"You will you it is Good Luck or not!"
        <<endl;
    int secret_number = 1 + (rand()%100);
    while(true){
        int playerchoice;
        cout<<"Enter Your choiced number --> ";
        cin>>playerchoice;
        if(playerchoice == secret_number){
            cout<<"Good Luck!";
            break;
        }else if(playerchoice < secret_number){
            cout<<"Your choice is too low \n"
            <<"Better luck next time!"
            <<endl;
        }else{
        cout<<"Your choice is too high \n"
            <<"Better luck next time!"
            <<endl;
        }
    }
    return 0;
}