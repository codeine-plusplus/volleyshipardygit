#include <iostream>
#include <vector>
using namespace std;
const int edge = 10;
const char E = '-';
int main() {
	cout << "\t";
	for (int i = 65; i <= 74; i++) {
		cout << (char)i << " ";
		cout << "\t";
	}
	cout << endl;

	vector<vector<string>> grid(edge, vector<string>(edge));
	grid.resize(E);

	for (int i = 0; i < edge; i++) {
		cout << i + 1;
		for (int j = 0; j < edge; j++) {
			cout << "\t";
			cout << grid[i][j] << "_";
		}
		cout << endl;
	}
	return 0;
}

