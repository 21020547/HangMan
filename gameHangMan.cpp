#include "HangManAnimation.cpp" 

const int Max_Wrong_Guess = 7 ;
const char* fileAddress = "C:\\Users\\GB Center\\Desktop\\C C++\\Game\\Hangman\\Wordlist.txt" ;

string generateSecretWord(const char* fileAddress) ;
void printAnswer(char yourGuess, string secretWord, string& guessWord, int& Wrong_Guess_Count, vector<char>& badGuess) ;
void printImage(int Wrong_Guess_Count) ;
void NTR() ;

int main() {
    srand(time(nullptr)) ;
    string secretWord, guessWord;
    vector<char> badGuess ;
    secretWord = generateSecretWord(fileAddress) ;
    guessWord = string(secretWord.size(), '-' ) ;
    int Wrong_Guess_Count = 0 ;
    char yourGuess;
    
    while (Wrong_Guess_Count < Max_Wrong_Guess) {
        cout << "Wrong Guess: " ;
        for (int i = 0 ; i < badGuess.size() ; i++) {
            cout << badGuess[i] << " " ;
        }
        cout<< endl << guessWord << endl;
        cout << "Take Your Guess: " ;
        cin >> yourGuess ;
        printAnswer(yourGuess,secretWord, guessWord, Wrong_Guess_Count, badGuess) ;
        
        printImage(Wrong_Guess_Count) ;
        if (Wrong_Guess_Count == Max_Wrong_Guess) 
        {
            cout << "Game Over!" << endl ;
            cout << "The secret word is: " << secretWord << endl ;
            this_thread::sleep_for(chrono::milliseconds(5000));
            system("cls");
            Death() ;

        }
        if (guessWord == secretWord) 
        {
            cout << "You Win!" ;
            break ;
        }
    }
}

string generateSecretWord(const char* fileAddress) {
    vector<string> s;
    string word ;
    ifstream wordFile (fileAddress) ;
    if (wordFile.is_open()) 
    {
        while (wordFile >> word) {
            s.push_back(word) ;
        }
        wordFile.close() ;
    }
    else 
    {
        cout << "Unable to open file" << endl;
        return "cock" ;
    }
    int randomNumber = rand() % (s.size()+1) ;
    return s[randomNumber] ;
}

void printAnswer(char yourGuess, string secretWord, string& guessWord, int& Wrong_Guess_Count, vector<char>& badGuess) {
    int count = 0 ;
    for (int i = 0 ; i < guessWord.size() ; i++) {
        if (yourGuess != secretWord[i]) count ++ ;
        if (yourGuess == secretWord[i]) 
        {
            guessWord[i] = yourGuess ;
        }
    }
    if (count == guessWord.size()) {
        Wrong_Guess_Count++ ;
        badGuess.push_back(yourGuess) ;
    }
}
