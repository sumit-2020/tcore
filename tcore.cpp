#include "tcore.h"

void tcore(ACol *ac, BRow *br, double t[16])
	{
#pragma HLS DATA_PACK variable=br
#pragma HLS DATA_PACK variable=ac


		#pragma HLS ARRAY_PARTITION variable=t complete dim=1
		#pragma HLS ARRAY_PARTITION variable=br complete dim=1
		#pragma HLS INTERFACE ap_fifo port=ac

	    #pragma HLS PIPELINE // This will let it try to fetch  aci's(some of them atleast) before
	 	 	 	 	 	       // required and thus won't be as per the required design

		double aci;
		double ac_d[16],br_d[16],t_d[16];
		for(int i=0;i<16;i++)
		{
			ac_d[i]=ac->d[i];
			br_d[i]=br->d[i];
			t_d[i]=t[i];

		}
		aci=ac_d[0];
		pe0(aci,br_d[0],t_d[0]);
		aci=ac_d[1];
		pe0(aci,br_d[0],t_d[0]);
		aci=ac_d[2];
		pe0(aci,br_d[0],t_d[0]);
		aci=ac_d[3];
		pe0(aci,br_d[0],t_d[0]);

//		for(int i=0;i<SIZE;i++)
//		{
//
//              #pragma HLS PIPELINE
//				#pragma HLS UNROLL//this reduces one clock cycle to be wasted per iteration in the loop just for the sake of it being a loop
//				aci=ac_d[i];
//				pe0(aci,br_d[0],t_d[0]);
////				pe1(aci,br_d[1],t_d[1]);
////				pe2(aci,br_d[2],t_d[2]);
////				pe3(aci,br_d[3],t_d[3]);
////				pe4(aci,br_d[4],t_d[4]);
////				pe5(aci,br_d[5],t_d[5]);
////				pe6(aci,br_d[6],t_d[6]);
////				pe7(aci,br_d[7],t_d[7]);
////				pe8(aci,br_d[8],t_d[8]);
////				pe9(aci,br_d[9],t_d[9]);
////				pe10(aci,br_d[10],t_d[10]);
////				pe11(aci,br_d[11],t_d[11]);
////				pe12(aci,br_d[12],t_d[12]);
////				pe13(aci,br_d[13],t_d[13]);
////				pe14(aci,br_d[14],t_d[14]);
////				pe15(aci,br_d[15],t_d[15]);
//
//		}

		for(int i=0;i<16;i++)
				{
					t[i]=t_d[i];

				}
	}
