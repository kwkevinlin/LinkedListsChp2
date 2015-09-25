# Chapter 2 -- Linked List

This repository documents my solutions for the problems found in Cracking the Coding Interview, 5th edition. All solutions are categorized by their respective chapters, and were written using Eclipse running within a Ubuntu VM on my [Windows desktop](https://pcpartpicker.com/b/C3GXsY). *If only I could afford a Mac..*

### Format
All solutions can be found in their corresponding *main.cpp* files. All *main.cpp* files contain a set of comments that:
- Defines the problem, verbatim
- Briefs the approach in simple words
- States the complexity of the solution

**An example (Chp1 -- Q1):**
```cpp
    /*
	 * Question: Implement an algorithm to determine if a string has all unique characters.
	 * 			 What if you cannot use additional data structures?
	 *
	 * Solution: Hash character ASCII index to corresponding location in array. ie: if character = 'a',
	 * 			 'a' = 97 in ASCII, so arr[97]++;
	 * 			 If [any index] > 1, then break and cout. There is a repeat in the string.
	 *
	 * Complexity: O(n) due to the for loop
	 */
```

### Miscellaneous
If there are any problems to the solutions, please don't hesitate to let me know. If there are better approaches to the problems than what I have, please also let me know -- I am geniunely interested in hearing them out!

If you're bored, feel free to check out my blog (that I promise will try to remember to update more often!) at:  
[http://LinKevin.me](http://linkevin.me).
