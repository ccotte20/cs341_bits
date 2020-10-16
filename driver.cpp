// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "BitVector.h"
#include "Dictionary.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
int main()
{
	// Get the file name for input
	std::string inputFile;
	std::cout<<"Enter input file name"<<std::endl;
	std::cin>>inputFile;
	
	//open file, check for errors
	std::ifstream inStream;
	inStream.open(inputFile.c_str());
	if(inStream.fail())
	{
		std::cout<<"Input file opening failed" << std::endl;
		exit(1);
	}
	
	//fill Doubly linked list
	int inputInt(0);
	std::vector<int> data;
	while(inStream>>inputInt)
	{
		data.push_back(inputInt);
	}
	inStream.close();
	
	std::vector<int> duplicates;
	
	BitVector * bv = new BitVector();
	
	bv->findDuplicates(data, duplicates);
	
	std::vector<Dictionary> dict;
	for (int i=0; i<duplicates.size(); i++)
	{
		bool exists = false;
		for (int x=0; x<dict.size(); x++)
		{
			if(dict[x].getID() == duplicates[i])
			{
				dict[x].dataPlusOne();
				exists=true;
			}
		}
		if(exists!=true)
		{
			Dictionary d(duplicates[i], 2);
			dict.push_back(d);
		}
	}
	
	bool done;
	done=false;
	while(!done)
	{
		done=true;
		for(int i=0; i+1<dict.size(); i++)
		{
			if(dict[i].getData()<dict[i+1].getData())
			{
				Dictionary temp(dict[i].getID(), dict[i].getData());
				dict[i]=dict[i+1];
				dict[i+1]=temp;
				done=false;
			}
		}
	}
	
	std::ofstream outStream;
	// Open file, check for errors
	outStream.open("duplicates.txt");
	if(outStream.fail())
	{
		std::cout<<"Output file opening failed" << std::endl;
		exit(1);
	}
	
	for(int i=0; i<dict.size(); i++)
	{
		outStream<<dict[i].getID()<<" "<<dict[i].getData()<<"\n";
	}
	
	delete bv;
	
	return 0;
}