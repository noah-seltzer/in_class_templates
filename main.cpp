#include <iostream>
#include <map>
#include "MergeStudents.hpp"
using namespace std;

int main() {
    map<string, int> tony_map;
    map<string, int> sam_map;
    string student;
    int grade;
    while(student != "end") {
        cout << "Tony, please input a friend then hit enter or end to end input" << endl;
        cin >> student;
        if(student == "end") {
            break;
        }
        cin.clear();
        cout << "what grade does " << student << "have?" << endl;        cin >> grade;
        cin.clear();
        tony_map[student] = grade;
    }

    while(student != "end") {
        cout << "Sam, please input a friend then hit enter or end to end input" << endl;
        cin >> student;
        if(student == "end") {
            break;
        }
        cin.clear();
        cout << "what grade does " << student << "have?" << endl;
        cin >> grade;
        cin.clear();
        tony_map[student] = grade;
    }
    too_low<int> tl(75);
    map<string, int> combined_map;
    for(auto it = tony_map.begin(); it != tony_map.end(); ++it){
        if(!tl(it->second)){
            combined_map[it->first] = it->second;
        }
    }
    for(auto it = sam_map.begin(); it != sam_map.end(); ++it){
        if(!tl(it->second)){
            combined_map[it->first] = it->second;
        }
    }
    cout << "after processing input: " << endl;
    for(auto it = combined_map.begin(); it != combined_map.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
}