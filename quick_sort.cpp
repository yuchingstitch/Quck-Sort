#include<iostream>
using namespace std;

int divide(int data[], int start, int end) {
	int pivot = data[start]; //�]�w����I
	int pivotIndex = start;
    cout << "in dividing" << endl;
    while (start != end){
        while(pivot >= data[start]){
            start ++;
            cout << "start = " << start << endl;
            if(start == end){
                cout << "returning 1";
                swap(data[start], data[end]);
                swap(data[pivotIndex],data[start]);
                pivotIndex = start;
                return pivotIndex;
            }
        }
        while(pivot < data[end]){
            end --;
            cout << "end = " << end << endl;
            if(start == end){
                cout << "returning 2";
                swap(data[start], data[end]);
                swap(data[pivotIndex],data[start]);
                pivotIndex = start;
                return pivotIndex;
            }
        

        for (int i = 0; i < 10; i++) {
		    cout << data[i] << " ";
	    }
        cout << endl;
        cout << "-----------------------------------------------" << endl;
        }
    }
}

void quickSort(int data[], int start, int end) {
    cout << "in quickSort" << endl;
	if (start >= end) {
        return;
    }
	int p = divide(data, start, end); //�@����^�Ǥ����I
	//quickSort(data, start, p - 1); //�I�s�ۤv�B�z���b��
	//quickSort(data, p + 1, end); //�I�s�ۤv�B�z�k�b��
}

int main() {
    int data[] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = 10;
    cout << "start" << endl;

    quickSort(data, 0, n - 1); //��ưe�J�ֳt�ƧǨ禡

	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}

	return 0;
}