#include <iostream>
#include <string.h>
using namespace std;

char _0[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '1', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '1', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _1[7][5] = {{'0', '0', '1', '0', '0'},
                 {'0', '1', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '1', '1', '0'}};

char _2[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'1', '1', '1', '1', '1'}};

char _3[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'1', '1', '1', '1', '1'}};

char _4[7][5] = {{'0', '0', '0', '1', '0'},
                 {'0', '0', '1', '1', '0'},
                 {'0', '1', '0', '1', '0'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '1', '1', '1', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '0', '1', '0'}};

char _5[7][5] = {{'1', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '0'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _6[7][5] = {{'0', '0', '1', '1', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _7[7][5] = {{'1', '1', '1', '1', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'0', '1', '0', '0', '0'}};

char _8[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _9[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '1', '1', '0', '0'}};

char _dosPuntos[7][5] = {{'0', '0', '0', '0', '0'},
                         {'0', '1', '1', '0', '0'},
                         {'0', '1', '1', '0', '0'},
                         {'0', '0', '0', '0', '0'},
                         {'0', '1', '1', '0', '0'},
                         {'0', '1', '1', '0', '0'},
                         {'0', '0', '0', '0', '0'}};

char _PuntoyComa[7][5] = {{'0', '0', '0', '0', '0'},
                          {'0', '1', '1', '0', '0'},
                          {'0', '1', '1', '0', '0'},
                          {'0', '0', '0', '0', '0'},
                          {'0', '1', '1', '0', '0'},
                          {'0', '0', '1', '0', '0'},
                          {'0', '1', '0', '0', '0'}};

char _MenorQue[7][5] = {{'0', '0', '0', '1', '0'},
                        {'0', '0', '1', '0', '0'},
                        {'0', '1', '0', '0', '0'},
                        {'1', '0', '0', '0', '0'},
                        {'0', '1', '0', '0', '0'},
                        {'0', '0', '1', '0', '0'},
                        {'0', '0', '0', '1', '0'}};

char _Igualdad[7][5] = {{'0', '0', '0', '0', '0'},
                        {'0', '0', '0', '0', '0'},
                        {'1', '1', '1', '1', '1'},
                        {'0', '0', '0', '0', '0'},
                        {'1', '1', '1', '1', '1'},
                        {'0', '0', '0', '0', '0'},
                        {'0', '0', '0', '0', '0'}};

char _MayorQue[7][5] = {{'0', '1', '0', '0', '0'},
                        {'0', '0', '1', '0', '0'},
                        {'0', '0', '0', '1', '0'},
                        {'0', '0', '0', '0', '1'},
                        {'0', '0', '0', '1', '0'},
                        {'0', '0', '1', '0', '0'},
                        {'0', '1', '0', '0', '0'}};

char _Interrogacion[7][5] = {{'0', '1', '1', '1', '0'},
                             {'1', '0', '0', '0', '1'},
                             {'0', '0', '0', '0', '1'},
                             {'0', '0', '0', '1', '0'},
                             {'0', '0', '1', '0', '0'},
                             {'0', '0', '0', '0', '0'},
                             {'0', '0', '1', '0', '0'}};

char _arroba[7][5] = {{'0', '1', '1', '1', '0'},
                      {'1', '0', '0', '0', '1'},
                      {'0', '0', '0', '0', '1'},
                      {'0', '1', '1', '0', '1'},
                      {'1', '0', '1', '0', '1'},
                      {'1', '0', '1', '0', '1'},
                      {'0', '1', '1', '1', '0'}};

char _A[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'}};

char _B[7][5] = {{'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'}};

char _C[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _D[7][5] = {{'1', '1', '1', '0', '0'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '1', '1', '0', '0'}};

char _E[7][5] = {{'1', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '1'}};

char _F[7][5] = {{'1', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'}};

char _G[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '1', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'}};

char _H[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'}};

char _I[7][5] = {{'0', '1', '1', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '1', '1', '0'}};

char _J[7][5] = {{'0', '0', '1', '1', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '0', '1', '0'},
                 {'1', '0', '0', '1', '0'},
                 {'0', '1', '1', '0', '0'}};

char _K[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '0', '1', '0', '0'},
                 {'1', '1', '0', '0', '0'},
                 {'1', '0', '1', '0', '0'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '0', '0', '0', '1'}};

char _L[7][5] = {{'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '1'}};

char _M[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '1', '0', '1', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'}};

char _N[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '0', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '0', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'}};

char _O[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _P[7][5] = {{'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'}};

char _Q[7][5] = {{'0', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '0', '1', '0'},
                 {'0', '1', '1', '0', '1'}};

char _R[7][5] = {{'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '1', '0', '0'},
                 {'1', '0', '0', '1', '0'},
                 {'1', '0', '0', '0', '1'}};

char _S[7][5] = {{'0', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'0', '1', '1', '1', '0'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'}};

char _T[7][5] = {{'1', '1', '1', '1', '1'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'}};

char _U[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '0'}};

char _V[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'}};

char _W[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'1', '0', '1', '0', '1'},
                 {'0', '1', '0', '1', '0'}};

char _X[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '0', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'}};

char _Y[7][5] = {{'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '0', '1', '0', '0'}};

char _Z[7][5] = {{'1', '1', '1', '1', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '1', '0'},
                 {'0', '0', '1', '0', '0'},
                 {'0', '1', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '1'}};

char _cocheteIzq[7][5] = {{'0', '1', '1', '1', '0'},
                          {'0', '1', '0', '0', '0'},
                          {'0', '1', '0', '0', '0'},
                          {'0', '1', '0', '0', '0'},
                          {'0', '1', '0', '0', '0'},
                          {'0', '1', '0', '0', '0'},
                          {'0', '1', '1', '1', '0'}};

char _slashIzq[7][5] = {{'0', '0', '0', '0', '0'},
                        {'1', '0', '0', '0', '0'},
                        {'0', '1', '0', '0', '0'},
                        {'0', '0', '1', '0', '0'},
                        {'0', '0', '0', '1', '0'},
                        {'0', '0', '0', '0', '1'},
                        {'0', '0', '0', '0', '0'}};

char _corcheteDer[7][5] = {{'0', '1', '1', '1', '0'},
                           {'0', '0', '0', '1', '0'},
                           {'0', '0', '0', '1', '0'},
                           {'0', '0', '0', '1', '0'},
                           {'0', '0', '0', '1', '0'},
                           {'0', '0', '0', '1', '0'},
                           {'0', '1', '1', '1', '0'}};

char _[7][5] = {{'0', '0', '0', '0', '0'},
                {'0', '0', '0', '0', '0'},
                {'0', '0', '0', '0', '0'},
                {'0', '0', '0', '0', '0'},
                {'0', '0', '0', '0', '0'},
                {'0', '0', '0', '0', '0'},
                {'1', '1', '1', '1', '1'}};

char _a[7][5] = {{'0', '0', '0', '0', '0'},
                 {'0', '0', '0', '0', '0'},
                 {'0', '1', '1', '1', '0'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'}};

char _b[7][5] = {{'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '1', '1', '1', '0'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '1', '1', '1', '0'}};

char _c[7][5] = {{'0', '0', '0', '0', '0'},
                 {'0', '0', '0', '0', '0'},
                 {'0', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'1', '0', '0', '0', '0'},
                 {'0', '1', '1', '1', '1'}};

char _d[7][5] = {{'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'1', '0', '0', '0', '1'},
                 {'0', '1', '1', '1', '1'}};

char _e[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '1', '1', '1', '0',
               '1', '0', '0', '0', '1',
               '1', '1', '1', '1', '1',
               '1', '0', '0', '0', '0',
               '0', '1', '1', '1', '1'};

char _f[35] = {'0', '0', '0', '1', '0',
               '0', '0', '1', '0', '1',
               '0', '0', '1', '0', '0',
               '0', '1', '1', '1', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0'};

char _g[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '1', '1', '1', '1',
               '1', '0', '0', '0', '1',
               '0', '1', '1', '1', '1',
               '0', '0', '0', '0', '1',
               '1', '1', '1', '1', '0'};

char _h[35] = {'1', '0', '0', '0', '0',
               '1', '0', '0', '0', '0',
               '1', '0', '0', '0', '0',
               '1', '1', '1', '1', '0',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1'};

char _i[35] = {'0', '0', '0', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0'};

char _j[35] = {'0', '0', '0', '1', '0',
               '0', '0', '0', '0', '0',
               '0', '0', '0', '1', '0',
               '0', '0', '0', '1', '0',
               '0', '0', '0', '1', '0',
               '1', '0', '0', '1', '0',
               '0', '1', '1', '0', '0'};

char _k[35] = {'0', '1', '0', '0', '0',
               '0', '1', '0', '0', '0',
               '0', '1', '0', '0', '1',
               '0', '1', '0', '1', '0',
               '0', '1', '1', '0', '0',
               '0', '1', '0', '1', '0',
               '0', '1', '0', '0', '1'};

char _l[35] = {'0', '1', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '1', '1', '1', '0'};

char _m[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '1', '0', '1', '1',
               '1', '0', '1', '0', '1',
               '1', '0', '1', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1'};

char _n[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '1', '1', '0',
               '1', '1', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1'};

char _o[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '1', '1', '1', '0',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '0', '1', '1', '1', '0'};

char _p[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '1', '1', '1', '0',
               '1', '0', '0', '0', '1',
               '1', '1', '1', '1', '0',
               '1', '0', '0', '0', '0',
               '1', '0', '0', '0', '0'};

char _q[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '1', '1', '1', '1',
               '1', '0', '0', '0', '1',
               '0', '1', '1', '1', '1',
               '0', '0', '0', '0', '1',
               '0', '0', '0', '0', '1'};

char _r[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '1', '1', '0',
               '1', '1', '0', '0', '1',
               '1', '0', '0', '0', '0',
               '1', '0', '0', '0', '0',
               '1', '0', '0', '0', '0'};

char _s[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '0', '1', '1', '1', '1',
               '1', '0', '0', '0', '0',
               '0', '1', '1', '1', '0',
               '0', '0', '0', '0', '1',
               '1', '1', '1', '1', '0'};

char _t[35] = {'0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '1', '1', '1', '1', '1',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '1',
               '0', '0', '0', '1', '0'};

char _u[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '0', '1', '1', '1', '0'};

char _v[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '0', '1', '0', '1', '0',
               '0', '0', '1', '0', '0'};

char _w[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '0', '0', '1',
               '1', '0', '0', '0', '1',
               '1', '0', '1', '0', '1',
               '1', '0', '1', '0', '1',
               '0', '1', '0', '1', '0'};

char _x[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '0', '0', '1',
               '0', '1', '0', '1', '0',
               '0', '0', '1', '0', '0',
               '0', '1', '0', '1', '0',
               '1', '0', '0', '0', '1'};

char _y[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '0', '0', '0', '1',
               '0', '1', '0', '1', '0',
               '0', '0', '1', '0', '0',
               '0', '0', '1', '0', '0',
               '0', '1', '0', '0', '0'};

char _z[35] = {'0', '0', '0', '0', '0',
               '0', '0', '0', '0', '0',
               '1', '1', '1', '1', '1',
               '0', '0', '0', '1', '0',
               '0', '0', '1', '0', '0',
               '0', '1', '0', '0', '0',
               '1', '1', '1', '1', '1'};

char _llavesIzq[35] = {'0', '0', '1', '1', '0',
                       '0', '1', '0', '0', '0',
                       '0', '1', '0', '0', '0',
                       '1', '0', '0', '0', '0',
                       '0', '1', '0', '0', '0',
                       '0', '1', '0', '0', '0',
                       '0', '0', '1', '1', '0'};

char _oLogico[35] = {'0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0',
                     '0', '0', '1', '0', '0'};

char _llavesDer[35] = {'0', '1', '1', '0', '0',
                       '0', '0', '0', '1', '0',
                       '0', '0', '0', '1', '0',
                       '0', '0', '0', '0', '1',
                       '0', '0', '0', '1', '0',
                       '0', '0', '0', '1', '0',
                       '0', '1', '1', '0', '0'};

char _cuadrado[35] = {'1', '1', '1', '1', '1',
                      '1', '0', '0', '0', '1',
                      '1', '0', '0', '0', '1',
                      '1', '0', '0', '0', '1',
                      '1', '0', '0', '0', '1',
                      '1', '0', '0', '0', '1',
                      '1', '1', '1', '1', '1'};

void imprimirArray(string *array, int cantidadElementos)
{
    for (int i = 0; i < cantidadElementos; i++)
    {
        cout << array[i] << endl;
    }
}

string *extenderArray(string *array, int cantidadElementos)
{
    string *newArray = new string[cantidadElementos + 10];
    for (int i = 0; i < cantidadElementos; i++)
    {
        newArray[i] = array[i];
    }
    delete[] array;
    return newArray;
}

class Segmento
{
private:
    string ArraySeg[6];

public:
    Segmento() = default;
    Segmento(string valores[6])
    {

        for (int i = 0; i < 6; i++)
        {
            ArraySeg[i] = valores[i];
        }
    }
    void imprimirArreglo()
    {
        for (int i = 0; i < 6; i++)
        {

            cout << ArraySeg[i] << " ";
        }
        cout << endl;
    }
};

void extraerSegmentos(string **matriz, Segmento segmentos[], int m)
{
    int multiplicador = 0;
    int caracteres = m / 7;
    int contador = 0;
    while (multiplicador < caracteres)
    {
        // Esquina Superior Izquierda
        string arr1[6];
        arr1[0] = matriz[0 + multiplicador * 7][0];
        arr1[1] = matriz[0 + multiplicador * 7][1];
        arr1[2] = matriz[1 + multiplicador * 7][0];
        arr1[3] = matriz[1 + multiplicador * 7][1];
        arr1[4] = matriz[2 + multiplicador * 7][0];
        arr1[5] = matriz[2 + multiplicador * 7][1];
        Segmento segmento1(arr1);
        segmentos[contador] = segmento1;
        contador++;

        // Esquina Superior Derecha
        string arr2[6];
        arr2[0] = matriz[0 + multiplicador * 7][3];
        arr2[1] = matriz[0 + multiplicador * 7][4];
        arr2[2] = matriz[1 + multiplicador * 7][3];
        arr2[3] = matriz[1 + multiplicador * 7][4];
        arr2[4] = matriz[2 + multiplicador * 7][3];
        arr2[5] = matriz[2 + multiplicador * 7][4];
        Segmento segmento2(arr2);
        segmentos[contador] = segmento2;
        contador++;

        // Esquina Inferior Izquierda
        string arr3[6];
        arr3[0] = matriz[4 + multiplicador * 7][0];
        arr3[1] = matriz[4 + multiplicador * 7][1];
        arr3[2] = matriz[5 + multiplicador * 7][0];
        arr3[3] = matriz[5 + multiplicador * 7][1];
        arr3[4] = matriz[6 + multiplicador * 7][0];
        arr3[5] = matriz[6 + multiplicador * 7][1];
        Segmento segmento3(arr3);
        segmentos[contador] = segmento3;
        contador++;

        // Esquina Inferior Derecha
        string arr4[6];
        arr4[0] = matriz[4 + multiplicador * 7][3];
        arr4[1] = matriz[4 + multiplicador * 7][4];
        arr4[2] = matriz[5 + multiplicador * 7][3];
        arr4[3] = matriz[5 + multiplicador * 7][4];
        arr4[4] = matriz[6 + multiplicador * 7][3];
        arr4[5] = matriz[6 + multiplicador * 7][4];
        Segmento segmento4(arr4);
        segmentos[contador] = segmento4;
        contador++;

        multiplicador++;
    }
}

void convertirMatriz(string arr[], string **matriz, int filas)
{
    int contador = 0;
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new string[5];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = arr[contador];
            contador++;
        }
    }
}

void imprimirMatriz(string **matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // Leer entrada y guardar en array
    int cantidadElementos = 10;
    string *paquetes = new string[cantidadElementos];
    int indicePaquetes = 0;
    string entrada;

    cin >> entrada;
    while (entrada != "ENJOY")
    {
        paquetes[indicePaquetes] = entrada;
        indicePaquetes++;
        if (indicePaquetes >= cantidadElementos)
        {
            paquetes = extenderArray(paquetes, cantidadElementos);
            cantidadElementos += 10;
        }
        cin >> entrada;
    }

    // Imprimir Array
    imprimirArray(paquetes, indicePaquetes);

    // Matriz
    int filas = indicePaquetes / 5;
    string **matriz = new string *[filas];
    convertirMatriz(paquetes, matriz, filas);

    // Imprimir Matriz
    imprimirMatriz(matriz, filas, 5);

    // Guardar Segmentos
    int cantidadSegmentos = (filas / 7) * 4;
    Segmento *segmentos = new Segmento[cantidadSegmentos];
    extraerSegmentos(matriz, segmentos, filas);
    for (int i = 0; i < cantidadSegmentos; i++)
    {
        segmentos[i].imprimirArreglo();
    }

    // Delete
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
    delete[] paquetes;
    delete[] segmentos;
}