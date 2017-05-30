#include "tcore.h"

void tcore(CRow *cr,ACol *ac, BRow *br,SCol *sc)
{
#pragma HLS DATA_PACK variable=cr
#pragma HLS DATA_PACK variable=ac
#pragma HLS DATA_PACK variable=br
#pragma HLS DATA_PACK variable=sc

#pragma HLS INTERFACE ap_fifo port=cr
#pragma HLS INTERFACE ap_fifo port=ac
#pragma HLS INTERFACE ap_fifo port=br
#pragma HLS INTERFACE ap_fifo port=sc

	double cr_d[SIZE],ac_d[SIZE],br_d[SIZE],sc_d[SIZE];

#pragma HLS ARRAY_PARTITION variable=cr_d dim=1
#pragma HLS ARRAY_PARTITION variable=ac_d dim=1
#pragma HLS ARRAY_PARTITION variable=br_d dim=1
#pragma HLS ARRAY_PARTITION variable=sc_d dim=1

	for(int i=0;i<SIZE;i++)
	{
		cr_d[i]=cr->d[i];
		ac_d[i]=ac->d[i];
		br_d[i]=br->d[i];
	}

#pragma HLS PIPELINE

	double dum[SIZE];
#pragma HLS ARRAY_PARTITION variable=dum dim=1

	ap_uint<1> sel;

	pe0(ac_d[0],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[1],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[2],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[3],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[4],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[5],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[6],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[7],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[8],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[9],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[10],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[11],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[12],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[13],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[14],br_d[0],cr_d[0],&dum[0],sel);
	pe0(ac_d[15],br_d[0],cr_d[0],&dum[0],sel);
	pe1(ac_d[0],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[1],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[2],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[3],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[4],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[5],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[6],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[7],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[8],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[9],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[10],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[11],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[12],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[13],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[14],br_d[1],cr_d[1],&dum[1],sel);
	pe1(ac_d[15],br_d[1],cr_d[1],&dum[1],sel);
	pe2(ac_d[0],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[1],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[2],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[3],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[4],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[5],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[6],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[7],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[8],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[9],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[10],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[11],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[12],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[13],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[14],br_d[2],cr_d[2],&dum[2],sel);
	pe2(ac_d[15],br_d[2],cr_d[2],&dum[2],sel);
	pe3(ac_d[0],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[1],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[2],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[3],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[4],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[5],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[6],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[7],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[8],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[9],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[10],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[11],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[12],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[13],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[14],br_d[3],cr_d[3],&dum[3],sel);
	pe3(ac_d[15],br_d[3],cr_d[3],&dum[3],sel);
	pe4(ac_d[0],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[1],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[2],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[3],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[4],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[5],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[6],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[7],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[8],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[9],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[10],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[11],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[12],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[13],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[14],br_d[4],cr_d[4],&dum[4],sel);
	pe4(ac_d[15],br_d[4],cr_d[4],&dum[4],sel);
	pe5(ac_d[0],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[1],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[2],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[3],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[4],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[5],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[6],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[7],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[8],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[9],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[10],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[11],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[12],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[13],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[14],br_d[5],cr_d[5],&dum[5],sel);
	pe5(ac_d[15],br_d[5],cr_d[5],&dum[5],sel);
	pe6(ac_d[0],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[1],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[2],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[3],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[4],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[5],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[6],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[7],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[8],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[9],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[10],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[11],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[12],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[13],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[14],br_d[6],cr_d[6],&dum[6],sel);
	pe6(ac_d[15],br_d[6],cr_d[6],&dum[6],sel);
	pe7(ac_d[0],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[1],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[2],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[3],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[4],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[5],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[6],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[7],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[8],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[9],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[10],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[11],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[12],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[13],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[14],br_d[7],cr_d[7],&dum[7],sel);
	pe7(ac_d[15],br_d[7],cr_d[7],&dum[7],sel);
	pe8(ac_d[0],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[1],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[2],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[3],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[4],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[5],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[6],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[7],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[8],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[9],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[10],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[11],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[12],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[13],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[14],br_d[8],cr_d[8],&dum[8],sel);
	pe8(ac_d[15],br_d[8],cr_d[8],&dum[8],sel);
	pe9(ac_d[0],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[1],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[2],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[3],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[4],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[5],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[6],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[7],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[8],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[9],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[10],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[11],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[12],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[13],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[14],br_d[9],cr_d[9],&dum[9],sel);
	pe9(ac_d[15],br_d[9],cr_d[9],&dum[9],sel);
	pe10(ac_d[0],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[1],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[2],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[3],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[4],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[5],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[6],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[7],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[8],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[9],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[10],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[11],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[12],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[13],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[14],br_d[10],cr_d[10],&dum[10],sel);
	pe10(ac_d[15],br_d[10],cr_d[10],&dum[10],sel);
	pe11(ac_d[0],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[1],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[2],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[3],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[4],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[5],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[6],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[7],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[8],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[9],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[10],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[11],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[12],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[13],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[14],br_d[11],cr_d[11],&dum[11],sel);
	pe11(ac_d[15],br_d[11],cr_d[11],&dum[11],sel);
	pe12(ac_d[0],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[1],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[2],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[3],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[4],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[5],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[6],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[7],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[8],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[9],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[10],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[11],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[12],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[13],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[14],br_d[12],cr_d[12],&dum[12],sel);
	pe12(ac_d[15],br_d[12],cr_d[12],&dum[12],sel);
	pe13(ac_d[0],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[1],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[2],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[3],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[4],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[5],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[6],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[7],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[8],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[9],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[10],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[11],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[12],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[13],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[14],br_d[13],cr_d[13],&dum[13],sel);
	pe13(ac_d[15],br_d[13],cr_d[13],&dum[13],sel);
	pe14(ac_d[0],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[1],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[2],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[3],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[4],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[5],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[6],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[7],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[8],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[9],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[10],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[11],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[12],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[13],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[14],br_d[14],cr_d[14],&dum[14],sel);
	pe14(ac_d[15],br_d[14],cr_d[14],&dum[14],sel);
	pe15(ac_d[0],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[1],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[2],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[3],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[4],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[5],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[6],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[7],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[8],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[9],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[10],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[11],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[12],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[13],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[14],br_d[15],cr_d[15],&dum[15],sel);
	pe15(ac_d[15],br_d[15],cr_d[15],&dum[15],sel);



}
