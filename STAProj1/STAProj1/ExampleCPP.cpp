#include <iostream>
using namespace std;


void FindBiggestNum() {
    int array[10] = { 1,4,12,6,4,7,1,19,9 };
    int biggestNum = 0;
    for (int i = 0; i < 10; i++) {

        if (array[i] >= biggestNum) {
            biggestNum = array[i];
        }

    }
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    cout << "Biggest Number: " << biggestNum;
}

void Find3BiggestNum() {
    int array[10] = { 1,4,12,6,4,7,1,19,15 };
    int biggestNum[3] = { 0,0,0 };
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (array[i] >= biggestNum[0]) {
            biggestNum[0] = array[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (array[i] < biggestNum[0] && array[i] >= biggestNum[1]) {
            biggestNum[1] = array[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (array[i] < biggestNum[0] && array[i] < biggestNum[1] && array[i] >= biggestNum[2]) {
            biggestNum[2] = array[i];
        }
    }


    cout << "Top 3 biggest numbers: " << biggestNum[0] << ", " << biggestNum[1] << ", " << biggestNum[2] << "\n";
}

void Find2ndBiggestNum() {
    int array[10] = { 1,4,12,6,4,7,1,19,15 };
    int biggestNum[3] = { 0,0,0 };
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (array[i] >= biggestNum[0]) {
            biggestNum[0] = array[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (array[i] < biggestNum[0] && array[i] >= biggestNum[1]) {
            biggestNum[1] = array[i];
        }
    }



    cout << "2nd biggest number: " << biggestNum[1] << "\n";
}

void FindXBiggestNum() {
    int array[10] = { 1,4,12,6,4,7,1,19,15,3 };
    int temp;
    int k;
    cout << "How many largest elements would you like to find?\n";
    cin >> k;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] < array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "The " << k << " Biggest Numbers are: ";
    for (int i = 0; i < k; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

}

void Find2SmallestNum() {
    int array[10] = { 1,4,12,6,4,7,2,19,15,3 };
    int temp;

    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "The 2 smallest numbers are: ";
    for (int i = 0; i < 2; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

}

void FindNumW2Big() {
    int array[10] = { 1,4,12,6,4,7,1,19,15,3 };
    int temp;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }



    cout << "The Numbers with at least two greater elements are: ";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (array[i] < array[j] && array[i] < array[j + 1]) {
                cout << array[i] << " ";
                break;

            }
        }
    }
    cout << "\n";

}

void FindMostRepetNum() {
    int array[10] = { 5,5,5,5,5,8,4,2,2,8 };
    int numRepeat = 0;
    int numThatRepeat;
    int temp;
    int k = 0;
    int storeNum = 0;
    int storeName = 0;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }




    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {


            if (array[i] == array[j]) {
                numRepeat = numRepeat + 1;
                numThatRepeat = array[i];
                break;
            }
            if (array[i] != array[j]) {
                if (numRepeat > storeNum) {
                    storeNum = numRepeat;
                    storeName = numThatRepeat;

                }
                numRepeat = 0;
            }

        }
    }
    cout << "The most reoccuring element is: " << storeName << " which repeated " << storeNum << " times.\n";

}

void FindGreaterElement() {
    int array[10] = { 1,4,12,6,4,7,1,19,15,3 };
    int temp;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Next Greater Element:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] < array[j]) {
                cout << array[i] << " : " << array[j] << "\n";
                break;

            }
        }
    }


}

void SortWaveForm() {
    int array[10] = { 8,9,12,6,9,7,1,19,15,3 };
    int temp;
    int k = 1;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] <= array[j] && k == 1) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

                if (k == 1) {
                    k = 0;
                }
                break;
            }
        }
        k = 1;
        i++;
    }
    cout << "Wave form of said array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void FindSmallestMissing() {
    int array[10] = { 0,3,1,4,5,7,8,9,12,2 };
    int temp;
    int smallestNum;
    cout << "Original Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] > array[j]) {

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (array[i] + 1 != array[j]) {
                smallestNum = array[i] + 1;
                i = 10;
                break;
            }
            j = 10;

        }

    }
    cout << "The smallest missing number is " << smallestNum << "\n";
}

int main() {
    int choice = 0;
    cout << "Enter a number corelating to the function you wish to perform.\n\n";
    cout << "1. Find the largest element of a given array of integers.\n";
    cout << "2. Find the largest three elements in an array of integers.\n";
    cout << "3. Find the second largest element in a given array of integers.\n";
    cout << "4. Find k largest elements in a given array of integers.\n";
    cout << "5. Find the smallest and second smallest elements in a given array of       integers.\n";
    cout << "6. Find all elements in an array of integers which have at-least two greater elements.\n";
    cout << "7. Find the most occurring element in an array of integers.\n";
    cout << "8. Find the next greater element of every element of a given array of       integers.\n";
    cout << "9. Sort a given unsorted array of integers, in wave form.\n";
    cout << "10. Find the smallest element missing in a sorted array.\n";
    cin >> choice;

    if (choice == 1) {
        FindBiggestNum();
    }
    if (choice == 2) {
        Find3BiggestNum();
    }
    if (choice == 3) {
        Find2ndBiggestNum();
    }
    if (choice == 4) {
        FindXBiggestNum();
    }
    if (choice == 5) {
        Find2SmallestNum();
    }
    if (choice == 6) {
        FindNumW2Big();
    }
    if (choice == 7) {
        FindMostRepetNum();
    }
    if (choice == 8) {
        FindGreaterElement();
    }
    if (choice == 9) {
        SortWaveForm();
    }
    if (choice == 10) {
        FindSmallestMissing();
    }

}



