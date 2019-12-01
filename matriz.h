//
// Created by Alejandro  Otero on 2019-11-28.
//

#ifndef PD4_MATRIZ_H
#define PD4_MATRIZ_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class matriz {
    vector<vector<T>> mat;
public:
    matriz();
    T verify();
    void multiplicacion();

    matriz& operator*(const vector<vector<T>> &m1, const vector<vector<T>> &m2){
        vector<vector<T>> result;
        auto a=m1.mat*m2.mat;
        return a;
    };

    T getmat(){
        return mat;
    };

};


#endif //PD4_MATRIZ_H
