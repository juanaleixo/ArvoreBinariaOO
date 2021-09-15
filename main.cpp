/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 27 de Fevereiro de 2020, 20:13
 */

#include <cstdlib>
#include <iostream>
#include "ArvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//*

    ArvoreBinaria *obj1 = new ArvoreBinaria();
    
    for (int i = 1; i < 100000; i++) {
        obj1->insere(i);
    }
    

    obj1->insere(14);
    obj1->insere(2);
    obj1->insere(4);
    obj1->insere(13);
    obj1->insere(9);
    obj1->insere(10);
    obj1->insere(12);
    obj1->insere(1);
    obj1->insere(6);
    obj1->insere(5);
    obj1->insere(3);
    obj1->insere(15);
    obj1->insere(8);
    obj1->insere(7);
    obj1->insere(11);
    
//    
//    obj1->soma=0;
//    obj1->emOrdem(obj1->raiz); //
// //   cout << endl;
//    cout<<"A soma dos elementos É de: "<<obj1->soma<<endl;
// //   obj1->PreOrdem(obj1->raiz);
//  //  cout << endl;
// //   obj1->PosOrdem(obj1->raiz);
//    cout << endl;
//
//    for (int i = 100000; i < 100000; i++) {
//        cout<<"O nível do elemento"<<i<<" é de: "<<
//        obj1->Nivel(obj1->raiz,i,0)<<endl;  
//
//    }
//
//    
//    cout<<obj1->remover(obj1->raiz,3)<<endl;
// //   obj1->emOrdem(obj1->raiz); //
//    cout << endl;


    
    
    return 0;
}

