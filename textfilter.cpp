//author 2133521
//2016-12-10
//把文件中每行少于8个字符的行过滤掉，本例子写出来用来过滤wifi密码字典中密码少于8位的密码

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main(int argc,char* argv[])
{
	if(argc<2)
		std::cout<<"usage:"<<argv[0]<<"sourcefile distinationfile"<<std::endl;
	std::ifstream in(argv[1]);
	std::ofstream out(argv[2]);
	if(!in.is_open())
	{
		std::cout<<"sourcefile not found!"<<std::endl;
		exit(1);
	}

	std::string str;
	while(getline(in,str))
	{
		if(str.size()>=8)
		{
			out<<str;
			out<<std::endl;
		}
		str="";
	}
	return 0;
}
