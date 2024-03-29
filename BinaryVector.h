/* 
 * File:   BinaryVector.h
 * Author: honza
 *
 * Created on 7. říjen 2012, 15:54
 */

#ifndef BINARYVECTOR_H
#define	BINARYVECTOR_H

#include "BinaryVector.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class BinaryVector {
public:
    BinaryVector(); 
    BinaryVector(int width, int height); 
    BinaryVector(bool* array,int width, int height);
    BinaryVector(BinaryVector* orig);
    
    virtual ~BinaryVector();
    void printVector();
    void nextIteration();
    void iterateForQTimes(int q);
    
    static int hammingActualArrayDistance(BinaryVector* first,BinaryVector* second);
    static int hammingStartArrayWeight(BinaryVector* vector);
    static bool equals(BinaryVector* first,BinaryVector* second);
    static bool* copyArray(bool* b,int size);
    
    
    //after test should be private
    void writeNewValueOfCellToNextIteration(int index,int liveNeigbhours);
    int getCountOfAliveNeighbours(int index);
    
    //GETTERS AND SETTERS------------------------------
    bool* getActualArray();
    bool* getNewArray();
    bool* getStartConfiguration();
    int getSize();
    
    
    bool* isStartConfiguration() const {
        return startConfiguration;
    }
    
private:
    int width, height;
    int size;
    bool* startConfiguration;
    bool* actualArray;
    bool* newArray;     
    
    
};

#endif	/* BINARYVECTOR_H */

