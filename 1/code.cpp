#include <iostream>
#include <string>

using namespace std;

void reverse(string &in, int start, int end){
    if(start >= end){
        return;
    }
    swap(in[start], in[end]);
    reverse(in, start + 1, end - 1);
}

int main()
{
    string buffer;
    cout << "Sting: "; cin >> buffer;
    reverse(buffer, 0, buffer.length() - 1);
    cout << "R String: " << buffer;
    return 0;
}