#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students;
    students[101] = "ANSH";
    students[102] = "GOVARDHAN";
    students[103] = "GANESH";
    cout << "Student Details:\n";
    for(map<int,string>::iterator it=students.begin();it != students.end();it++){
        cout<<"Id:"<<it->first<<" "<<"Name:"<<it->second<<endl;
    }
    return 0;
}