// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include "Node.h"
#ifndef DICTIONARY_H
#define DICTIONARY_H

// Header file for Node class
class Dictionary
{
	public:
		Dictionary(int id, int data);
		virtual ~Dictionary() {}
		virtual int getData();
		virtual int getID();
		virtual void setData(int data);
		virtual void dataPlusOne();
	private:
		Node id_;
		Node data_;
	protected:
		Dictionary();
};
#endif