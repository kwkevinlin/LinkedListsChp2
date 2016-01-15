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
	first = NULL;
}

void List::push_back(int data) {
	Node* newNode = new Node(data);

	if (first == NULL) {
		first = newNode;
	} else {
		first->Node.next = newNode;
	}
}

void List::deleteMiddle(Node*) {

}
