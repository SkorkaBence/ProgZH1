#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;

enum ExceptionTypes {
    FILE_ERROR,
    INPUT_VALUE_ERROR,
    MATRIX_SIZE_ERROR,
    DIVISION_BY_ZERO,
    HIGH_VALUE,
    LOW_VALUE,
    INVALID_VALUE
};

template<class T>
void readMatrix(ifstream& in, vector<vector<T> >& v);
template<class T>
void printMatrix(ostream& ou, const vector<vector<T> >& v);

template<class T, class K>
bool feltMaxKer(vector<T> vect, bool beta(const T&), K ertek(const T&), bool csere(K, K), int& index);

bool mindenMegtalalhato(const vector<int>& vect);
int atlag(const vector<int>& vect);
bool kisebb(int a, int b);

int main()
{

    vector<vector<int> > boltadatok;

    try {
        ifstream file("input.txt");
        readMatrix(file, boltadatok);

        #ifdef DEBUG
        printMatrix(cout, boltadatok);
        #endif // DEBUG

        int index = 0;
        if (feltMaxKer(boltadatok, mindenMegtalalhato, atlag, kisebb, index)) {
            cout << index + 1;
        } else {
            cout << "NM";
        }
    } catch (ExceptionTypes e) {
        switch (e) {
            case FILE_ERROR:
                cout << "FILE_ERROR";
                break;
            case INPUT_VALUE_ERROR:
                cout << "WI";
                break;
            case MATRIX_SIZE_ERROR:
                cout << "NC";
                break;
            case HIGH_VALUE:
                cout << "HV";
                break;
            case LOW_VALUE:
                cout << "LV";
                break;
            case INVALID_VALUE:
                cout << "IV";
                break;
            case DIVISION_BY_ZERO:
                cout << "NM";
                break;
        }
    }

    return 0;
}

template<class T>
void readMatrix(ifstream& in, vector<vector<T> >& v) {
    if (!in.is_open()) {
        throw FILE_ERROR;
    }

    int w, h;
    in >> h;
    if (in.fail()) {
        throw INPUT_VALUE_ERROR;
    }
    in >> w;
    if (in.fail()) {
        throw INPUT_VALUE_ERROR;
    }

    if (h < 0 || w < 0) {
        throw MATRIX_SIZE_ERROR;
    }

    v.resize(h);
    for (int b = 0; b < h; b++) {
        v[b].resize(w);
        for (int t = 0; t < w; t++) {
            in >> v[b][t];
            if (in.fail()) {
                throw INPUT_VALUE_ERROR;
            }
            if (v[b][t] > 10000) {
                throw HIGH_VALUE;
            }
            if (v[b][t] < -1) {
                throw LOW_VALUE;
            }
            if (!((v[b][t] == -1) || (v[b][t] % 5 == 0))) {
                throw INVALID_VALUE;
            }
        }
    }
}

template<class T>
void printMatrix(ostream& ou, const vector<vector<T> >& v) {
    ou << v.size() << " " << v[0].size() << endl;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            ou << v[i][j] << " ";
        }
        ou << endl;
    }
}

template<class T, class K>
bool feltMaxKer(vector<T> vect, bool beta(const T&), K ertek(const T&), bool csere(K, K), int& index) {
    bool l = false;
    K maximum;
    for (int i = 0; i < vect.size(); i++) {
        if (beta(vect[i])) {
            K val = ertek(vect[i]);
            #ifdef DEBUG
            cout << "TALALAT: " << val << " i: " << i << endl;
            #endif // DEBUG
            if (!l) {
                l = true;
                maximum = val;
                index = i;
            } else if (csere(maximum, val)) {
                #ifdef DEBUG
                cout << "CSERE" << endl;
                #endif // DEBUG
                maximum = val;
                index = i;
            }
        }
    }
    return l;
}

bool mindenMegtalalhato(const vector<int>& vect) {
    bool l = true;
    int i = 0;
    while (l && i < vect.size()) { // optimista eldontes
        l = vect[i] >= 0;
        i++;
    }
    return l;
}

int atlag(const vector<int>& vect) {
    if (vect.size() == 0) {
        throw DIVISION_BY_ZERO;
    }
    int sum = 0;
    for (int i = 0; i < vect.size(); i++) { // osszegzes
        sum += vect[i];
    }
    return sum / vect.size();
}

bool kisebb(int a, int b) {
    return a >= b;
}
