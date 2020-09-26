// graph.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
	// a -> b -> c
	Node c = Node("c", NULL);
	Node b = Node("b", &c);
	Node a = Node("a", &b);

	Node* n = &a;

	while (n != NULL)
	{
		std::cout << n->value << std::endl;
		n = n->next;
	}

	return 0;
}
