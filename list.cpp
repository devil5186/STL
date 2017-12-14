#include <iostream>
#include <list>
#include <ctime>
#include <cstdlib>
const int nSize = 1000000;
int main(int argc, char const *argv[])
{
	srand(time(NULL));

	std::list<int> li;
	time_t start_time=clock();
	for(int i=0;i<nSize;i++){
		li.push_back(rand());
	}
	std::cout<<"Use:"<<(clock()-start_time)*1000/CLOCKS_PER_SEC<<"mili-seconds.\n"<<li.max_size()<<std::endl;


	return 0;
}