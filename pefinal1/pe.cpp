#include "tcore.h"

void pe(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe0(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe1(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe2(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe3(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe4(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe5(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe6(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe7(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe8(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe9(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe10(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe11(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe12(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe13(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe14(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}
void pe15(double aci,double bpassed,double cri, double *t,ap_uint<1> flag)
	{
		double aci_local,bpassed_local,cri_local,t_local,temp,temp1,temp2;
		static double auxsumcol[SIZE];
		static int i=0;

		#pragma HLS RESOURCE variable=auxsumcol core=RAM_2P_BRAM
		#pragma HLS PIPELINE
		#pragma HLS INLINE
	  	#pragma HLS DEPENDENCE variable=auxsumcol inter false

		aci_local=aci;bpassed_local=bpassed;cri_local=cri;

		t_local=auxsumcol[i];
		if(flag)temp=t_local;else temp=cri_local;
		temp1=aci_local*bpassed_local;
		temp2=temp+temp1;
		auxsumcol[i] = temp2;
		if(i==SIZE-1)flag=1;
		i=(i+1)%SIZE;
		*t=t_local;
	}



