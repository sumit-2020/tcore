#include "tcore.h"

void pe(double aci,double bpassed, double &t)
	{
		double aci_local,bpassed_local,t_local;
		static double auxsumcol[SIZE];
		static int i=0;
		static int FLAG=0;
		static int PANEL=0;
		double temp,temp1,temp2;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
		t_local=auxsumcol[i];
		if(FLAG)temp=t;else temp=0;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		i++;
		if(i==SIZE)FLAG=1;
		i=i%SIZE;
		PANEL++;
	}
void pe0(double aci,double bpassed, double &t)
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
//void pe1(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe2(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe3(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe4(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe5(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe6(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe7(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe8(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe9(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe10(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe11(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe12(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe13(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe14(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
//void pe15(double aci,double bpassed, double &t)
//	{
//		static double auxsumcol[SIZE];
//		static int i=0;
//		static int FLAG=0;
//		static int PANEL=0;
//		double temp,temp1,temp2;
//
//		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
//		#pragma HLS PIPELINE
//	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false
//
//		if(PANEL==SIZE*PANEL_N){PANEL=0;FLAG=0;}
//		t=auxsumcol[i];
//		if(FLAG)temp=t;else temp=0;
//		temp1=aci*bpassed;
//		temp2=temp+temp1;
//		auxsumcol[i] = temp2;
//		i++;
//		if(i==SIZE)FLAG=1;
//		i=i%SIZE;
//		PANEL++;
//	}
