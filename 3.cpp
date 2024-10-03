#include <iostream>
#include <array>
using namespace std;

void duplicateElems(size_t arr[]){
    for (size_t i = 0; i<sizeof(arr)-1; i++){
        arr[i] *= 2;
    
    }
}
void printArray(const size_t arr[]){
    cout << "[ ";
    for (size_t i=0; i < sizeof(arr)-1; i++){
        cout<< arr[i]<<" ";
    }
    cout<<" ]"<<endl;
}
int main(){
    size_t arr[]={1,2,3,4,5,6,7,8,9};
    duplicateElems(arr);
    printArray(arr);
    return 0;
}