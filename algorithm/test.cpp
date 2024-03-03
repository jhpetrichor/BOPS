#include <iostream>
#include <vector>

using namespace std;

int getfa(int x, int fa[]) {
    int a = x;
    while (x != fa[x]) {
        x = fa[x];
    }

    while (a != fa[a]) {
        int z = a;
        a = fa[a];
        fa[z] = x;
    }
    return x;
}

void print_arr(int arr[]) {
    //int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < 8; ++i) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main (void) {
    int arr[8];
    for(int i = 0; i < 8; ++i) arr[i]= i;
    int arr1 = arr;

    print_arr(arr);
    getfa(1, arr);
    print_arr(arr);

    cout << "equite: " << arr1 == arr << endl;
    return 0;
}
