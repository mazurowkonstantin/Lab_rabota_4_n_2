#include <iostream>

void funct(int a, int N) {

	if (a <= N) {
		std::cout << a << std::endl;
		funct(++a, N);
	}
}

int main()
{
	int a = 1, N;
	std::cout << "Enter N: - ";
	std::cin >> N;
	funct(a, N);
	system("pause");
	return 0;
}
