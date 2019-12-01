//
// Created by Alejandro  Otero on 2019-11-28.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "matriz.h"

using namespace std;

template <class T>
void leer(ifstream &file){
    string mat1;
    string mat2;
    string f;
    string c;
    int i=0;
    vector<vector<T>> m1;
    vector<vector<T>> m2;
    getline(file,f,' ');
    getline(file,c,'\n');
    while(file.is_open()){
        for(int j=0; j<stoi(f); j++){
            for(int k=0; k<stoi(c); k++){

            }
        }
        getline(file,mat1,'\n');
        getline(file,mat2,'\n');
        m1[i].emplace_back(mat1);
        m2[i].emplace_back(mat2);
        i++;
    }
    file.close();
    matriz <T>A(m1);
    matriz <T>B(m2);
}