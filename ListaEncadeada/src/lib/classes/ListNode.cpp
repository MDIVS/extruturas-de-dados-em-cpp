// Autor: Maicon Santos - Universidade Federal da Bahia (28/09/2021)
// Descrição: Classe para um nó de lista

#include<iostream>
#include "../../include/classes/ListNode.h"

ListNode::ListNode() { 
	data = 0;
	next = NULL;
}


// ******************************************************
// ***
// ******************************************************
ListNode::ListNode(int dado) {
	this->data = dado;
	this->next = NULL;
}

// ******************************************************
// ***
// ******************************************************
ListNode::~ListNode() {

}