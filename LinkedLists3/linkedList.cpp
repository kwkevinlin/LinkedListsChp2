/*
 * Node and List class defined together in linkedList.cpp for simplicity.
 */

#include "linkedList.h"
#include <stdlib.h>

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
			if (itr->next == NULL)
				itr->next = newNode;
			else
				itr = itr->next; //Increment itr to next node
		}
	}
}

void List::deleteMiddle(Node*) {

}
