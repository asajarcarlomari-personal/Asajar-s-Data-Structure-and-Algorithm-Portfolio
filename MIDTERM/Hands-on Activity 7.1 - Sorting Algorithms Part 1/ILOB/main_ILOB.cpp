#include <iostream>
#include <cstdlib>
#include <ctime>
#include "votingSort.h"

const int maxSize = 100;

int main() {

    // Create an array with 100 unsorted votes
    int unsortedArr[maxSize];

    // Use time(0) as seed for random values
    srand(time(0));

    // Populate the array with random votes from 1 to 5
    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand() % 5 + 1;
    }

    // Display the original list of votes
    std::cout << "\nOriginal List of Votes:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    displayArr(unsortedArr, maxSize);

    // Sort the votes using Bubble Sort
    std::cout << "\nSorted List of Votes:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    bubbleSort(unsortedArr, maxSize);
    displayArr(unsortedArr, maxSize);

    // Count the votes for each candidate
    int vote1 = countVotes(unsortedArr, maxSize, 1);
    int vote2 = countVotes(unsortedArr, maxSize, 2);
    int vote3 = countVotes(unsortedArr, maxSize, 3);
    int vote4 = countVotes(unsortedArr, maxSize, 4);
    int vote5 = countVotes(unsortedArr, maxSize, 5);

    // Display the vote count for each candidate
    std::cout << "\nVote Count:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Candidate 1: " << vote1 << std::endl;
    std::cout << "Candidate 2: " << vote2 << std::endl;
    std::cout << "Candidate 3: " << vote3 << std::endl;
    std::cout << "Candidate 4: " << vote4 << std::endl;
    std::cout << "Candidate 5: " << vote5 << std::endl;

    // Set the first candidate as the current highest
    int highest = vote1;
    int winner = 1;

    // Check if Candidate 2 has more votes
    if (vote2 > highest) {
        highest = vote2;
        winner = 2;
    }

    // Check if Candidate 3 has more votes
    if (vote3 > highest) {
        highest = vote3;
        winner = 3;
    }

    // Check if Candidate 4 has more votes
    if (vote4 > highest) {
        highest = vote4;
        winner = 4;
    }

    // Check if Candidate 5 has more votes
    if (vote5 > highest) {
        highest = vote5;
        winner = 5;
    }

    // Display the winning candidate
    std::cout << "\nWinning Candidate:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    if (winner == 1) {
        std::cout << "Candidate 1 - Bo Dalton Capistrano" << std::endl;
    }
    else if (winner == 2) {
        std::cout << "Candidate 2 - Cornelius Raymon Agustín" << std::endl;
    }
    else if (winner == 3) {
        std::cout << "Candidate 3 - Deja Jayla Bañaga" << std::endl;
    }
    else if (winner == 4) {
        std::cout << "Candidate 4 - Lalla Brielle Yabut" << std::endl;
    }
    else if (winner == 5) {
        std::cout << "Candidate 5 - Franklin Relano Castro" << std::endl;
    }
    std::cout << "Number of Votes: " << highest << std::endl << std::endl;

    return 0;
}