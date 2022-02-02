/*
* Hangman in C++
* Using the Facade Design Pattern
* Author: Anthony Narlock
*/
#include <iostream>
#include <string>

/*
* State Class
*/
class State {
private:
    int currentState;
    int lives;
public:
    State(int initState) {
        this->currentState = initState;
        this->lives = 6;
    }

    void decrementLives() {
        this->lives = this->lives - 1;
    }
    void setCurrentState(int newState) {
        this->currentState = newState;
    }
    int getCurrentState() {
        return this->currentState;
    }

};

/*
* Words Class
*/
class Words {
private:
    int difficulty;
    std::string wordList[50];
    void setWords(int difficulty) {
        if(difficulty == 1) {
            wordList[0] = "apple";
        }
        if(difficulty == 2) {
            wordList[0] = "pineapple";
        }
        if(difficulty == 3) {
            wordList[0] = "pouroumaeggplant"
        }
    }
public:
    Words() {}

    Words(int difficulty) {
        setWords(difficulty);
    }
    void getDifficulty() {
        bool valid = true;
        std::cin >> this->difficulty;
        if(this->difficulty == 1 || this->difficulty == 2 || this->difficulty == 3) {
            valid = false;
        }
        while(valid) {
            std::cout << "Invalid difficulty id: " << this->difficulty << " yeilding " <<  (this->difficulty == 1) << " please re-enter: ";
            std::cin >> this->difficulty;
            if(this->difficulty == 1 || this->difficulty == 2 || this->difficulty == 3) {
                valid = false;
            }
        }
        setWords(this->difficulty);
    }

    int getDiff() {
        return this->difficulty;
    }

    std::string getWord(int index) {
        return wordList[index];
    }
};

/*
* Output class
*/
class Output {
private:
    std::string messages[9] = 
    { "Welcome to C++ Hangman\nCreated by: Anthony Narlock\n==========",
    "Please select word length: \nType 1 3-5 letter words\nType 2 for 6-9 letter words\nType 3 10+ letter words",
    "You already guessed that letter!",
    "Incorrect guess!",
    "You win!",
    "You lose...",
    "Would you like to play again? [Y/N]",
    "Would you like to change difficulty? [Y/N]",
    "Press ENTER to play!"
    };

    std::string outs[7] = 
    {"   +---+\n   |   |\n       |\n       |\n       |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n       |\n       |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n   |   |\n       |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n  /|   |\n       |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n  /|\\  |\n       |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n  /|\\  |\n  /    |\n       |\n       |\n==========",
    "   +---+\n   |   |\n   O   |\n  /|\\  |\n  /\\   |\n       |\n       |\n=========="};

public:
    Output() {}
    void getManOutput(int id) {
        std::cout << this->outs[id] << std::endl;
    }
    void getMessage(int id) {
        std::cout << this->messages[id] << std::endl;
    }
};

/*
* Game Class - Facade
*/
class Game {
private:
    Words *words;
    Output *output;
    State *state;
public:
    //Facade Constructor
    Game() {
        this->state = new State(0);
        this->output = new Output;
        this->words = new Words;
    }

    //Facade Destructor
    ~Game() {
        delete words;
        delete output;
        delete state;
    }
    
    void startGame() {
        //Welcome message, start game!
        output->getMessage(0);
        output->getMessage(8);

        //Waits for user to hit enter, then starts the game
        std::string startStatus;
        std::getline(std::cin,startStatus);
        std::system("clear");

        //Prompt user to select word length
        output->getMessage(1);
        words->getDifficulty();

        
    }
};


/*
* Main Function
*/
int main() {
    Game *game = new Game;
    game->startGame();
}
