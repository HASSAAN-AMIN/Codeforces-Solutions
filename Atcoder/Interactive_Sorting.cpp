/*
                بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char ask(char a, char b) {
    cout << "? " << a << " " << b << endl;

    char ans;
    cin >> ans;

    return ans;
}

bool less_than(char a, char b) {
    return ask(a, b) == '<';
}

void answer(string s) {
    cout << "! " << s << endl;
    exit(0);
}

int main() {
    int n, q;
    cin >> n >> q;

    if (n == 5) {

        char a = 'A';
        char b = 'B';
        char c = 'C';
        char d = 'D';
        char e = 'E';

        if (ask(a, b) == '>') {
            swap(a, b);
        }

        if (ask(c, d) == '>') {
            swap(c, d);
        }

        if (ask(a, c) == '>') {
            swap(a, c);
            swap(b, d);
        }

        // Now:
        // a < c < d
        // a < b

        if (ask(e, c) == '>') {

            // a < c < d < e

            if (ask(e, d) == '>') {

                // a < c < d < e

                if (ask(b, d) == '>') {

                    if (ask(b, e) == '>') {
                        answer(string() + a + c + d + e + b);
                    }
                    else {
                        answer(string() + a + c + d + b + e);
                    }

                }
                else {

                    if (ask(b, c) == '<') {
                        answer(string() + a + b + c + d + e);
                    }
                    else {
                        answer(string() + a + c + b + d + e);
                    }
                }

            }
            else {

                // a < c < e < d

                if (ask(b, e) == '>') {

                    if (ask(b, d) == '>') {
                        answer(string() + a + c + e + d + b);
                    }
                    else {
                        answer(string() + a + c + e + b + d);
                    }

                }
                else {

                    if (ask(b, c) == '<') {
                        answer(string() + a + b + c + e + d);
                    }
                    else {
                        answer(string() + a + c + b + e + d);
                    }
                }
            }

        }
        else {

            // e < c < d

            if (ask(e, a) == '<') {

                // e < a < c < d

                if (ask(b, c) == '>') {

                    if (ask(b, d) == '>') {
                        answer(string() + e + a + c + d + b);
                    }
                    else {
                        answer(string() + e + a + c + b + d);
                    }

                }
                else {
                    answer(string() + e + a + b + c + d);
                }

            }
            else {

                // a < e < c < d

                if (ask(b, c) == '>') {

                    if (ask(b, d) == '>') {
                        answer(string() + a + e + c + d + b);
                    }
                    else {
                        answer(string() + a + e + c + b + d);
                    }

                }
                else {

                    if (ask(b, e) == '<') {
                        answer(string() + a + b + e + c + d);
                    }
                    else {
                        answer(string() + a + e + b + c + d);
                    }
                }
            }
        }
    }

    string s = "";

    for (char i = 'A'; i < 'A' + n; i++) {

        if (s.empty()) {
            s += i;
            continue;
        }

        int l = 0;
        int r = s.size();

        while (l < r) {
            int m = l + (r - l) / 2;

            char c = ask(i, s[m]);

            if (c == '<') {
                r = m;
            }
            else {
                l = m + 1;
            }
        }

        s.insert(s.begin() + l, i);
    }

    cout << "! " << s << endl;

    return 0;
}