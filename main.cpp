#include <iostream>

using namespace std;

int arr[10];

//my way:
void showlist(){
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void add(int left,int right, int num){
    for(int i=left;i<=right;i++){
        arr[i]+=num;
    }
}


int main()
{
    showlist();
    add(3,6,1);
    add(1,9,10);
    showlist();
    return 0;
}
