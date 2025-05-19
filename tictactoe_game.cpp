#include<iostream>
#include<vector>
using namespace std;

class TicTacToe {
private:
	vector<vector<char>>board;
	char currentPlayer;
	bool gameOver;

public:
	TicTacToe() : board(3, vector<char>(3, ' ')), currentPlayer('X'), gameOver(false){}

	void printBoard() {
		cout << "\nCurrent Board:\n";
		cout << "-------------\n";
		for (int i = 0; i < 3; i++) {
			cout << "| ";
			for (int j = 0; j < 3; j++) {
				cout << board[i][j] << " | ";
			}
			cout << "\n-------------\n";
		}
	}
	bool makeMove(int row, int col) {
		if (row < 0 || row>2 || col < 0 || col>2 || board[row][col] != ' ') {
			cout << "Invalid move! Try again.\n";
			return false;
		}
		board[row][col] = currentPlayer;
		return true;
	}
	bool checkWin() {

		for (int i = 0; i < 3; i++) {
			if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
				return true;
			if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])

				return true;
		}

		if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
			return true;
		if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
			return true;
		return false;
	}

	bool checkdraw() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (board[i][j] == ' ')return false;
			}
		}
		return true;
	}
	void switchPlayer() {
		currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	}
	void playGame() {
		cout << "TIC-TAC-TOE Game\n";
		cout << "Player 1:X | Player 2: O\n";

		while (!gameOver) {
			printBoard();
			int row, col;

			cout << "Player " << currentPlayer << ", enter your move (row 0-2 and column 0-2):";

			cin >> row >> col;

			if (makeMove(row, col)) {
				if (checkWin()) {
					printBoard();
					cout << "Player " << currentPlayer << " wins!\n";
					gameOver = true;
				}
				else if (checkdraw()) {
					printBoard();
					cout << "It's a draw!\n";
					gameOver = true;
				}
				else {
					switchPlayer();
				}
			}
		}
	}
};

int main() {
	TicTacToe game;
	game.playGame();
	return 0;
}