#include <iostream>
#include <string>
using namespace std;


#define DEFAULT_SIZE 100000;

void print(string s);
string convert(int array[], int length);
void sort_bubble(int array[], int length);
void init_random(int array[], int length, int a, int b);
void sort_selected(int array[], int length);
void sort_inserted(int array[], int length);