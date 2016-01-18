#include <iostream>
#include "linkedList.h"

using namespace std;

int main () {

	/*
	 * Question: Implement an algorithm to delete the node in the middle of a singly linked list,
	 * 			 given only access to that node.
	 * 			 Example:
	 * 			 Input: Node c from list: a->b->c->d->e
	 * 			 Result: a->b->d->e
	 *
	 * Solution: Copy next node to current node, then delete next node. So the previous node will
	 * 			 now link to the current node, which now consists of data from the next node,
	 * 			 implicitly removing the current node.
	 *
	 * Complexity: O(n) for iterating through the list to find the input node.
	 *
	 */

	List list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	//Print Data
	cout << "Initial:\n";
	list.printData();

	//The given/input node to remove
	Node* deleteNode = new Node(3);	//Why can't Node* deleteNode(3)?

	//Remove from middle
	list.deleteMiddle(deleteNode);

	//Result
	cout << "Final:" << endl;
	list.printData();

}
