#include <iostream>//перегрузка операторов
#include "Linkedlist.h"


//
//class Digit
//{
//private:
//    int _data;
//public:
//    Digit(int data) : _data(data){ }
//
//          int operator +(Digit &digit)
//    {
//        return _data + digit._data;
//
//    }
//
//    //int Foo(Digit& digit) {
//    //    return _data + digit._data
//
//    int operator -(Digit& digit)
//    {
//        if (_data < digit._data)
//            return digit._data - _data;
//        return _data - digit._data;
//
//
//    }
//
//};






    int main() {
        setlocale(LC_ALL, "Russian");

        //Digit digit(5);
        //Digit digit2(10);
        //std::cout << digit.operator+(digit2) << '\n';
        //std::cout << digit.operator-(digit2) << '\n';
        //std::cout << digit + 5 << '\n';
        //std::cout << digit2 - digit2 << '\n';
        LinkedList list;

        list.Push_back(109);
        list.Push_back(80);
        list.Push_back(40);
        list.Push_back(55);
        list.Push_back(66);
        list.Push_back(85);
        list.Push_back(45);
        list.Push_back(25);
        
  /* std::cout << list.SearchByIndex(3)->GetData();*/
        list.PushByIndex(0, 30);
        list.ShowList();


    return 0;

};
