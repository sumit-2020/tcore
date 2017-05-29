#ifndef _TCORES_H_
#define _TCORES_H_

#include <ap_int.h>
#include <iostream>

using namespace std;

const int SIZE=16;
const int PANEL_N=16;

typedef ap_int<4> int4;
struct EightDoubles { double d[16];};

typedef struct EightDoubles ACol;
typedef struct EightDoubles BRow;
typedef struct EightDoubles CRow;
typedef struct EightDoubles SCol;

//void tcore(ACol *ac, BRow *br, SCol *sc);
//void tcore(ACol *ac, BRow *br);

void pe(double aci, double bpassed, double &t);

#endif
