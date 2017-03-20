//
//  MyVector.h
//  COMP 235 LAB 02 14 2017 Pointers
//
//  Created by ax on 3/19/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef MyVector_h
#define MyVector_h

#include <iostream>

/*
 
 Make a copy of class template: List and rename MyVector
 Implement MyVector using a dynamic array instead of a static array
 Include a constructor that allows an integer to specify an initial capacity
 automatically increase capactiy by factor of two when overflow
 
 Implement methods:
 push_back, adds a new item to the back of the dynamic array
 pop_back, deletes a specific item from the back of a MyVector object
 size, return actual number of items in the array
 capacity: return the max number of array items allocated for use
 
 */

// MyVector class template
// Accepts input of various type
// Holds maximum of 3 values in array
// Error condition if more than 3 values added
// Display contents of array

template<class T>
class MyVector {
public:
    MyVector();
    // initialize to integer spec size
    MyVector(int init_size);
    /** getters **/
    int size();
    int capacity();
    void displayList();
    /** setter **/
    // Insert a new value to the container
    void setValue(T p_newValue);
    
    // push_back method to add value to array
    void push_back(T p_newValue);
    void pop_back();
    
private:
    T * m_arr = new T[0]; // dynamic array
    int m_capacity = 3;
    int m_size = 0;
};

// MyVector class template implementation
// default constructor
template<class T>
MyVector<T>::MyVector() {}

//TODO: make dynamic array here
template<class T>
MyVector<T>::MyVector(int init_size) {
    T * movingPtr = m_arr;
    for (int i = 0; i < m_capacity; i++) {
        * movingPtr = NULL;
        movingPtr++;
    }
}

// GETTERS
// getter - size
template<class T>
int MyVector<T>::size() {
    return m_size;
    
}
// getter - capacity
template<class T>
int MyVector<T>::capacity() {
    return m_capacity;
    
}

// getter - show MyVector
template<class T>
void MyVector<T>::displayList() {
    for (int i = 0; i < m_capacity; i++) {
        std::cout << m_arr[i] << " ";
    }
    std::cout << std::endl;
}

// SETTERS
// push back
template<class T>
void MyVector<T>::push_back(T p_newValue) {
    if (m_size >= m_capacity) {
        m_capacity *= 2;
    }
    m_arr[m_size++] = p_newValue;
}
// pop back
template<class T>
void MyVector<T>::pop_back() {
    std::cout << "Pop BAck\n";
    
    T * ptr = nullptr;
    ptr = m_arr;
    int sizeNow = this->size();
    
    std::cout << "size now: " << sizeNow << std::endl;
    
    ptr += sizeNow;
    
    std::cout << "ptr size now loc: " << ptr << std::endl;

    ptr = NULL;
    
    //delete * ptr;
    
    /*
    for (int i = 0; i < 7; i++) {
        std::cout << "ptr: " << * ptr << std::endl;
        ptr++;
    }
    
    
    
    std::cout << "ptr m_arr: " << * ptr << std::endl;
    ptr++;
    std::cout << "ptr ++: " << * ptr << std::endl;
     */

}

#endif /* MyVector_h */



























