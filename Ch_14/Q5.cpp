#include <iostream>
using namespace std;

int argmax(float marks[], int L)
// marks = array containing the values
// L = length of marks array.  required > 0.
// returns maxIndex such that marks[maxIndex] is largest in marks[0..L-1]
{
    int maxIndex = 0;
    for (int j = 1; j < L; j++)
        if (marks[maxIndex] < marks[j]) // bigger element found?
            maxIndex = j;                 // update maxIndex.
    return maxIndex;
}

void SelSort(float data[], int n)
// will sort in NON-DECREASING order.
{
    float maximum[10];
    for (int i = n; i > 2; i--) {
        int maxIndex = argmax(data, i);  // Find index of max in data[0..i-1]
        float maxVal = data[maxIndex];  // Exchange elements at
        data[maxIndex] = data[i - 1];     //   index = maxindex
        data[i - 1] = maxVal;             //   and index = i-1.
        maximum[i] = data[i - 1];
        cout << maximum[i] << endl;
    }
}

int main() {
    float a[12] = { 50, 80, 70, 10, 20, 90, 100, 2000, 400, 50, 60 };
    SelSort(a, 12);

}