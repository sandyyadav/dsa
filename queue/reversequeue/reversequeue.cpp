#include <iostream>
using namespace std;
#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    queue<int> p;
    while(!input.empty())
    {
        p.push(input.front());
         input.pop();

    }
    while(!p.empty())
    {
        int t=p.size();
        for(int i=1;i<t;i++)
        {
            p.push(p.front());
            p.pop();
        }
        input.push(p.front());
        p.pop();
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
