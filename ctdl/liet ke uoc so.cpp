#include <bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
	vector<int> v;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i)
				printf("%d ", i);
			else {
				//printf("%d ", i);
				//v.push_back(n / i);
			}
		}
	}
	//for (int i = v.size() - 1; i >= 0; i--)
	//	printf("%d ", v[i]);
}

/* Driver program to test above function */
int main()
{
	printf("The divisors of 100 are: \n");
	printDivisors(100);
	return 0;
}

