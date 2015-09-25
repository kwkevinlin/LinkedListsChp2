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
 * Solution:
 *
 * Complexity:
 */

	//Part 1: Using std list
	srand(time(NULL));
	list<int> stdList;

	for (int i = 0; i < 5; i++) {
		//stdList.push_back(rand() % 11);
		stdList.push_back(i);
		cout << stdList.back() << endl;
	}

	map<int, bool> container;

	for (list<int>::const_iterator ci = stdList.begin(); ci != stdList.end(); ++ci) {
		cout << *ci << " ";
	}

}
