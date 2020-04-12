#include <iostream>
#include <emscripten/emscripten.h>
using namespace std;

int main(int argc, char ** argv) {
    cout<<("Hello World\n");
}
extern "C" {
EMSCRIPTEN_KEEPALIVE
uint8_t*  array_square(uint8_t *arr,int n) {
    uint8_t* arr2 = new uint8_t[n];
    for (int i= 0;i<n;i++){
    	arr2[i]=arr[i]*arr[i];  
     }
    return arr2;
}
}