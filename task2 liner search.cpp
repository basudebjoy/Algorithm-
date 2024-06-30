/*#include<bits/stdc++.h>
using namespace std;


/*int LinearSearch(int *a, int n, int x) {

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt++;
        if (a[i] == x) {
            return cnt ;
        }
    }

        return 0;

}*/
/*void printList(int *p, int n){
for(int i = 0 ; i<n; i++){
    cout<<p[i]<<endl;

}
}

stack<int> LinearSearch(int *a, int n, int x) {

    stack<int> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {

        if (a[i] == x) s.push(i);
    }

        return s;

}


int main() {
    int n = 10000;
    int *a = new int[n];
    ifstream fin("10k.txt");

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }


stack<int> m = LinearSearch(a,n,1050);

while(!m.empty()){

    cout<<m.top()<<" "<<a[m.top()]<<endl;
    m.pop();
}

    return 0;
}*/

#include<bits/stdc++.h>

using namespace std;

void printList(int *p, int n) {

    for (int i = 0; i < n; i++) {

        cout << p[i] << "\n";

    }

}

stack<int> linearSearch(int *p, int n, int x, int& cnt) {

    stack<int> s;

    cnt = 0;

    for (int i = 0; i < n; i++) {

        if (p[i] == x) {

            cnt++;

            s.push(i);

        }

    }

    return s;

}

int main() {

    ifstream fin("10k.txt");

    int n = 100000;

    int *a = new int[n];

    for (int i = 0; i < n; i++) {

        fin >> a[i];

    }



    int searchValue = 2134;

    int cnt;

    stack<int> m = linearSearch(a, n, searchValue, cnt);

    cout << "Number of occurrences of " << searchValue << ": " << cnt << endl;

    cout << "Indices where " << searchValue << " is found:" << endl;

    while (!m.empty()) {

        cout << m.top() << " " << a[m.top()] << endl;

        m.pop();

    }



}

