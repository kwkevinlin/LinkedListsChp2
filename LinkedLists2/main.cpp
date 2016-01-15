#include <iostream>
#include <list>

using namespace std;

int main () {

	/*
	 * Question: Implement an algorithm to find the kth to last element of a singly linked list.
	 *
	 * Solution: Traverse the linked list from the beginning, and use int i to track which index
	 * 			 you are on. If i = index (which is size() - k), cout, then break. Else, i++
	 *
	 * Complexity: O(n) for the one loop
	 *
	 */

	list<int> stdList;
	stdList.push_back(5); //0
	stdList.push_back(2); //1
	stdList.push_back(4); //2
	stdList.push_back(7); //3
	stdList.push_back(8); //4
	stdList.push_back(5); //5

	//Input 'k' element here
	int k = 2;
	int i = 0;
	int index = stdList.size() - k;

	for (list<int>::const_iterator itr = stdList.begin(); itr != stdList.end(); ++itr) {
		if (i == index) {
			cout << *itr << endl;
			break;
		}
		else
			i++;
	}


}
