#include <iostream>
#include <string>  
void bubblesort(std::string arr[], int length);
int main(){
    using namespace std;
    std::string a[]={"cat1", "a", "1", "10","rabbit"};
    bubblesort(a,5);
    for(int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
void bubblesort(std::string arr[], int length){
    for(int i=length-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                std::string temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
