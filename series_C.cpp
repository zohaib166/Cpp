/* sum of the series 1^3, 2^3, 4^3, 5^3, 6^3...n^3*/

#include <iostream>
using namespace std;
int main()
{
	int n, i=0, nt=0;
    cout << "Enter the term you want to print: ";
    cin >> n;
	while(i<n)
	{
		nt = (i+1)*(i+1)*(i+1);
		i++;
	}
	cout << nt << endl;
	return 0;
}
