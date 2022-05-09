//
// Created by yehud on 02/05/2022.
//

#ifndef EXERCISE_6_QUESTION_2_LIST_H
#define EXERCISE_6_QUESTION_2_LIST_H


//#pragma once

//------------------------------------------------
//  class List
//      arbitrary size Lists
//      permits insertion and removal
//      only from the front of the List
//------------------------------------------------
class List
{
protected://private
    //--------------------------------------------
    //  inner class link
    //  a single element for the linked List
    //--------------------------------------------
    class Link
    {
    public:
        // constructor
        Link(int linkValue, Link* nextPtr);
        Link(const Link&);
        // data areas
        int value;
        Link* next;
    };	//end of class Link
public:
    // constructors
    List();
    List(const List&);
    ~List();

    // operations
    void add(int value);
    int firstElement() const;
    bool search(const int& value) const;
    bool isEmpty() const;
    void removeFirst();
    void clear();

protected://private
    // data field
    Link* head;
};



#endif //EXERCISE_6_QUESTION_2_LIST_H
