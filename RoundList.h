//
// Created by yehud on 03/05/2022.
//

#ifndef EXERCISE_6_QUESTION_2_ROUNDLIST_H
#define EXERCISE_6_QUESTION_2_ROUNDLIST_H
#include <iostream>
#include "List.h"

using namespace std;

class RoundList : public List{
public:
    RoundList();
    ~RoundList();

    void add(int);
    int search(int);
    void addToEnd(int);
    void clear();
    void removeFirst();
    friend ostream &operator<<(ostream&, const RoundList&);//000
};

#endif //EXERCISE_6_QUESTION_2_ROUNDLIST_H
