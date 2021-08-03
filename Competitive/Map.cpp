#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> x;

    x[10]="geeks";
    x[20]="practice";
    x[5]="contribute";
    map<int, string>::reverse_iterator i;
    map<int, string>::iterator j;
    for (i = x.rbegin(); i != x.rend(); i++) {
        cout << "(" << i->first << "  "
             << i->second << ")" << endl;
    }
    for (j = x.begin(); j != x.end(); j++) {
        cout << "(" << j->first << "  "
             << j->second << ")" << endl;
    }

    return 0;
}
