#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <fstream>
using namespace std;

#define W 480
#define H 640

struct ponto{
    double x;
    double y;
};

double dist(ponto v1, ponto v2){
    double d = sqrt(pow((v2.x - v1.x), 2) + pow((v2.y - v1.y), 2));
//    cout << d << endl;
    return d;
}


int main(int argc, char *argv[]) {
    srand (time(NULL));
    int n, nc, d, m=0;

    cin >> n >> nc;

    vector<ponto>vertices;
    double x, y;
    vector<int> dV;

    for(int i=0; i<n; i++){
        x = (H) * ( (double)rand() / (double)RAND_MAX);
        y = (W) * ( (double)rand() / (double)RAND_MAX);
        vertices.push_back({x,y});
    }

    for(int i=1; i<=nc; i++){
        cin >> d;
        dV.push_back(d);
    }

    vector<vector<double>>arestas;

    for(int i=0; i<n; i++){
        vector<double> aux;
        aux.assign(n,0);
        arestas.push_back(aux);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            arestas[i][j] = dist(vertices[i], vertices[j]);
            m++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arestas[i][j] << " ";
        }
        cout << endl;
    }

    fstream f;
    string path = "table_" + to_string (n) + "_" + to_string(nc)+".txt";
    f.open(path, fstream::out);

    f << n << " " << nc << " " << m << endl;
    for(int i=1; i<=nc; i++){
        f << i << " " << dV[i-1] << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            f << i+1 << " " << j+1 << " " << arestas[i][j] << endl;
        }
    }

    f.close();


    return 0;
}


