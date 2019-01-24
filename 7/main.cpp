#include <iostream>

using namespace std;

class IntegerArray {
public:
    int *data; int size;
    IntegerArray() {
        data = new int[0];
        this->size = 0;
    }
    IntegerArray(int arr[], int size) {
        this->data = new int[size];
        this->size = size;
        for (int i = 0; i < size; ++i)
            data[i] = arr[i];
    }

    void resize(int newSize)
    {
        int *pts =new int[newSize];
        int minsize=(newSize > size )? size :newSize;
        for(int i=0 ;i<minsize ; i++)
            pts[i]=data[i];
        delete[]data;
        size=newSize;
        data=pts;
    }



    IntegerArray(IntegerArray &o) {
        data = new int[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }

    void push_back(int val) {
//        this ->size = size+1;
//        int *arr = new int[size];
//
//        for(int i=0;i<size-1;++i){
//            arr[i]=data[i];
//        }
//        arr[size-1]=val;
//        delete[] data;
//        data = arr;
        resize(size+1);
        data[size-1]=val;

    }

    void insert(int val, int pos) {
//        this->size= size +1;
//        int *arr1 = new int [size];
//        for( int i = 0, j = 0; i < size ; i++, j++){
//            if ( i == pos ){
//                arr1[i] = val;
//                j--;
//            }
//            else
//                arr1[i]= data[j];
//        }
//        delete[] data;
//        data = arr1;
        resize(size+1);
        for(int i=size-1;i>pos;i--){
            data[i]=data[i-1];

        data[pos]=val;
        }
    }

    void remove(int pos) {
//        this->size--;
//        int *arr = new int [size];
//
//        for (int i=0, j=0; i<size; ++i, ++j)
//        {
//            if (i==pos) j++;
//            arr[i] = data[j];
//        }
//
//        delete[] data;
//        data = arr;
        for(int i = pos; i < size-1; i++)
            data[i] = data[i+1];

        resize(size-1);
    }

    void print() {
        for(int i =0; i < size; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    ~IntegerArray() {
        delete[] data;
    }
};
int main() {
    int arr[] = {1,2,3,4,5};
    IntegerArray a(arr, 5);
    a.push_back(6);
    a.print();
    a.insert(10,5);
    a.print();
    a.remove(5);
    a.print();
    //cout << a.getSize() << endl; // 4
}
