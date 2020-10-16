// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include <vector>
#ifndef BITVECTOR_H
#define BITVECTOR_H

// Header file for Node class
class BitVector
{
	public:
		BitVector();
		virtual ~BitVector();
		void setData(std::vector<int> & data);
		bool getBit(int position);
		void setBit(int position);
		void findDuplicates(std::vector<int> data, std::vector<int> & duplicates);
	private:
		std::vector<int> * data_;
};
#endif