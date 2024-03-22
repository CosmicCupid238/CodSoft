#include<iostream>
#include<cstdlib>
using namespace std;

void draw_board(char board[][3]){
    cout<<"----------\n";
    for(int i=0; i<3; i++){
        cout<<"| ";
        for(int j=0; j<3; j++){
            cout<<board[i][j]<<"| ";
        }
        cout<<"\n----------\n";
    }
}

bool win_checker(char board[][3], char player){
    for(int i=0; i<3; i++){
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if(board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
  return false;
}

void tic_tac(char board[][3], char player, int row, int col){
    int turn = 0;
    for(; turn < 9; turn++){
    draw_board(board);
    while(true){
        cout<<"This is "<<player<<"'s turn"<<endl;
        cout<<"Please enter row & column is b/w (0-2)";
        cin>>row>>col;
        if(board[row][col] !=' ' || row<0 || row>2 || col<0 || col>2){
            cout<<"Invalid Turn"<<endl;
        }else{
            break;
        }
    }
    
    board[row][col] = player;
    if(win_checker(board, player)){
        draw_board(board);
        cout<<"The winner is player "<<player;
        break;
    }

    if(player == 'X'){
       player = 'O';  
    }else{
       player = 'X';
    }
  }
  draw_board(board); 
  
    if (turn == 9 && !win_checker(board, 'X') 
        && !win_checker(board, 'O')) { 
        cout << "It's a draw!\n"; 
    } 
}
int main()
{
  char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
  };
  
  char player = 'X';
  int row, col;
  cout<<"*****Welcome to Tic-Tac-Toe game*****"<<endl;
  tic_tac(board, player, row, col);
  
  cout<<"Do you want to play Again (Y/N)"<<endl;
  char ch;
  cin>>ch;
  switch(ch){
    case 'Y':
        tic_tac(board, player, row, col);
        break;
    case 'N':
        cout<<"Good bye! Have a good day";
        break;
    default :
        cout<<"Invalid entry";
        break;   
  }
  return 0;
}