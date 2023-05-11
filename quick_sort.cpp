#include<iostream>
using namespace std;

void printing(int data[], int key1, int key2){
    cout << key1 << " �M " << key2 << " �洫�G" << endl;
    for (int k = 0; k < 10; k++) { 
		    cout << data[k] << " ";
	    }
        cout << endl;
        cout << "-----------------------------------------------" << endl;
}

void quickSort(int data[], int left, int right) {
    if (left >= right) {
        return;
    }
	int pivot = data[left]; //�]�w����I
	int i = left;
    int j = right;
    int key1; //�ΨӰO���洫
    int key2;
    int key3;
    int key4;

    while (i != j){
        while(pivot < data[j] && i < j){
            j --;
        }
        while(pivot >= data[i] && i < j){
            i ++;
        }
        if (i < j){
            key1 = data[i];
            key2 = data[j];
            swap(data[i], data[j]);
            printing(data, key1, key2);
        }
    }
    key3 = pivot;
    key4 = data[i];
    data[left] = data[i];
    data[i] = pivot;
    printing(data, key3, key4);
    quickSort(data, left, i - 1); //�I�s�ۤv�B�z���b��
	quickSort(data, i + 1, right); //�I�s�ۤv�B�z�k�b��
}

int main() {
    int data[] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = 10;
    cout << "�쥻��ơG" << endl;
    for (int k = 0; k < 10; k++) { 
        cout << data[k] << " ";
    }
    cout << endl;
    cout << "-----------------------------------------------" << endl;
    quickSort(data, 0, n - 1); //��ưe�J�ֳt�ƧǨ禡
	return 0;
}