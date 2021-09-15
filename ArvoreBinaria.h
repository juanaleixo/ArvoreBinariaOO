/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArvoreBinaria.h
 * Author: aluno
 *
 * Created on 27 de Fevereiro de 2020, 20:23
 */

#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include "No.h"

class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();

    No *raiz;
    void insere(int valor);
    bool vazio();
    int Nivel(No *inicio, int valor, int nivel);
    void PreOrdem(No *inicio);
    void emOrdem(No *inicio);
    void PosOrdem(No *inicio);
    No*  remover(No *raiz, int valorRem);
    int soma;
private:

};

#endif /* ARVOREBINARIA_H */

