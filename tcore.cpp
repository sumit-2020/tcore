//#include "tcore.h"
//
//void tcore(ACol *ac, BRow *br)
//	{
//		double t;
//		#pragma HLS ARRAY_PARTITION variable=br complete dim=1
//		#pragma HLS INTERFACE ap_fifo port=ac
//	    //#pragma HLS PIPELINE // This will let it try to fetch  aci's(some of them atleast) before
//	 	 	 	 	 	       // required and thus won't be as per the required design
//
//
//		for(int i=0;i<SIZE;i++)
//
//
//	{
//       //#pragma HLS PIPELINE
//				#pragma HLS UNROLL//this reduces one clock cycle to be wasted per iteration in the loop just for the sake of it being a loop
//				//aci=ac.d[i];
//				pe(ac->d[i],br->d[0],t);
//			}
//	}
//
//
//
//
//
