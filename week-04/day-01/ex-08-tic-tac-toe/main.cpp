#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

bool isWinning(std::string winning, std::string current){
    return (winning == current);
}

std::string assembleLines(const std::vector<std::string>& tictac, int row){
    std::string line;
    for(int i = 0; i < tictac.size(); i++){
        line[i] = tictac[row][i];
    }
    return line;
}

std::string winningComb(int size, char c){
    std::string winning;
    for(int i = 0; i < size; i++)
        winning[i] = c;
    return winning;
}

bool assembleCross(const std::vector<std::string>& tictac, bool inc, std::string winning){
    std::string line;
    for(int i = 0; i < tictac.size(); i++) {
        if(inc){
        line[i] = tictac[i][i];
    }else
        line[i] = tictac[i][tictac.size()-i-1];
    }
    return (winning == line);
}

std::string ticTacResult(std::string fileName){
    std::ifstream FILE;
    std::vector<std::string> tictac;
    std::string line;
    FILE.open(fileName);
    try{
        if(FILE.is_open()){
            while(getline(FILE, line)){
                tictac.push_back(line);
            } FILE.close();


            std::string winX = winningComb(tictac.size(), 'X');
            std::string winO = winningComb(tictac.size(), 'O');
           // std::cout << winX << std::endl;
            //std::cout << winO << std::endl;

            if(std::find(tictac.begin(), tictac.end(), winX) != tictac.end())
                return "X";
            else if(std::find(tictac.begin(), tictac.end(), winO) != tictac.end())
                return "O";



            for(int i = 0; i < tictac.size(); i++){
                if(isWinning(winX,(assembleLines(tictac,i))))
                    return "X";
                if(isWinning(winO,(assembleLines(tictac,i))))
                    return "O";
            }

            if(assembleCross(tictac, true, winX) || assembleCross(tictac, false, winX))
                return "X";
            else if(assembleCross(tictac, true, winO) || assembleCross(tictac, false, winO))
                return "O";


        } else
            throw -1;
    }
    catch(int e) {
        std::cerr << "Error opening file!";
        return "ERROR!";
    }

    return "draw";
}

int main() {

    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("win-o.txt");
    // should print O

    std::cout << ticTacResult("win-x.txt");
    // should print X

    std::cout << ticTacResult("draw.txt");
    // should print draw


    return 0;
}