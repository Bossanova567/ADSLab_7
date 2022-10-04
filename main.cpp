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
    if (n == 1){
        int A;
        cout << "Enter the data: " << endl;
        cin >> A;
        if (cin.fail()){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Do NOT type letters or words. Try again" << endl;
            goto label;
        }
        cout << "The array before sorting: ";
        cout << A << endl;
        cout << "The array after sorting: ";
        cout << A << endl;
    }
    else {
        int *A = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Enter the data: " << endl;
            cin >> A[i];
            if (cin.fail()){
                cin.clear();
                cin.ignore(100, '\n');
                cout << "Do NOT type letters or words. Try again" << endl;
                goto label;
            }
            if (A[i] < 0 || A[i] > 9){
                cout << "Enter only numbers 0-9. Try again" << endl;
                goto label;
            }
        }
        cout << "The array before sorting: ";
        Show(A, n);
        CountingSort(A, n, 1);
        cout << "The array after sorting: ";
        Show(A, n);
    }
}
