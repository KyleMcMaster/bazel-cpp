// graph.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class Node
{
public:
	Node(std::string v, Node* n);
	~Node();
	std::string value;
	Node* next;

private:

};

Node::Node(std::string v, Node* n)
{
	value = v;
	next = n;
}

Node::~Node()
{
}

