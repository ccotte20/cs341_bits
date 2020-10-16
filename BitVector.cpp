// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "BitVector.h"
#include <bitset>

BitVector::BitVector()
{
	data_ = new std::vector<int>(320000, 0);
}

BitVector::~BitVector()
{
	delete data_;
}
bool BitVector::getBit(int position)
{
	int index = (position >> 5);
	int bitNumber = (position & 0x1F);
	
	return (data_->at(index) & (1 << bitNumber)) != 0;
}

void BitVector::setBit(int position)
{
	int index = (position >> 5);
	int bitNumber = (position & 0x1F);
	data_->at(index) |= (1 << bitNumber);
}

void BitVector::findDuplicates(std::vector<int> data, std::vector<int> & duplicates)
{
	for(int i = 0; i < data.size(); i++)
	{
		if(getBit(data[i]))
		{
			duplicates.push_back(data[i]);
		}
		else
			setBit(data[i]);
	}
}