#include <iostream>
#include "linkedList.h"

List listAddition(List, List);

using namespace std;

int main () {

	/*
	 * Question: You have two numbers represented by a linked list, where each node contains a
	 * 			 single digit. The digits are stored in reverse order, such that the 1's digit
	 * 			 is at the head of the list. Write a function that adds the two numbers and returns
	 * 			 the sum as a linked list.
	 * 			 Example:
	 * 			 Input: (7 -> 1 -> 6) + (5 -> 9 -> 2). That is, 617 + 295.
	 * 			 Output: 2 -> 1 -> 9. That is, 912.
	 *
	 * Solution: We can solve this using normal addition. In mathematical addition, we add up the
	 * 			 two numbers up and add the carry to the next set of numbers to add. For example,
	 * 			 in the above example, we first compute 7 + 6 = 15. Then, leaving the 1, we add 6
	 * 			 to the next set of additions, making it 1 + 9 + 6. This method is convenient for
	 * 			 our approach because the linked list is already stored from the smallest power up.
	 *
	 * Complexity: O(n) by looping through the longest linked list once.
	 *
	 */

	List list1;
	//list1.push_back(8);
	list1.push_back(7);
	list1.push_back(1);
	list1.push_back(6);

	List list2;
	list2.push_back(5);
	list2.push_back(9);
	list2.push_back(2);

	//Print Data
	cout << "Input:\n";
	list1.printData();
	list2.printData();

	//List Addition
	List result;
	result = listAddition(list1, list2);

	//Result
	cout << "Output:" << endl;
	result.printData();

}

List listAddition(List list1, List list2) {
	int addition, carry = 0;
	List result;
	Node* itr1 = list1.getHead();
	Node* itr2 = list2.getHead();
	while(itr1 != NULL || itr2 != NULL) {
		if (itr1 != NULL && itr2 != NULL) {
			addition = itr1->data + itr2->data + carry;
			//cout << "Addition: " << addition << "\n";
			if (addition >= 10) {
				carry = addition / 10;
				addition = addition % 10;
			} else {
				carry = 0; //reset carry
			}
			//cout << "Addition: " << addition << ", Carry:" << carry << "\n";
			//cout << addition << " ";
			result.push_back(addition);
			itr1 = itr1->next;
			itr2 = itr2->next;
		}
		else if (itr1 != NULL && itr2 == NULL) {
			addition = itr1->data;
			//cout << addition << " ";
			result.push_back(addition);
			itr1 = itr1->next;
		}
		else if (itr1 == NULL && itr2 != NULL) {
			addition = itr2->data;
			//cout << addition << " ";
			result.push_back(addition);
			itr2 = itr2->next;
		}
	}
	cout << "\n";
	return result;
}
