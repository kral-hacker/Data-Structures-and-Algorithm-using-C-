#include <iostream>
using namespace std;


// template <class  T>
// T maximum(T one, T two){
//     return (one > two) ? one : two;
// }

// int main(){
//     int ans1 = maximum(1,2);
//     char ans2 = maximum('x','a');
//     cout<< ans1 << endl;
//     cout << ans2 << endl;
// }

// template <typename T>
// int linearSearch(T arr[], int size, T key){
//     for(int i = 0; i< size; i++){
//         if(key ==  arr[i]) return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int index = linearSearch(arr, 5, 3);
//     cout << index;
// }


// Template with multiple paramerters

// template <typename T1, typename T2>
// void display(T1 x, T2 y){
//     cout << x << " " << y;
// }
// int main(){
//     display(78, "Ananay");
// }

//Overlading Template
// template<class T1, class T2>
// void display(T1 x,T2 y){
//     cout << "func1: " << x << " " << y << endl;
// }
// template <class U>
// void display(U x){
//     cout << "func2: " << x << endl;
// }

// void display(int i){
//     cout << "func3: " << i << endl;
// }

// int main(){
//     display('x');
//     display(100);
//     display(1.23, "AX");
//     display(10, 79);
// }

// template <typename T>
// class A{
//     private:
//     T a;
//     T b;
//     public:
//     A(T x, T y){
//         a = x;
//         b = y;
//     }

//     void display(){
//         cout << "a: " << a << "," << "b: " << b << endl;
//     }
// };

// int main(){
//     // remember the auto template deduction only works on the c++ 17 and above
//     A <int>obj(3,4); // here we have to explicitly mention the datatype
//     obj.display();
//     A <float>obj1(3.4, 7.8); // here we have to explicitly mention the datatype
//     obj1.display();
// }

// template <typename T1 = int, typename T2 = int>

// class Test{
//     T1 a;
//     T2 b;
//     int size;
//     public:
//     Test(T1 x, T2 y){
//         a = x;
//         b = y;
//     }
//     void show(){
//         cout << a << " " << b << endl;
//     }
// };

// int main(){
//     Test <> t3('A', 32.56);
//     t3.show();
// }

// template<typename T>
// class A{
//     T a;
//     T b;
//     public:
//     A(T x, T y){
//         a = x;
//         b = y;
//     }
//     void display(){
//         cout << a << " " << b << endl;
//     }
// };
// int main(){
//     auto obj = A(2,3);
//     obj.display();
// }

// template <typename T1 = int, typename T2 = int>
// class A{
//     T1 a;
//     T2 b;
//     public:
//     A(T1 x, T2 y);
//     void show();
// };

// template<typename T1, typename T2>
// A<T1,T2>::A(T1 x, T2 y){
//     a = x;
//     b = y;
// }
// int main(){
//     A<int,char>(12,'a');
// }


// dynamic memory allocation of the 2d variable arrays
// each row have a different size
// #include <iostream>
// using namespace std;

// int main() {
//     int rows;

//     // Step 1: Take number of rows
//     cout << "Enter the number of rows: ";
//     cin >> rows;

//     // Allocate an array of int* (for rows)
//     int** dynamicArray = new int*[rows];

//     // Array to store the size of each row
//     int* sizes = new int[rows];

//     // Step 2: Allocate each row dynamically and fill values
//     for (int i = 0; i < rows; ++i) {
//         cout << "Enter the size of row " << i + 1 << ": ";
//         cin >> sizes[i];  // save size of this row

//         dynamicArray[i] = new int[sizes[i]];

//         cout << "Enter " << sizes[i] << " elements for row " << i + 1 << ": ";
//         for (int j = 0; j < sizes[i]; ++j) {
//             cin >> dynamicArray[i][j];
//         }
//     }

//     // Step 3: Display the contents
//     cout << "\nDynamic Array Contents:\n";
//     for (int i = 0; i < rows; ++i) {
//         cout << "Row " << i + 1 << ": ";
//         for (int j = 0; j < sizes[i]; ++j) {
//             cout << dynamicArray[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Step 4: Free the allocated memory
//     for (int i = 0; i < rows; ++i) {
//         delete[] dynamicArray[i];  // free each row
//     }

//     delete[] dynamicArray;  // free array of row pointers
//     delete[] sizes;         // free row size tracker

//     return 0;
// }


int main(){
    int rows;
    cout << "Enter the number of the rows: " << endl;
    cin >> rows;

    int **da = new int*[rows];

    int *sizes = new int[rows];

    for(int i = 0; i < rows; i++){
        cout << "Emter the size for the ith row: " << endl;
        cin >> sizes[i];
        da[i] = new int[sizes[i]]; 
        cout << "Enter the element for the ith row: " << endl;
        for(int j = 0; j < sizes[i]; j++){
            cin >> da[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < sizes[i]; j++){
            cout << da[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i<rows; i++){
        delete [] da[i];
    }
    delete[] da;
    delete[] sizes;
}