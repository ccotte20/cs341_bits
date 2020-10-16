// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Dictionary.h"

Dictionary::Dictionary(int id, int data) : id_(id), data_(data)
{
	
}

Dictionary::Dictionary() : id_(-1), data_(-1)
{
	
}
int Dictionary::getData()
{
	return data_.getData();
}

int Dictionary::getID()
{
	return id_.getData();
}

void Dictionary::setData(int data)
{
	data_.setData(data);
}

void Dictionary::dataPlusOne()
{
	data_.setData(data_.getData()+1);
}