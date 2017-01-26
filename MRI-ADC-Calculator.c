#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float b0, b1, field, b1sobreb0;
	int espec;
	printf("	******************************\n");
	printf("	Welcome to the ADC calculator!\n");
	printf("	******************************\n\n");
	printf("What is the ROI value in the B0? ");
	scanf(" %f", &b0);
	printf("What is the ROI value in the second B? ");
	scanf(" %f", &b1);
	printf("What is the value of the second B field (usually 1000)? ");
	scanf(" %f", &field);
	//printf("%f\n", b0);
	//printf("%f\n", b1);
	//printf("%f\n", field);
	b1sobreb0 = b1/b0;
	float preadc = -log(b1sobreb0);
	float adc = preadc/field;
	float adc10a3 = adc*1000;
	//printf("O valor de b1 sobre b0 e %f",b1sobreb0);
	//printf("O valor de preadc e %f",preadc);
	//printf("O valor do ADC e de %f", adc);
	printf("\n The estimated ADC is:\n\n");
	printf("*** --> %f <-- ***\n\n", adc10a3);
	printf("x 10^-3 mm^2/s\n\n\n\n\n\n");
	printf("Developed by Omir Antunes Paiva \nR4 in Radiology and Medical Imaging  \nHospital Israelita Albert Einstein\nresearchgate.net/profile/Omir_Antunes_Paiva\n\n");
	printf(“This app is for educational and informational purposes only. Not for clinical usage.\n\n”)
	printf("Para valores de referencia, digite a especialidade desejada:\n");
	printf("1 - Head and Neck\n");
	scanf(" %d", &espec);
	if
	(espec == 1){

	
		printf("Linfonodomegalia cervical		> 1.03\n	Sensibilidade	100%	Especificidade	92,3%\n	Fonte:	10.1016/j.ejrad.2009.07.039\n\n");	
		printf("Nodulos tireoidianos\n");
		printf(" 	Adenoma folicular (n=9)		1.76 +/- 0.15	\n");
		printf(" 	Adenomatous nodule (n = 19)		1.81 +/- 0.27	\n");
		printf(" 	Papillary carcinoma (n = 8)		0.63 +/- 0.32	\n");
		printf(" 	Follicular carcinoma (n = 3)		0.72 +/- 0.17	\n");
		printf(" 	Medullary carcinoma (n = 1)		0.59	\n");
		printf(" 	Anaplastic carcinoma (n = 1)		0.45	\n");
		printf("	Fonte:	10.1016/j.ejrnm.2013.10.001		\n\n");
			
		printf("	Nodulos tireoidianos frios (Tc99m)			\n");
		printf("	Carcinoma (n=20)		2.73 +/- 0.65	\n");
		printf("	Adenoma (n=5)		1.93 +/- 0.25	\n");
		printf("	Parenquima normal (n=20)		1.439 +/- 0.648	\n");
		printf("	Parenquima normal (n=5)		1.341 +/- 0.245	\n");
		printf(" 	Source: 10.3174/ajnr.A1338\n\n");

		printf("Colesteatoma VS Other tissues			\n");
		printf("	Colesteatoma (n = 45)		0.539 a 0.873	\n");
		printf(" 	Other tissues (n = 25)		1.513 a 2.105	\n");
		printf("	Source: 10.1148/radiol.13130065\n");
}
	else{
	};
	
	getchar();
	
	return 0;
	
}
