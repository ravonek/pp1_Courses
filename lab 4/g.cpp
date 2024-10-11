#include <iostream>

using namespace std;
int main(){
    
    int x,y;
    cin >> x >> y;
    char arr[8][8];
    if(x > 7 or y > 7){
        
        cout << "Impossible";
        return 0;
    }
    else
    {
        for(int i = 0; i < 8;i++){
            for(int j = 0;j < 8; j++){
                if(i == x and j == y){
                    arr[i][j] = '1';
                }
                else if(i == x or j == y or (i - j == x - y) or (i + j == x + y)){
                    arr[i][j] = '2';
                }
                else{
                    arr[i][j] = '*';
                }
            }
        }
    }
    for(int i = 0;i < 8; i++){
        for(int j = 0;j < 8; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}