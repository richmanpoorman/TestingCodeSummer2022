/*
 * Node.cpp
 *
 * Functionality of each node of the test Machine Learning
 */

#include "Node.h"
#include <iostream>

using namespace std;

// Constructors
/*
 *       Name: Node()
 * Parameters: None
 *    Purpose: Default constructor
 *       Note: Sets all of the values to 0
 */
Node::Node() {
    setA(0);
    setB(0);
    setC(0);
}

/*
 *       Name: Node(float a, float b, float c)
 * Parameters: "a" value (float); "b" values (float); "c" value (float)
 *    Purpose: Regular Constructor
 */
Node::Node(float a, float b, float c) {
    setA(a);
    setB(b);
    setC(c);
}

// Methods
Node *Node::getNeighbors() { return neighbors; }

// Setters
/*
 *       Name: setA(float x)
 * Parameters: The value to set "a" to (float)
 *    Returns: None
 *    Purpose: Setter for the "a" component of the node
 *       Note: 
 */
void Node::setA(float x) { a = x; }
/*
 *       Name: setB(float x)
 * Parameters: The value to set "b" to (float)
 *    Returns: None
 *    Purpose: Setter for the "b" component of the node
 *       Note: 
 */
void Node::setB(float x) { b = x; }
/*
 *       Name: setC(float x)
 * Parameters: The value to set "c" to (float)
 *    Returns: None
 *    Purpose: Setter for the "c" component of the node
 *       Note: 
 */
void Node::setC(float x) { c = x; }

// Getters
/*
 *       Name: getA()
 * Parameters: None
 *    Returns: The value for the "a" component of the node (float)
 *    Purpose: Getter for the "a" component of the node
 *       Note: 
 */
float Node::getA() { return a; }
/*
 *       Name: getB()
 * Parameters: None
 *    Returns: The value for the "b" component of the node (float)
 *    Purpose: Getter for the "b" component of the node
 *       Note: 
 */
float Node::getB() { return b; }
/*
 *       Name: getC()
 * Parameters: None
 *    Returns: The value for the "c" component of the node (float)
 *    Purpose: Getter for the "c" component of the node
 *       Note: 
 */
float Node::getC() { return c; }