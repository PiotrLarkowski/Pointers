#include <iostream>

using namespace std;
void printValueByPointer(void*ptr,char type){
    switch(type){
        case 'i': cout<<*((int*)ptr)<<endl;break;
        case 'c': cout<<*((char*)ptr)<<endl;break;
    }
}
void usingVoidFunctionToReturnValueBasedByPointer() {
    int number =5;
    char letter = 'a';
    printValueByPointer(&number,'i');
    printValueByPointer(&letter,'c');
}
void basicOfPointers(){
    int n = 5;
    cout<<"We make an integer of value: " << n <<endl;
    cout << "Return the pointer value of number: " << &n << endl; //Return the pointer of value
    int* ptr = &n; //Assign the pointer as value
    cout<<"Return the pointer value assigned to value: "<<ptr<<endl;
    *ptr = 10; //When we change the value on which pointer is pointing the value of original value is change as well
    cout<<"We change the value of pointer: " <<ptr<<endl;
    cout<<"When we change the value point by pointer so we change the original value of integer: "<<n<<endl;

    cout<<"We can change the value of variable by using pointers: "<<endl;
    int v;
    int *ptr2 = &v;
    *ptr2 = 5;
    cout<<ptr2<<endl;
}
void arrayPointer(){
    int luckyNumber[5] = {2,3,5,7,3};
    cout<<luckyNumber<<endl;
    cout<<"When we print the array we get address of first number in array! "<<luckyNumber<<endl;
    cout<<"Now we print the address of first element in list: "<<&luckyNumber[0]<<endl;
    cout<<"When we print specified element of array we get value: "<<luckyNumber[0]<<endl;
    cout<<"We also can add value to array which mean we change index of wanted value: "<<*(luckyNumber+2)<<endl;

    int newArray[5];
    for (int i = 0; i < 5; ++i) {
        cout<<"Please input the number"<<endl;
        cin>>newArray[i];
    }
    for (int i = 0; i < 5; ++i) {
        cout<<*(newArray+i);
        if(i<4){
            cout<<", ";
        }
    }
}
void dynamicArrays(){
    int size;
    cout<<"Please give the size of array: "<<endl;
    cin>>size;
    int* myArray = new int[size];
    for(int i=0; i<size;i++){
        cout<<"myArray["<<i<<"] = ";
        cin>>myArray[i];
    }
    for(int i=0;i<size;i++){
        cout<<myArray[i];
        if(i<size-1)
        cout<<", ";
    }
    delete[]myArray;
    myArray=NULL;
}
int main() {
    basicOfPointers();
    usingVoidFunctionToReturnValueBasedByPointer();
    arrayPointer();
    dynamicArrays();
    system("pause>0");
}


