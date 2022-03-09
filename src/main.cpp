#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string games;
	cin >> games;

	auto an = int{ 0 };
	auto da = int{ 0 };
	for (int i = 0; i < n; ++i) {
		if ('A' == games[i]) {
			++an;
		}
		else if ('D' == games[i]) {
			++da;
		}
	}

	if (an < da) {
		cout << "Danik";
	}
	else if (da < an) {
		cout << "Anton";
	}
	else {
		cout << "Friendship";
	}

	return 0;
}