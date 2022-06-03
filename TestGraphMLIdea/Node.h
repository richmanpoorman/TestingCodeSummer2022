/*
 * Node.h
 *
 * Node of the machine learning network
 */

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        /* CONSTRUCTORS */
        // Default Constructor
        Node();
        // setting the values of a, b, c
        Node(float a, float b, float c);

        Node *getNeighbors();

        // Getters
        float getA();
        float getB();
        float getC();

        // Setters
        void setA(float x);
        void setB(float x);
        void setC(float x);
    
    private:
        float a, b, c;
        Node *neighbors;
};

#endif