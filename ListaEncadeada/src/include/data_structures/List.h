// Autor: Maicon Santos - Universidade Federal da Bahia (28/09/2021)
// Descrição: Classe para uma lista simplesmente encadeada ordenada

#pragma once
#include <iostream>
#include "../classes/ListNode.h"

class List {
    private:
        ListNode* begin = NULL;
        bool ordered = false;

        void add_commom(int data);
        void add_ordered(int data);

    public:
        int size = 0;
        List();
        List(bool ordered);
        ~List();

        void add(int data);
        int find(int data);
        void remove(int index);
        List listInterval(int min, int max);
        std::string to_string();
        bool empty();
        void free();
        ListNode* get(int index);
        List conc(List* B); // concatena lista A e lista B de forma alternada
};