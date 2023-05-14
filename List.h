#pragma once
#include "Node.h"

class List
{
public:
	List();
	List(Node* first, Node* last);
	~List();
	int isEmpty();
	void addNode(Node node, int n);
	void printNode(List list);
	void deleteNodeAtPosN(List list, int n);
	void deleteNodesLess(List list, int n);
	void calcMean(List list);
	Node* getFirst();
	Node* getLast();
private:
	Node* first;
	Node* last;
};

