#include<Check_state.h>
#include<string>


int winn( int board[9], int p) {

    unsigned wins[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    int i;
    for(i = 0; i < 8; ++i) {
        if(board[wins[i][0]] != 0 &&
           board[wins[i][0]] == board[wins[i][1]] &&
           board[wins[i][0]] == board[wins[i][2]])
            return p*board[wins[i][2]];
    }
    return 0;
}

int Check_state(int board[9], int p){
    
    string n1;
    string n2;
    string n3;

switch(winn(board, p)) {
        case 0:
            printf("Its a Draw");
            n1 = "Its a Draw";
            return n1;
            break;
        case 1:
            Draw_board(board);
            printf("User lose, computer wins!!");
            return 'User lose, computer wins!!';
            break;
        case -1:
            printf("User Wins!!");
            return 'User Wins!!';
            break;
    }
    }
