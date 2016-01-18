/*
 * Node and List class defined together in linkedList.cpp for simplicity.
 */

#include <stdlib.h>
#include <iostream>
#include "linkedList.h"

Node::Node() {
	data = -1;
	next = NULL;
}

Node::Node(int i) {
	data = i;
	next = NULL;
}

List::List() {
	head = NULL;
}

void List::push_back(int data) {
	Node* newNode = new Node(data);

	if (head == NULL) { //New list, set head = newly created node with data
		head = newNode;
	} else { //Find last node and change next = newNode
		Node* itr = head;
		while(itr != NULL) { //While there are still nodes
			if (itr->next == NULL) {
				itr->next = newNode;
				//std::cout << "Added to " << itr->data << "'s next\n";
				break;
			}
			else {
				//std::cout << "\tGoing from: " << itr->data << "->" << itr->next->data << "\n";
				itr = itr->next;
			}
		}
	}
}

void List::deleteMiddle(Node*) {

}

void List::printData() {
	Node* itr = head;
	while (itr != NULL) {
		std::cout << itr->data << std::endl;
		itr = itr->next;
	}
}
