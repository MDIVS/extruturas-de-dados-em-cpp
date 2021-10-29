#include <iostream>
#include "src/include/classes/ListNode.h"
#include "src/include/data_structures/List.h"

int main() {
    // List mylist;
    // mylist.add(15);
    // mylist.add(25);
    // mylist.add(35);
    // mylist.add(45);
    // std::cout << "mylist: "<<mylist.to_string()<<std::endl;

    // std::cout << "mynode position: "<<mylist.find(25)<<std::endl;
    
    // mylist.remove(2);
    // std::cout << "mylist: "<<mylist.to_string()<<std::endl;
    // std::cout << "interval: "<<mylist.to_string()<<std::endl;

    List listA;
    listA.add(150);
    listA.add(25);
    listA.add(7);
    
    List listB;
    listB.add(300);
    listB.add(99);
    listB.add(88);

    List resultado = listA.conc(&listB);
    std::cout << "resultado: "<<resultado.to_string()<<std::endl;
    return 1;
}