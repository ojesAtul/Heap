// here we are inserting a new element into the heap
// here we are working into the 1 base inviroment

#include "bubble_up.h"
void insert(vector<int>&vec,int size,int val){
    vec[++size]=val;
    bubble_up(vec,sz);
}