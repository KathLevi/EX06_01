////////////////////////
//Name: Kathleen Levi
//
//Project: EX06_01 (13.1)
//
//Date: 12 June, 2015
////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    srand(time(NULL));
//create a file if it does not exist
    string filename = "Exercise13_1.txt";
    fstream iofile (filename, ios::in | ios::out);
    
    if (!iofile){
        iofile.open(filename, ios::out);
    }
    
    if (iofile.fail()){
        cout << "can't open file for writing" << endl;
        return 0;
    }
    
//if it does exist append new data to it
//write 100 integers created randomly into the file using I/O
    
    for (int i = 0; i < 100; i++){
        int j = rand() % 100;
        iofile << j << " "; //separate the integers by a space
    }
    
    iofile.close();
}