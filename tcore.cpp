#include "tcore.h"

void tcore(ACol *ac, BRow *br, double t[16])
	{
		#pragma HLS ARRAY_PARTITION variable=t complete dim=1
		#pragma HLS ARRAY_PARTITION variable=br complete dim=1
		#pragma HLS INTERFACE ap_fifo port=ac

	    //#pragma HLS PIPELINE // This will let it try to fetch  aci's(some of them atleast) before
	 	 	 	 	 	       // required and thus won't be as per the required design

		double aci;
		for(int i=0;i<SIZE;i++)
		{

              #pragma HLS PIPELINE
				//#pragma HLS UNROLL//this reduces one clock cycle to be wasted per iteration in the loop just for the sake of it being a loop
				aci=ac->d[i];
				pe0(aci,br->d[0],t[0]);
				pe1(aci,br->d[1],t[1]);
				pe2(aci,br->d[2],t[2]);
				pe3(aci,br->d[3],t[3]);
				pe4(aci,br->d[4],t[4]);
				pe5(aci,br->d[5],t[5]);
				pe6(aci,br->d[6],t[6]);
				pe7(aci,br->d[7],t[7]);
				pe8(aci,br->d[8],t[8]);
				pe9(aci,br->d[9],t[9]);
				pe10(aci,br->d[10],t[10]);
				pe11(aci,br->d[11],t[11]);
				pe12(aci,br->d[12],t[12]);
				pe13(aci,br->d[13],t[13]);
				pe14(aci,br->d[14],t[14]);
				pe15(aci,br->d[15],t[15]);

		}
	}

