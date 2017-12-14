#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
const int nSize = 1000000;
int main(int argc, char const *argv[])
{
	srand(time(NULL));

	clock_t star_tim=clock();
	std::array<int,nSize> arr;
	for (int i = 0; i < nSize; ++i)
	{
		arr[i]=rand();
	}
	std::cout<<"Use:"<<(clock()-star_tim)*1000/CLOCKS_PER_SEC<<"mili-seconds.\n";
	return 0;
}