/* sum of the series 1x2, 2x3, 3x4, 4x5, .....n*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the term you want to print: ";
    cin >> n;
	int i=0;
	int nt=0;
	while(i<n)
	{
		nt = (i+1) * (i+2);
		i++;
	}

	cout << nt << endl;
	return 0;
}
