#include <vector>
#include <iostream>
int main(int argc, char const *argv[])
{
	int inta[]={5,4,0,0,7};
	std::cout<<sizeof inta<<std::endl;
	std::vector<int> vec(inta,inta+5);
	for(int a:vec){
		std::cout<<a<<std::endl;
		vec.push_back(24);
	}
	for(int a:vec){
		std::cout<<a<<std::endl;
	}
	return 0;
}