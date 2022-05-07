#include <stdio.h>

int main(){
	float A_bp, A_da, A_net;
	float B_bp, B_da, B_net;
	float C_bp, C_da, C_net;
	
	/* for A*/
	 
	A_bp =1500;
	A_da =A_bp * 15.0/100;
	A_net =A_bp + A_da;
	
	/*for B */
	
	B_bp =2500;
	B_da =B_bp * 15.0/100;
	B_net =B_bp + B_da;
	
	/* for C */
	
	C_bp =3500;
	C_da =C_bp * 15.0/100;
	C_net =C_bp + C_da;
	
	printf("\n              V _VITHURSHAN INDUSTRIES       				  ");
	printf("\n                Salary list for 2021                         ");
	printf("\n============================================================");
	printf("\nS.No.  Name                  Basic Pay        DA  Net Salary");              	 		
	printf("\n============================================================");
	
	printf("\n%-5d  %-20s  %9.2f  %8.2f  %10.2f",1,"A",A_bp, A_da, A_net);                                                          
	printf("\n%-5d  %-20s  %9.2f  %8.2f  %10.2f",2,"B",B_bp, B_da, B_net);                                                          
	printf("\n%-5d  %-20s  %9.2f  %8.2f  %10.2f",3,"C",C_bp, C_da, C_net);                                                          
	printf("\n-----------------------------------------------------------");
	
	printf("\n       Total                 %9.2f  %8.2f  %10.2f",A_bp+B_bp+C_bp, A_da+B_da+C_da, A_net+B_net+C_net);
	printf("\n============================================================\n");
}

