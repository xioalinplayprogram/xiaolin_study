#include<iostream>

#include<string>

#include<vector>

int main()
{
	std::vector<std::string> class_name = {"张三", "李四", "王二"};


	for (auto& name : class_name)
	{
		std::cout << name << " ";
	}
	return 0;
}
