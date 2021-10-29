// Autor: Maicon Santos - Universidade Federal da Bahia (28/09/2021)
// Descrição: Classe para um nó de lista

#include <iostream>
#include "../../include/classes/ListNode.h"
#include "../../include/data_structures/List.h"

List::List() {List(false);}

List::List(bool ordered) {
	begin = NULL;
	size = 0;
	this->ordered = ordered;
}

List::~List() {
	
}

void List::add_commom(int data) {
	if (!begin) {
		begin = new ListNode(data);
		size++;
		return;
	}

	ListNode* next = begin;
	while(next) {
		if (next->next) {
			next = next->next;
		} else {
			next->next = new ListNode(data);
			size++;
			return;
		}
	}
}

void List::add_ordered(int data) {
	if (!begin) {
		begin = new ListNode(data);
		size++;
		return;
	}

	ListNode* next = begin;
	while(next) {
		if (data > next->data && next->next) {
			next = next->next;
		} else {
			next->next = new ListNode(data);
			size++;
			return;
		}
	}
}

void List::add(int data) {
	if (ordered) add_ordered(data);
	else add_commom(data);
}

std::string List::to_string() {
	if (size==0) {
		return "[ ]";
	}

	std::string tostring = "[ "+std::to_string(begin->data);
	ListNode* next = begin->next;
	while (next) {
		tostring += ", "+std::to_string(next->data);
		next = next->next;
	}
	tostring += " ]";
	return tostring;
}

int List::find(int data) {
	int pos = 0;
	ListNode* next = begin;
	while (next) {
		if (next->data == data) return pos;
		next = next->next;
		pos++;
	}
	return -1;
}

void List::remove(int index) {
	if (index < 0 || index >= size) return;

	if (index == 0) {
		if (size > 1) {
			begin = begin->next;
		} else {
			begin = NULL;
		}
		size--;
	}

	int nextpos = 1;
	ListNode* next = begin->next;
	ListNode* actual = begin;
	while (actual) {
		if (nextpos == index) {
			if (size > nextpos) {
				actual->next = next->next;
				delete next;
			} else {
				actual = NULL;
				delete next;
			}
			size--;
		}

		if (!next) return;

		actual = next;
		next = actual->next;
		nextpos++;
	}
}

List List::listInterval(int min, int max) {
	List list;
	
	ListNode* actual = begin;
	while (actual) {
		if (actual->data >= min && actual->data <= max) {
			list.add(actual->data);
		}
		actual = actual->next;
	}

	return list;
}

ListNode* List::get(int index) {
	if (index < 0 || index >= size) return NULL;

	int pos = 0;

	ListNode* atual = begin;
	while(atual) {
		if (pos == index) return atual;
		if (atual->next) {
			atual = atual->next;
		}
		pos++;
	}

	return NULL;
}

List List::conc(List* B) {
	List list;

	ListNode* atualA = begin;
	ListNode* atualB = B->begin;

	int i = 0;
	while(atualA && atualB) {
		list.add(get(i)->data);
		list.add((*B).get(i)->data);

		atualA = atualA->next;
		atualB = atualB->next;
		i++;
	}

	return list;
}	