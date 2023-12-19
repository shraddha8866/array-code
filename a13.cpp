#include<iostream>
using namespace std;

int main()
{
    int array[5] = {1, 3, 2, 1, 3};

    for (int i = 0; i < 5; i++) {
        int temp = array[i];
        bool isUnique = true;

        for (int j = 0; j < 5; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << array[i] << " ";
        }
    }

    return 0;
}

