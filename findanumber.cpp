#include<iostream>
/*
*输入一串数列以及需要查找的数，输出下标或者当v不在数组中出现时，v为特殊值NIL
*写出线性查找的伪代码，扫描整个序列来查找v。使用一个循环不变式来证明我的算法
*/
using namespace std;
int main() {
	cout << "Enter the length of array: ";
	int n;
	cin >> n;
	int *b = new int[n];
	int i, j;
	cout << "Please enter numbers: ";
	for (i = 0; i < n; i++) {
		cin >>b[i];
	}
	int v;
	cout << "Enter the funding number: ";
	cin >> v;

	for (j = 0; j < n; j++) {
		if((*(b + j)) == v)
		cout << "The j is : " << j << endl;
	}
	cout << "NIL" << endl;
	delete[] b;
	system("pause");
	return 0;
}
