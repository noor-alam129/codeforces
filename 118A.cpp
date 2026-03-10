#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string name, r="";
    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        char l=tolower(name[i]);
        if(l=='a'||l=='o'||l=='y'||l=='e'||l=='u'||l=='i'){
            continue;
        }
        else{
            r +=".";
            r +=l;
        }
    }

    cout << r;
    return 0;
}
