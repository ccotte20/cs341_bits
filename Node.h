// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef NODE_H
#define NODE_H

// Header file for Node class
class Node
{
	public:
		Node(int data);
		virtual ~Node() {}
		virtual void setData(int data);
		virtual int getData();
	private:
		int data_;
	protected:
		Node();
		
};
#endif