/*
 * Node and List class interface defined together in linkedList.h.
 * List is non-templated (explicit type)
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct Node {

		Node();
		Node(int);

		int data;
		Node* next;
};

class List {

	public:
		List();
		Node* getHead() {return head;};
		void push_back(int);
		void deleteMiddle(Node*);
		void printData();
	private:
		Node* head;
};

#endif /* LINKEDLIST_H_ */

