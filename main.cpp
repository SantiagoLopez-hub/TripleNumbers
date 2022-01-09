#include <iostream>
#include <ctime>

using namespace std;

void PrintIntroduction(int Difficulty) {
    cout << "You are a secret agent breaking into a Level " << Difficulty;
    cout << " secure server room\nEnter the correct pattern to continue...\n\n";
}

bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);
    const int a = rand() % Difficulty + Difficulty;
    const int b = rand() % Difficulty + Difficulty;
    const int c = rand() % Difficulty + Difficulty;
    const int sum = a + b + c;
    const int product = a * b * c;
    int GuessA, GuessB, GuessC;

    cout << "\tThere are 3 numbers in the code.\n";
    cout << "\tThe sum of these 3 numbers will output: " << sum;
    cout << "\n\tThe multiplication of the same numbers will output: " << product;

    cout << "\n\nEnter your guess: ";
    cin >> GuessA >> GuessB >> GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if ((GuessSum == sum) && (GuessProduct == product)) {
        cout << "\nWell done!\n";
        return true;
    }
    else {
        cout << "\nIncorrect... Try again.\n";
        return false;
    }
}

void FinishMessage() {
    cout << "Congratulations on finishing the game!\n\n";
}

int main() {
    return 0;
}
