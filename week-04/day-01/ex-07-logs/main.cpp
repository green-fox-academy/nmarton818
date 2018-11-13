#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

std::vector<std::string> uniqueIPs(std::string fromThis, float& ratio){
    std::ifstream myFile;
    std::vector<std::string> IPs;
    myFile.open(fromThis);
    std::string garbage;
    std::string IP;
    std::string GP;
    float G = 0;
    float P = 0;
    try{
        if(myFile.is_open()){
            while(getline(myFile, garbage)){
                myFile >> garbage >> garbage >> garbage >> garbage >> garbage >> IP >> GP;
                if(GP == "GET")
                    G++;
                else if(GP == "POST")
                    P++;
                if(std::find(IPs.begin(), IPs.end(), IP) == IPs.end()){
                    IPs.push_back(IP);
                    std::cout << IP << std::endl;
                }
            }
        } else
            throw -1;
    } catch (int e){
        std::cerr << "Error opening files!" << std::endl;
    }
    ratio = G/P;
    std::cout << ratio << std::endl;
    myFile.close();
    return IPs;
}

int main() {
    // Read all data from 'log.txt'.
  // Each line represents a log message from a web server
  // Write a function that returns an array with the unique IP adresses.
  // Write a function that returns the GET / POST request ratio.
  float r = 1.0;
  std::vector<std::string> ip = uniqueIPs("log.txt", r);



    return 0;
}