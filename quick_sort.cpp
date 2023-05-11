#include<iostream>
using namespace std;

int divide(int data[], int start, int end) {
	int pivot = data[start]; //設定基準點
	int pivotIndex = start;

    cout << "in dividing" << endl;  // debug
    while (start != end){
        while(pivot >= data[start]){
            start ++;
            cout << "start = " << start << endl; // debug
            if(start == end){
                cout << "return 1"; //debug
                
            }
        }
        while(pivot < data[end]){
            end --;
            cout << "end = " << end << endl;
            if(start == end){
                cout << "return 2"; //debug
                
            }
        }

        swap(data[start], data[end]);

        for (int i = 0; i < 10; i++) { // debug
		    cout << data[i] << " ";
	    }
        cout << endl;
        cout << "-----------------------------------------------" << endl;
        
    }
    swap(data[pivotIndex],data[start]);
    pivotIndex = start;
    return pivotIndex;
}

void quickSort(int data[], int start, int end) {
    cout << "in quickSort" << endl;
	if (start >= end) {
        return;
    }
	int p = divide(data, start, end); //一輪後回傳切割點
    cout << "returned to quickSort" << endl;
	//quickSort(data, start, p - 1); //呼叫自己處理左半邊
	//quickSort(data, p + 1, end); //呼叫自己處理右半邊
}

int main() {
    int data[] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = 10;
    cout << "start" << endl;

    quickSort(data, 0, n - 1); //資料送入快速排序函式

	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}

	return 0;
}