#include <iostream>
using namespace std;

int main() {
	cout << "CHESSBOARD" << endl;
	cout << "          " << endl;
    // 8x8 chessboard 
    char board[8][8] = { ' ' };

    // white pieces 
    board[0][0] = board[0][7] = 'R'; 
    board[0][1] = board[0][6] = 'N'; 
    board[0][2] = board[0][5] = 'B'; 
    board[0][3] = 'Q';              
    board[0][4] = 'K';               
    for (int i = 0; i < 8; i++) {
        board[1][i] = 'P';           
    }

    // black pieces 
    board[7][0] = board[7][7] = 'R'; 
    board[7][1] = board[7][6] = 'N'; 
    board[7][2] = board[7][5] = 'B'; 
    board[7][3] = 'Q';              
    board[7][4] = 'K';               
    for (int i = 0; i < 8; i++) {
        board[6][i] = 'P';          
    }


    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            cout << board[row][col] << ' ';
        }
        cout << endl;
    }

    return 0;
}

