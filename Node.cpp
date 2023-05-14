#include "Node.h"

Node::Node() : info(-1), next(nullptr)
{
}

Node::Node(int info, Node* next) : info(info), next(next)
{
}

Node::~Node()
{
}

int Node::getInfo()
{
	return info;
}

void Node::setInfo(int info)
{
	this->info = info;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* next)
{
	this->next = next;
}
