//
//  main.cpp
//  COMP 235 LAB 02 14 2017 Pointers
//
//  Created by ax on 3/19/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "MyVector.h"
#include <iostream>
using namespace std;


int main() {
    cout << "****************     PART 1: int     *********************" << endl;
    cout << "Using parameterized constructor, start with capacity 3...." << endl;
    cout << "Push back some integer values..." << endl;
    MyVector<int> myVec(3);
    myVec.push_back(111);
    myVec.displayList();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    myVec.push_back(222);
    myVec.displayList();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    myVec.push_back(333);
    myVec.displayList();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    myVec.push_back(444);
    myVec.displayList();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    myVec.push_back(555);
    myVec.displayList();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    myVec.displayList();
    
    // pop backs
    cout << endl << endl << "Popping back twice..." << endl;
    
    myVec.pop_back();
    myVec.pop_back();
    cout << "Capacity = " << myVec.capacity() << " Size = " << myVec.size() << endl;
    cout << "CONTENT: \t";
    myVec.displayList();
    
    cout << "\n\n****************     PART 2: string     ********************" << endl;
    cout << "Using default constructor, depending on default capacity...." << endl;
    cout << "Push back some strings values..." << endl;
    MyVector<string> myVec2;
    myVec2.push_back("AAA");
    myVec2.displayList();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    myVec2.push_back("BBB");
    myVec2.displayList();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    myVec2.push_back("CCC");
    myVec2.displayList();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    myVec2.push_back("DDD");
    myVec2.displayList();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    myVec2.push_back("EEE");
    myVec2.displayList();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    cout << "CONTENT: \t";
    myVec2.displayList();
    
    cout << endl << endl << "Popping back twice..." << endl;
    
    myVec2.pop_back();
    
    
    myVec2.pop_back();
    cout << "Capacity = " << myVec2.capacity() << " Size = " << myVec2.size() << endl;
    cout << "CONTENT: \t";
    myVec2.displayList();
    
    /* fin */
    return 0;
}

