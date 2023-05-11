#include<iostream>
using namespace std;

void quickSort(int data[], int left, int right) {
    if (left >= right) {
        return;
    }
	int pivot = data[left]; //設定基準點
	int i = left;
    int j = right;

    while (i != j){
        while(pivot < data[j] && i < j){
            j --;
        }
        while(pivot >= data[i] && i < j){
            i ++;
        }
        if (i < j){
            swap(data[i], data[j]);
        }
        for (int k = 0; k < 10; k++) { // debug
		    cout << data[k] << " ";
	    }
        cout << endl;
        cout << "-----------------------------------------------" << endl;
    }
    data[left] = data[i];
    data[i] = pivot;
    cout << "end of round" << endl;
    quickSort(data, left, i - 1); //呼叫自己處理左半邊
	quickSort(data, i + 1, right); //呼叫自己處理右半邊
}

int main() {
    int data[] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = 10;
    quickSort(data, 0, n - 1); //資料送入快速排序函式
	return 0;
}