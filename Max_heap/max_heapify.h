// max heapyfy operation 
// working into the 1 base index system

void max_heapify(vector<int>&vec,int idx,int cur_size){
    if(idx>cur_size/2)
      return;
    int mx=idx;
    if(2*idx<=cur_size&&vec[mx]<vec[2*idx])
      mx=2*idx;
    if(2*idx+1<=cur_size&&vec[mx]<vec[2*idx+1])
     mx=2*idx+1;
     if(mx!=idx){
        swap(vec[idx],vec[mx]);
        max_heapify(vec,mx,cur_size);
     }    
}
