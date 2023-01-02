#include <iostream>
#include "list.h"


int main() {
	int n;
	std::cout << "Input n=";
	std::cin >> n;

	List<int> list;
	int temp;
	for (int i=0; i<n; i++) {
		std::cout << "Input list1[" << i << "]=";
		std::cin >> temp;
		list.push(temp);
	};

	int mx_value = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i == j or (list[i] >= 0) or (list[j] >= 0)) {
				continue;
			}
			if (mx_value == 0) {
				mx_value = list[i] + list[j];
			}
			if (mx_value < (list[i] + list[j])) {
				mx_value = list[i] + list[j];
			}
		}
	}
	for (int i=n-1; i >= 0; i--) {
		if (list[i] < 0) {
			list.set_value(i, mx_value);
			break;
		}
	}
	
	list.print_data();
	return 0;
};
