#include "tcore.h"

void pe(double aci,double bpassed, double &t)
	{
		static double auxsumcol[SIZE];
		static int i=0;
		static int FLAG=0;
		static int PANEL=0;
		double temp,temp1,temp2;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
		t=auxsumcol[i];
		if(FLAG)temp=t;else temp=0;
		temp1=aci*bpassed;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		i++;
		if(i==SIZE)FLAG=1;
		i=i%SIZE;
		PANEL++;
	}
