/* sum of the series 1x2x3, 4x5x6, 7x8x9,...n
*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the term you want to print: ";
    cin >> n;
	int i=0,j=0;
	int nt=0;
	while(i<n)
	{
		nt = (j+1) * (j+2) * (j+3);
		j+=3;
		i++;
	}

	cout << nt << endl;
	return 0;
}
