#include <vector>

using namespace std;

// INSERTION SORT
//------------------------------------------------------------
void insertionSort(vector <int> &v, int n) {
	int current, pos;

	for (int i = 1; i < n; i++) {
		current = v[i]; 
		pos = i; // limit of the ordered part, pos not included

		// while the elements in the ordered part are higher than the current value we make space
		while (pos > 0 && v[pos - 1] > current) {
			
			v[pos] = v[pos - 1]; 
			pos--;
		}
		if (pos != i) // if pos != i we have made space so we move the current value
			v[pos] = current; 
	}
}

