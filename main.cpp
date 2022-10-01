#include "Sort.h"

int main(){
    int n; // n - кількість елементів масиву
    label:
    cout << "Enter the length of an array:";
    cin >> n;
    if (cin.fail()){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Do NOT type letters or words. Try again" << endl;
        goto label;
    }
    if (n <= 0) {
        cout << "The length of array can't be " << n << endl;
        goto label;
    }
    else {
        int *A = new int[n];
        int *B = new int[n];
        for (int i = 0; i < n; i++)
            B[i] = 0;
        for (int i = 0; i < n; i++) {
            cout << "Enter the data: " << endl;
            cin >> A[i];
            if (cin.fail()){
                cin.clear();
                cin.ignore(100, '\n');
                cout << "Do NOT type letters or words. Try again" << endl;
                goto label;
            }
        }
        cout << "The array before sorting: ";
        Show(A, n);
        int k = A[0];
        for (int i = 1; i < n; i++){
            if (k < A[i])
                k = A[i];
        }
        CountingSort(A, B, k, n);
        cout << "The array after sorting: ";
        Show(B, n);
    }
}
