// here we are delete a node at the root 
// here we are working in 1 base index system
#include "max_heapify.h"
void delete_root(vector<int>&vec,int sz){
      swap(vec[1],vec[sz]);
      sz--;
      // now i have to do the max_hepify bz lst and rst are max heap and this new root is addded 
      max_heapify(vec,1,sz);
}