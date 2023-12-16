/*
 * This program was written by Alexander John for educational purposes.
 *
 * A data structure is a group of data elements grouped together
 * under one name. These data elements, known as members, can have
 * different types and different lengths. Data structures can be
 * declared using the following syntax.
 *
 * struct type_name {
 * member_type1 member_name1;
 * member_type2 member_name2;
 * member_type3 member_name 3;
 * .
 * .
 * } object_names;
 *
 * Its members can be accessed directly. The syntax for that is simply
 * to insert a dot (.) between the object name and the member name. Here
 * is the syntax.
 *
 * object_name.member_name;
 *
 */

#include <iostream>

struct car {
    std::string make;
    std::string model;
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    car bmw;
    car tesla;

    bmw.make = "bmw";
    bmw.model = "M3";

    return 0;
}
