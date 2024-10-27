#include<iostream>
using namespace std;


void mass(int arr[], int size, int book){

    for(int i = 0;i < size; i++){

        cin >> arr[i];
        
    }

    cin >> book;
    bool isfound = false;

    for(int i = 0; i < size; i++){

        if(arr[i] == book){
            isfound = true;
            break;
        }
       
}
            
       isfound ?  cout << "Yes" : cout << "No";
    
}

int main(){

    int size, book; 
    cin >> size;
    int arr[size];
    mass (arr, size, book);



    return 0;
}