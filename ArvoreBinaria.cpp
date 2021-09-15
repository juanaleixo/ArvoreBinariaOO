/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArvoreBinaria.cpp
 * Author: aluno
 * 
 * Created on 27 de Fevereiro de 2020, 20:23
 */

#include "ArvoreBinaria.h"
#include <cstdlib>
#include "iostream"
#include "No.h"
#include <stddef.h>
using namespace std;

ArvoreBinaria::ArvoreBinaria() {
    this->raiz = NULL;
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}

bool ArvoreBinaria::vazio() {
    return this->raiz == NULL;
}

void ArvoreBinaria::insere(int valor) {
    No *tmp = this->raiz;
    No *ant = NULL;

    while (tmp != NULL) {
        ant = tmp;
        if (tmp->valor < valor)
            tmp = tmp->direito;
        else
            tmp = tmp->esquerdo;
    }
    if (this->vazio()) {
        this->raiz = new No(valor);
    } else
        if (ant->valor < valor) {
        ant->direito = new No(valor);
    } else {
        ant->esquerdo = new No(valor);
    }
}

void ArvoreBinaria::emOrdem(No *inicio) {
    if (inicio != NULL) {
        this->emOrdem(inicio->esquerdo);
        //cout << inicio->valor << " "; 
        soma=soma+(inicio->valor);
        this->emOrdem(inicio->direito); 
    }
}

void ArvoreBinaria::PosOrdem(No* inicio) {
    if (inicio != NULL) {
        this->PosOrdem(inicio->esquerdo);
        this->PosOrdem(inicio->direito);
        cout << inicio->valor << " ";
    }
}

void ArvoreBinaria::PreOrdem(No* inicio) {
    soma=0;
    if (inicio != NULL) {
        cout << inicio->valor << " ";
        this->PreOrdem(inicio->esquerdo);
        this->PreOrdem(inicio->direito);

    }
}

  No* ArvoreBinaria::remover(No *raiz, int valorRem){
if(raiz == NULL)
      return NULL;
else if (raiz->valor > valorRem)
    raiz->esquerdo = remover(raiz->esquerdo, valorRem);
else if (raiz->valor < valorRem)
    raiz->direito = remover(raiz->direito, valorRem);
else {
 /* Situação 1: O nó não possui filhos = FOLHA */
    if ((raiz->esquerdo == NULL) && (raiz->direito == NULL)) {
       free (raiz);
       raiz = NULL;
    }
    /* Situação 2: O nó possui somente um filho à direita */
    else if (raiz->esquerdo == NULL) {
       No *temp = raiz;
       raiz = raiz->direito;
       free (temp);
    }
    /* Situação 3: O nó possui somente um filho à esquerda */
    else if (raiz->direito == NULL) {
       No *temp = raiz;
       raiz = raiz->esquerdo;
       free (temp);
    }
    /* Situação 4: O nó possui dois filhos */
    else {
       No *aux = raiz->esquerdo;
       while (aux->direito != NULL) {
          aux = aux->direito;
       }
       raiz->valor = aux->valor; /* troca os valores */
       aux->valor = valorRem;
       raiz->esquerdo = remover(raiz->esquerdo, valorRem);
    }
 }
return raiz;
  }



int ArvoreBinaria::Nivel(No *inicio, int valor, int nivel){
    if(!inicio)
        return -1;
    else{
        if (valor == inicio->valor)
            return nivel;
        else{
            ++nivel;
            
            if (valor < inicio->valor)
                nivel = Nivel(inicio->esquerdo, valor, nivel);
            else if (valor > inicio->valor)
                nivel = Nivel(inicio->direito, valor, nivel);
        }
        return nivel;

}
}
  
  

