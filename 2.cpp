#include <iostream>
using namespace std;

void duplicateElems(int arr[], int tam){
    for (int i = 0; i<tam; i++){
        arr[i] *= 2;
    
    }
}
void printArray(const int arr[], const int size){
    cout << "[ ";
    for (int i=0; i < size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<" ]"<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int tam=sizeof(arr);
    duplicateElems(arr,tam);
    printArray(arr,tam);
    return 0;
}