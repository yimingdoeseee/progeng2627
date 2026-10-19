#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Generate and display a random starting position
    // Seed the random number generator
    std::srand(std::time(NULL));

    // Generate random coordinates from 2 to 7
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    bool win = false;
    int moves = 0;
    // Initialise the move counter
    for(; ((moves < 6)&&(win == false)); moves++){
        for(int r = 8; r > 0; r = r -1){
            // the following loop draws one row
            for(int c = 1; c < 9; c++){
                if ((c == col)&&(r == row)) {
                    std::cout << "K" << "\t";
                // there is no << std::endl
                // because we want them on the same row
                }
                else {
                    std::cout << "*" << "\t";
                }
            }

            std::cout << std::endl;
            // we go on a newline after each row
        }
        std::cout << "Knight at (" << row << ", " << col << ")" << std::endl;
        bool validmove = false;
        int nextrow, nextcol;
        while (validmove == false){
            std::cout << "Input next move in the format r c" << std::endl;
            std::cin >> nextrow >> nextcol;
            if((nextrow<9)&&(nextrow>0)&&(nextcol>0)&&(nextcol<9)){
                if ((abs(nextrow-row)==1)&&(abs(nextcol-col)==2)){
                    validmove = true;
                }
                else if ((abs(nextrow-row)==2)&&(abs(nextcol-col)==1)){
                    validmove = true;
                }
            }
            else {
                std::cout << "Invalid move, try again" << std::endl;
            }
        }
        row = nextrow;
        col = nextcol;
        if(((row==1)&&(col==1))||((row==8)&&(col==8))||((row==1)&&(col==8))||((row==8)&&(col==1))){
            win = true;
            for(int r = 8; r > 0; r = r -1){
                for(int c = 1; c < 9; c++){
                    if ((c == col)&&(r == row)) {
                        std::cout << "K" << "\t";
                    }
                    else {
                        std::cout << "*" << "\t";
                    }
                }

                std::cout << std::endl;
            }
            std::cout << "Knight at (" << row << ", " << col << ")" << std::endl;
            std::cout << "You win" << std::endl;
        }
    }
    std::cout << "Number of moves: " << moves << std::endl;
    
    // While the knight has not reached a corner square:
        // Read destination coordinates from the user
        // If the move is valid:
            // Update position, increment move counter, display new position
        // Otherwise:
            // Display invalid move message

    // Display the total number of valid moves
    // taken to reach a corner square.
}