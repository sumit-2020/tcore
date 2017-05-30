#ifndef _TCORE_H_
#define _TCORE_H_

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

void tcore(ACol *ac, BRow *br,SCol *sc, double t[16]);

void pe(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe0(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe1(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe2(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe3(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe4(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe5(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe6(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe7(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe8(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe9(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe10(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe11(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe12(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe13(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe14(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);
void pe15(double aci,double bpassed,double cri, double *t,ap_uint<1> flag);

#endif

