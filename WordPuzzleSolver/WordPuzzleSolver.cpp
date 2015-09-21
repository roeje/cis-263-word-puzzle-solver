//
// Created by Jesse on 9/18/2015.
//

#include "WordPuzzleSolver.h"
#include <iostream>
#include <iomanip>

using namespace std;


WordPuzzleSolver::WordPuzzleSolver() {
//    for (auto row = the_grid.begin(); row != the_grid.end(); ++row) {
//        for(auto col = row->begin(); col != row->end(); ++col) {
//            for(auto word = the_words.begin(); word != the_words.end(); ++word){
//                if (word->begin() == *col){
//                    check_col(row, col., word);
//                    check_row(row, col, word);
//                }
//            }
//        }
//    }
    for(auto word = the_words.begin(); word != the_words.end(); ++word) {
        for (int i = 0; i < the_grid.size(); i++) {
            for(int j = 0; j < the_grid[0].size(); j++) {
                if(word->begin() == the_grid[i][j]) {
                    auto col_check = check_col(i, j, word);
                    auto row_check = row_check(i, j, word);
                }
            }
        }
    }
}

tuple<bool, string, string> WordPuzzleSolver::check_col(int &row, int col, auto &word) {
    for (auto search = col) {

    }

}

tuple<bool, string, string> WordPuzzleSolver::check_row(int row, int &col, auto &word) {
    for() {

    }

}

WordPuzzleSolver WordPuzzleSolver::load (ifstream& input) {
    int height, width, num_words;
    input >> height >> width;

    the_grid.resize (height, vector<char>(width));

    /* the following nested loops read all the letters and place them
     * into the grid */
    for (int k = 0; k < height; k++) {
        for (int m = 0; m < width; m++) {
            /* "ws" is an I/O manipulator to skip whitespaces */
            input >> ws >> the_grid[k][m];
        }
    }

    input >> num_words;

    string w;
    for (int k = 0; k < num_words; k++)
    {
        input >> w;  /* no ws I/O manip required here */
        the_words.push_back (w);
    }

    /* You may add more code to this function */ 
}

void

void WordPuzzleSolver::solve(const string& which) {
#ifndef MUTE_ALL_DEBUGGING_OUTPUT
    // Print your DEBUGGING output to clog
    clog << "...for debugging only..." << endl;

    clog << "The board size is " 
        << the_grid.size() << "x" << the_grid[0].size() << endl;
    clog << "and " << the_words.size() << " words to search." << endl << endl;

    for (auto& me : the_words) {   // me is now a string
        clog << me << endl;
    }
#endif

    /* Java string "operator==" will be used here */
    if (which == "triple") {
        /* refer to second paragraph of page 2 in textbook */
        // Print your SOLUTION to cout
        cout << "......." << endl;
    }
    else {
        /* refer to third paragraph of page 2 in textbook */
    }
}
