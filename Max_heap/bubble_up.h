// here is implementation for moving up
// here we are following working in 1 base index system
void bubble_up(vector<int>&arr,int idx){
    while(idx>1&&vec[i]>vec[idx/2]){
        swap(vec[idx],vec[idx/2]);
        idx/=2;
    }
}
