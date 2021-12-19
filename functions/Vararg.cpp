#include <iostream>
#include <cstdarg>
using namespace std;
float avg(int cnt, ...)
{
	va_list num_list;
	float mean = 0.0;
	int summ = 0;

	va_start(num_list, cnt);
	for (int i = 0; i < cnt; i++)
	{
		summ += va_arg(num_list, int);
	}
	mean = (float)summ / cnt;
	va_end(num_list);
	return mean;
}
int main(int argc, char *argv[])
{
	cout << avg(5, 4, 7, 8, 9, 3);
}