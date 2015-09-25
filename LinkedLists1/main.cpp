#include <iostream>
#include <stdio.h>
#include <list>
#include <map>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
	/*
	 * Question: Write code to remove duplicates from an unsorted linked list.
	 *
	 * Solution: Using a map as a hash table, if data (int) seen for first time, mark map<data, bool>
	 * 			 as true. Else, if map[data] already seen before (when map[data] == true), then remove
	 * 			 data from list as that is duplicate.
	 * 			 Removing is done via erase(). However, remove_if and unique(), as well as others could
	 * 			 also be used.
	 * 			 List elements are populated randomly for fun. :)
	 *
	 * Complexity: O(n) for iterating once.
	 */

	list<int> stdList;
	map<int, bool> container; //Could use array hash instead, but for practice

	//Setting up test List
	srand(time(NULL));
	for (int i = 0; i < 7; i++) {
		stdList.push_back(rand() % 6);
	}

	/* Another (new, c++11) way of iterating data structures
	   Not needed, but using for practice
	 */
	cout << "Initial input\n";
	for (const auto & itr: stdList) {
		cout << itr << " ";
	}
	cout << endl << endl;

	/* Remove() will invalidate any iterators that are pointing at the removed elements.
	   Erase() returns an iterator which is at the next valid position.
	*/
	for (list<int>::iterator ci = stdList.begin(); ci != stdList.end(); ++ci) {
		cout << *ci;
		if (container[*ci] == true) {
			cout << " (Deleted)";
			ci = stdList.erase(ci);
			//Using erase in a loop will skip next element as iterator automatically incremented
			ci--;
			//Better way would probably to be use remove_if. I believe this problem might be eliminated then
		} else
			container[*ci] = true;
		cout << endl;
	}

	cout << "\nFinal list:\n";
	for (const auto & itr: stdList) {
		cout << itr << " ";
	}
}
