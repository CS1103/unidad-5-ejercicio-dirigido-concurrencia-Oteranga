//
// Created by Alejandro  Otero on 2019-11-28.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void leer(ifstream &file){
    string mat1;
    string mat2;
    vector<vector<string>> m1;
    vector<vector<string>> m2;
    while(file.is_open()){
        getline(file,mat1,'\n');
        getline(file,mat2,'\n');
    }

    file.close();

}