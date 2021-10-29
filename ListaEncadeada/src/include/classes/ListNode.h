// Autor: Maicon Santos - Universidade Federal da Bahia (28/09/2021)
// Descrição: Classe para um nó de lista

#pragma once
#include<iostream>

class ListNode {
    public:
        int data;
        ListNode* next;

        ListNode();
        ListNode(int data);
        ~ListNode();
};