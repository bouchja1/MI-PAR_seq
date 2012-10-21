/* 
 * File:   main.cpp
 * Author: honza
 *
 * Created on 7. říjen 2012, 15:41
 */

#include <iostream>

#include "BinaryVector.h"
#include "Worker.h"
#include "TaskParser.h"
#include <math.h>
#include "ParentNode.h"
#include "Node.h"
#include "LeafNode.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    TaskParser* parser = new TaskParser(true);
    //TaskCrate* taskCrate = parser->getTaskFromFile("testTasks/test33.txt");
    TaskCrate* taskCrate = parser->getTaskFromFile("testTasks/test55.txt");

    int size = (taskCrate->GetHeight())* (taskCrate->GetWidth());
    bool* initialArray = new bool[size];
    for (int i = 0; i < size; i++) {
        initialArray[i] = false;
    }
    Worker* worker = new Worker(taskCrate, initialArray, NULL, false);
    worker->work();
    ResultCrate* result = worker->getResult();
    result->printResult();
    ResultCrate* mistakeresult = worker->getSmallMistakeResult();
    mistakeresult->printResult();


    delete mistakeresult;
    delete result;
    delete worker;
    delete parser;
    return 0;
}
