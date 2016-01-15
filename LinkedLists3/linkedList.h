/*
 * Node and List class interface defined together in linkedList.h for simplicity.
 * Non-templated (explicit type)
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct Node {

		Node();
		Node(int);
//		int getData() { return data; };
//		void setNext(Node* newNode) { next = newNode; };

		int data;
		Node* next;
};

class List {

	public:
		List();
		void push_back(int);
		void deleteMiddle(Node*);
	private:
		Node* head;
};

#endif /* LINKEDLIST_H_ */

