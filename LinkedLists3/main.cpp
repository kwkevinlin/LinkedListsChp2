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
	 * Complexity:
	 *
	 */

	List list;
	list.push_back(5);
	list.push_back(3);

	cout << "PrintData" << endl;
	list.printData();

}
