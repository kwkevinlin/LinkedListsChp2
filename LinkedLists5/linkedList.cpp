/*
 * Node and List class defined together in linkedList.cpp.
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

List::~List() {
	//delete nodes by iterating
	//destructor auto called when out of scope
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
				/*
				 * Note to self:
				 * A break is required here because: 1. At the last element (above if statement),
				 * we set itr->next = newNode. 2. Now since itr->next = newNode, next while loop
				 * will return itr != NULL, and go to else (since itr->next is NOT null, but is newNode
				 * instead). So we loop back to the first if statement as newNode. Now, itr->next = newNode,
				 * forming a loop with itself. Thus, all future loops (infinite) will all go to the else
				 * statement, since itr->next is always NOT null (since itr->next is itself, not a null).
				 */
			}
			else {
				//std::cout << "\tGoing from: " << itr->data << "->" << itr->next->data << "\n";
				itr = itr->next;
			}
		}
	}
}

/* Finds given node in list, then replace current values (data, next) with next node's. */
void List::deleteMiddle(Node* toDelete) {
	Node* itr = head;
	while (itr != NULL) {
		if (itr->data == toDelete->data && itr->next != NULL) { //Second condition prevents accessing out-of-bound
			std::cout << "Found node: " << itr->data << "\n";
			Node* temp = itr->next;
			itr->data = temp->data;
			itr->next = temp->next;
			delete temp;
		} else {
			itr = itr->next;
		}
	}
}

void List::printData() {
	Node* itr = head;
	while (itr != NULL) {
		std::cout << itr->data << " ";
		itr = itr->next;
	}
	std::cout << "\n";
}
