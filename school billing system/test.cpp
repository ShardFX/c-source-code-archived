/**************************************************************
High School Billing System
Version: 0.8a

Hard-coded:
There are 10 classes in this high school
Fine given is 1% (simple interest) if late by a month
Salary is

Bugs/Problems:
Records missing when performing certain tasks
(FIXED) Name displayed as 1 character
(PARTIAL FIX) Accepts invalid date
(PARTIAL FIX) Calculate fee is not working as intended
(IN PROGRESS) GUI is unorganized

Created by: Anwar Haikal Ruslan (0322126) & Zainab
Date created: Thursday, Nov 10 2016
Last date modified: Sunday, Nov 20 2016
**************************************************************/

/* header files */
#include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<conio.h>
#include<windows.h>

/* structures */
struct dat {
	int date, month;
};

struct student {
	struct dat dt;
	float fee, fine, total, adv, due;
	char n[50];
	int roll, cl;
} stud, s;

struct teacher {
	struct dat dt;
	char n[50];
	float salary, adv, total;
	int id, no;
} teach, t;

/* file declaration */
FILE *fs, *ft;

/* function prototypes */
int chkdat(int, int);		// check date
void addRecords(int);		// add records
void modifyRecords(int);	// modify records
void searchRecords(int);	// search records
void deleteRecords(int);	// delete records
void salary(int);			// calculate salary
int clscanf();				//check class (1-10)
void start();
void fee(int);
void ext();

/* global variables */
int mm, dd;

/* main function */
int main(void) {

	register size_t i;

	system("color 0a");
	printf("\n\t******************************************************************");
	printf("\n\t*                                                                *");
	printf("\n\t*                    HIGH SCHOOL BILLING SYSTEM                  *");
	printf("\n\t*                                                                *");
	printf("\n\t******************************************************************");
	printf("\n\tPRESS ANY KEY TO CONTINUE");

	for (i = 0; i < 5; i++) {
		printf(".");
		Sleep(250); // print every 0.5 seconds
	}

	getchar();
	system("cls"); //clear screen
	printf("\n");

	system("color 0a");
	printf("\n\tWELCOME TO THE SCHOOL BILLING SYSTEM PROGRAM \n\n\n");
	printf("\n\tPRESS ANY KEY TO START");

	for (i = 0; i < 5; i++) {
		printf(".");
		Sleep(250);
	}

	fflush(stdin);
	getchar();
	system("cls");
	system("color 0a");
	printf("\n\tPLEASE ENTER CURRENT DATE ( mm | dd ): \n\t");
	scanf("%d%d", &mm, &dd);
	mm = chkdat(mm, dd);
	start();
} // end function main

  /* functions */
void start() {

	int i, j;

	system("cls");
	printf("\n\t\tPLEASE ENTER ACCOUNT TYPE");
	printf("\n\t\t1:: Student");
	printf("\n\t\t2:: Teachers and Staffs");
	printf("\n\t\t3:: Exit");
	printf("\n\t\tAccount type choice  ");
	fflush(stdin);
	scanf("%d", &j);

	switch (j) {
	case 3:
		ext();
	case 1:
	{
		system("cls");
		printf("\n\t\tPLEASE ENTER THE CHOICE");
		printf("\n\t\t1:: Add record");
		printf("\n\t\t2:: Search record");
		printf("\n\t\t3:: Modify record");
		printf("\n\t\t4:: Delete record");
		printf("\n\t\t5:: Calculate fee");
		printf("\n\t\t6:: Exit");
		printf("\n\n\t\tEnter choice: ");
		fflush(stdin);
		scanf("%d", &i);

		switch (i) {
		case 1:
			addRecords(j);//function call
			start();//function call
		case 2:
			searchRecords(j);
			start();
		case 3:
			modifyRecords(j);
			start();
		case 4:
			deleteRecords(j);
			start();
		case 5:
			fee(mm);
			start();
		case 6:
			ext();
		default:
		{
			printf("\n\n\tInvalid entry!");
			printf("\n\nTo Account Type\n\n\t");
			system("pause");
			start();
		}
		}
	}
	case 2:
	{
		system("cls");
		printf("\n\t\tPLEASE ENTER THE CHOICE");
		printf("\n\t\t1:: Add record");
		printf("\n\t\t2:: Search record");
		printf("\n\t\t3:: Modify record");
		printf("\n\t\t4:: Delete record");
		printf("\n\t\t5:: Calculate Salary");
		printf("\n\t\t6:: Exit");
		printf("\n\n Enter choice  ");
		fflush(stdin);
		scanf("%d", &i);

		switch (i) {
		case 1:
			addRecords(j);
			start();
		case 2:
			searchRecords(j);
			start();
		case 3:
			modifyRecords(j);
			start();
		case 4:
			deleteRecords(j);
		case 5:
			salary(mm);
			start();
		case 6:
			ext();
		default:
		{
			printf("\n\n\tInvalid entry!");
			printf("\n\nTo Account Type\n\n\t");
			system("pause");
			start();
		}
		}
	}
	default:
	{
		printf("\n\n\tInvalid entry!");
		printf("\n\nTo Account Type\n\n\t");
		system("pause");
		start();
	}
	}
} // end function start

void addRecords(int j) {
	int dif, cdat, ddat, month = 0; // cdat = month till which fee is cleared
	float ff; //used in calculating of fee of different class
	char c = 'y';

	system("cls");
	printf("\n\t******************************************************************");
	printf("\n\t                                                                  ");
	printf("\n\t********************          ADD RECORD       *******************");
	printf("\n\t                                                                  ");
	printf("\n\t******************************************************************");

	if (j == 1) {
		while (c == 'y' || c == 'Y') {
			int a = 1;
			printf("\n\n\tEnter the name of student: ");
			fflush(stdin);
			// scanf("%c ", stud.n);
			scanf("%[^\n]", stud.n);
			printf("\n\tEnter the class: ");
			fflush(stdin);
			stud.cl = clscanf();
			printf("\n\tEnter the Roll No.: ");
			fflush(stdin);
			scanf("%2d", &stud.roll);
			printf("\n\tEnter month and day till which fee is paid: ");
			fflush(stdin);
			scanf("%2d%2d", &cdat, &ddat);
			cdat = chkdat(cdat, ddat);
			stud.dt.month = cdat;
			ff = stud.cl / 10.0;
			stud.fee = 1000 * (1 + ff); // fee of different classes
			dif = mm - stud.dt.month; // months of fee left to be paid
			stud.fine = (dif*stud.fee) * 1 / 100;
			stud.due = (dif)* stud.fee; // fees left to be paid

			if (dif == 1) {
				stud.total = stud.fee;
				stud.fine = 0;
			}
			else {
				stud.total = stud.fine + stud.due;
			} //for calculation of total fee

			fs = fopen("student", "ab+"); //opening a binary file in apend mode
			fwrite(&stud, sizeof(stud), 1, fs);
			fclose(fs);
			printf("\n\n\tDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}

	if (j == 2) {
		while (c == 'y' || c == 'Y') {

			int a = 1;

			printf("\n\nEnter name of teacher/staff:");
			fflush(stdin);
			scanf("%[^\n]", teach.n);

			printf("\nEnter teacher/staff id: ");
			fflush(stdin);
			scanf("%d", &teach.id);

			printf("\nEnter number of class/shift per month:: ");
			scanf("%d", &teach.no);
			fflush(stdin);
			printf("\nEnter month and day till which salary is paid::");
			scanf("%d%d", &teach.dt.month, &teach.dt.date);

			cdat = chkdat(cdat, ddat);
			teach.dt.month = cdat;
			teach.salary = teach.no * 500;
			teach.adv = (teach.dt.month - mm - 1) * teach.salary;

			if (teach.adv < 0) teach.adv = 0;

			teach.total = teach.salary;
			ft = fopen("teacher", "ab+");
			fwrite(&teach, sizeof(teach), 1, ft);
			fclose(ft);
			printf("\n\nDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		fflush(stdin);
		printf("\n\n");
		system("pause");
	}
} // end function addRecords

void searchRecords(int j) {
	char name[50], namet[50];
	int a = 1, choice;
	char c = 'y';
	if (j == 1) {
		while (c == 'y' || c == 'Y') {

			int a = 1;

			system("cls");
			printf("\n\t******************************************************************");
			printf("\n\t                                                                  ");
			printf("\n\t********************       SEARCH RECORD       *******************");
			printf("\n\t                                                                  ");
			printf("\n\t******************************************************************");

			printf("\n\n\t\tPLEASE CHOOSE SEARCH TYPE::");
			printf("\n\n\t\t1::Search by name::");
			printf("\n\n\t\t2::Search by cl::");
			printf("\n\n\t\t3::Search by roll no::");
			printf("\n\n\t\t4::Exit");
			printf("\n\n\t\t::Enter your choice:: ");

			fflush(stdin);
			scanf("%d", &choice);

			if (choice == 1) {

				a = 1;
				printf("\n\nEnter name of student to search: ");
				fflush(stdin);
				scanf("%[^\n]", name);
				fs = fopen("student", "rb");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					if (strcmpi(name, stud.n) == 0) {
						a = 0;
						printf("\nName = %s", stud.n);
						printf("\nClass = %d", stud.cl);
						printf("\nRoll no. = %d", stud.roll);
						printf("\nMonthly fee =%.2f", stud.fee);
						printf("\nLast fee paid in month = %2d", stud.dt.month);
						printf("\n\tDue=%.2f", stud.due);
						printf("\n\tFine=%.2f", stud.fine);
						printf("\n\tTotal=%.2f\n\n", stud.total);
					}
				}

				if (a == 1) {
					printf("\n\nRECORD NOT FOUND");
				}

				printf("\n\n");
				system("pause");
				fflush(stdin);
				fclose(fs);
			}
			else if (choice == 2) {
				int cl;
				a = 1;
				printf("\n\nEnter class of student to search: ");
				fflush(stdin);
				cl = clscanf();
				fs = fopen("student", "rb");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					if (stud.cl == cl) {
						a = 0;
						printf("\nName = %s", stud.n);
						printf("\nClass = %d", stud.cl);
						printf("\nRoll no. = %d", stud.roll);
						printf("\nMonthly fee =%.2f", stud.fee);
						printf("\nLast fee paid in month = %2d", stud.dt.month);
						printf("\n\tDue=%.2f", stud.due);
						printf("\n\tFine=%.2f", stud.fine);
						printf("\n\tTotal=%.2f\n\n", stud.total);
					}
				}

				if (a == 1)
					printf("\n\nRECORD NOT FOUND");

				printf("\n\n");
				system("pause");
				fflush(stdin);
				fclose(fs);
			}
			else if (choice == 3) {
				int rll;
				a = 1;
				printf("\n\nEnter roll of student to search: ");
				fflush(stdin);
				rll = clscanf();
				fs = fopen("student", "rb");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					if (strcmpi(name, stud.n) == 0) {
						a = 0;
						printf("\nName = %s", stud.n);
						printf("\nClass = %d", stud.cl);
						printf("\nRoll no. = %d", stud.roll);
						printf("\nMonthly fee =%.2f", stud.fee);
						printf("\nLast fee paid in month = %2d", stud.dt.month);
						printf("\n\tDue=%.2f", stud.due);
						printf("\n\tFine=%.2f", stud.fine);
						printf("\n\tTotal=%.2f\n\n", stud.total);
					}
				}

				if (a == 1)
					printf("\n\nRECORD NOT FOUND");

				printf("\n\n");
				system("pause");
				fflush(stdin);
				fclose(fs);
			}
			else if (choice == 4) {
				ext();
			}
			else {
				printf("\n\n\n\t\tINVALID ENTRY!\n\n\t\t");
				system("pause");
				searchRecords(1);
			}

			printf("\n\nDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}

	if (j == 2) {
		while (c == 'y' || c == 'Y') {
			int a = 1;
			printf("\n\nname of teacher/staff to search: ");
			fflush(stdin);
			scanf("%[^\n]", namet);
			ft = fopen("teacher", "rb");
			while (fread(&teach, sizeof(teach), 1, ft) == 1) {
				if (strcmp(namet, teach.n) == 0) {
					a = 0;
					printf("\nname = %s", teach.n);
					printf("\nteacher/staff id = %d", teach.id);
					printf("\nmonth till when salary is paid =%d", teach.dt.month);
					printf("\nmonthy salary = %.2f", teach.salary);
					printf("\nadvance paid = %.2f", teach.adv);
				}
			}

			if (a == 1)
				printf("\n\nRECORD NOT FOUND");

			printf("\n\n");
			system("pause");
			fflush(stdin);
			fclose(ft);
			printf("\n\nDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}
} // end function searchRecords

void modifyRecords(int j) {

	char name[50];
	int a = 1, choice, cl, rolno;
	char c = 'y';
	if (j == 1) {
		while (c == 'y' || c == 'Y') {
			system("cls");
			printf("\n\t******************************************************************");
			printf("\n\t                                                                  ");
			printf("\n\t*********************       MODIFY RECORD      *******************");
			printf("\n\t                                                                  ");
			printf("\n\t******************************************************************");

			printf("\n\n\t\tPLEASE CHOOSE MODIFY TYPE::");
			printf("\n\n\t\t1::Modify by name::");
			printf("\n\n\t\t2::Modify by name & class::");
			printf("\n\n\t\t3::Modify by name,class & roll no::");
			printf("\n\n\t\t4::Exit");
			printf("\n\n\t\t::Enter your choice:: ");
			fflush(stdin);
			scanf("%d", &choice);

			if (choice == 1) {
				int a = 0;
				printf("\n\nenter name of student to modify: ");
				fflush(stdin);
				scanf("%[^\n]", name);
				fs = fopen("student", "rb+");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					a = 1;
					if (strcmpi(name, stud.n) == 0) {
						a = 0;
						printf("\nenter new name of student: ");
						fflush(stdin);
						scanf("%[^\n]", stud.n);
						printf("\nenter new class of student: ");
						fflush(stdin);
						stud.cl = clscanf();
						printf("\nenter new roll of student: ");
						fflush(stdin);
						scanf("%d", &stud.roll);
						fseek(fs, -sizeof(stud), SEEK_CUR);
						fwrite(&stud, sizeof(stud), 1, fs);
						fclose(fs);
					}
				}
				if (a == 1)
					printf("\n\nRECORDS NOT FOUND");
				else
					printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");

				printf("\n\n");
				system("pause");
			}
			else if (choice == 2) {
				int a = 0;
				printf("\n\nenter name of student to modify: ");
				fflush(stdin);
				scanf("%[^\n]", name);
				printf("\n\nenter cl of student to modify: ");
				fflush(stdin);
				cl = clscanf();
				fs = fopen("student", "rb+");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					a = 1;
					if (strcmpi(name, stud.n) == 0 && cl == stud.cl) {
						a = 0;
						printf("\nenter new name of student: ");
						fflush(stdin);
						scanf("%[^\n]", stud.n);
						printf("\nenter new class of student: ");
						fflush(stdin);
						stud.cl = clscanf();
						printf("\nenter new roll no. of student: ");
						fflush(stdin);
						scanf("%d", &stud.roll);
						fseek(fs, -sizeof(stud), SEEK_CUR);
						fwrite(&stud, sizeof(stud), 1, fs);
						fclose(fs);
					}
				}

				if (a == 1)
					printf("\n\nRECORDS NOT FOUND");
				else
					printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");

				printf("\n\n");
				system("pause");
			}
			else if (choice == 3) {
				int a = 0;
				printf("\n\nenter name of student to modify: ");
				fflush(stdin);
				scanf("%[^\n]", name);
				printf("\n\nenter class of student to modify: ");
				fflush(stdin);
				cl = clscanf();
				printf("\n\nenter roll no of student to modify: ");
				fflush(stdin);
				scanf("%d", &rolno);
				fs = fopen("student", "rb+");
				while (fread(&stud, sizeof(stud), 1, fs) == 1) {
					a = 1;
					if (strcmpi(name, stud.n) == 0 && cl == stud.cl && rolno == stud.roll) {
						a = 0;
						printf("\nenter new name of student: ");
						fflush(stdin);
						scanf("%[^\n]", stud.n);
						printf("\nenter new class of student: ");
						fflush(stdin);
						stud.cl = clscanf();
						printf("\nenter new roll of student: ");
						fflush(stdin);
						scanf("%d", &stud.roll);
						fseek(fs, -sizeof(stud), SEEK_CUR);
						fwrite(&stud, sizeof(stud), 1, fs);
						fclose(fs);
					}
				}

				if (a == 1)
					printf("\n\nRECORDS NOT FOUND");
				else
					printf("\n\nRECORDS SUCCESSFULLY MODIFIED");

				printf("\n\n");
				system("pause");
			}
			else if (choice == 4) ext();
			else {
				printf("\n\n\n\t\tINVALID ENTRY!\n\n\t\t");
				system("pause");
				modifyRecords(1);
			}

			printf("\n\nDo you want to continue with the process (Y\N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}

	if (j == 2) {
		while (c == 'y' || c == 'Y') {
			int a = 1;
			printf("enter name of teacher to modify: ");
			fflush(stdin);
			scanf("%[^\n]", name);
			ft = fopen("teacher", "rb+");
			while (fread(&teach, sizeof(teach), 1, ft) == 1) {
				if (strcmpi(name, teach.n) == 0) {
					a = 0;
					printf("\nenter new name of teacher: ");
					fflush(stdin);
					scanf("%[^\n]", teach.n);
					printf("\nenter new id of teacher: ");
					fflush(stdin);
					scanf("%d", &teach.id);
					fseek(ft, -sizeof(teach), SEEK_CUR);
					fwrite(&teach, sizeof(teach), 1, ft);
					fclose(ft);
				}
			}

			if (a == 1)
				printf("\n\nRECORD NOT FOUND");
			else
				printf("\n\nRECORD SUCCESSFULLY  MODIFIED");
			printf("\n\n");
			system("pause");
			fflush(stdin);

			printf("\n\nDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}
} // end function modifyRecords

void deleteRecords(int j) {
	system("cls");
	printf("\n\t******************************************************************");
	printf("\n\t                                                                  ");
	printf("\n\t********************       DELETE RECORD       *******************");
	printf("\n\t                                                                  ");
	printf("\n\t******************************************************************");

	FILE *temp, *t1;
	int a = 1;
	char name[50], c = 'y';

	if (j == 1) {
		while (c == 'y' || c == 'Y') {
			int a = 1;
			printf("\n\nenter name of student to delete: ");
			fflush(stdin);
			scanf("%[^\n]", name);
			fs = fopen("student", "rb");
			temp = fopen("tempfile", "wb"); //opening of temporary file for deleting process
			while (fread(&stud, sizeof(stud), 1, fs) == 1) {
				if (strcmp(stud.n, name) == 0) {
					a = 0;
					continue;
				}
				else {
					fwrite(&stud, sizeof(stud), 1, temp);
				}
			}

			if (a == 1)
				printf("\n\nRECORD NOT FOUND");
			else
				printf("\n\nRECORD SUCCESSFULLY  DELETED");

			printf("\n\n");
			system("pause");
			fflush(stdin);

			fclose(fs);
			fclose(temp);

			system("del student");/*all data except the data to be
								  deleted in student were 1st moved to temp and data in student
								  was deleted*/
			system("ren tempfile, student");//renaming temp to student

			printf("\n\nDo you want to continue with the process (Y\N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}

	if (j == 2) {
		a = 1;
		char namet[50];
		while (c == 'y' || c == 'Y') {
			printf("\n\nEnter name of teacher to delete record: ");
			fflush(stdin);
			scanf("%[^\n]", namet);
			ft = fopen("teacher", "rb");
			t1 = fopen("tempfile1", "wb");
			while (fread(&teach, sizeof(teach), 1, ft) == 1) {
				if (strcmp(teach.n, namet) == 0) {
					a = 0;
					continue;
				}
				else {
					fwrite(&teach, sizeof(teach), 1, t1);
				}
			}

			if (a == 1)
				printf("\n\nRECORD NOT FOUND");
			else
				printf("\n\nRECORD SUCCESSFULLY  DELETED");

			printf("\n\n");
			system("pause");
			fflush(stdin);

			fclose(ft);
			fclose(t1);
			system("del teacher");
			system("ren tempfile1, teacher");
			printf("\n\nDo you want to continue with the process (Y/N): ");
			fflush(stdin);
			c = getchar();
		}
		getchar();
	}
} // end function deleteRecords

void salary(int mm) {
	system("cls");
	printf("\n\t******************************************************************");
	printf("\n\t                                                                  ");
	printf("\n\t*********************          SALARY         ********************");
	printf("\n\t                                                                  ");
	printf("\n\t******************************************************************");

	FILE *f, *t;
	int a = 1, day;
	char name[50], c = 'y';
	int month, dif, id;
	while (c == 'y' || c == 'Y') {
		int a = 1;
		fflush(stdin);
		printf("\n\nEnter name: ");
		scanf("%[^\n]", name);
		printf("\n\nEnter ID: ");
		scanf("%d", &id);
		f = fopen("teacher", "rb+");
		t = fopen("te", "wb+");
		while (fread(&teach, sizeof(teach), 1, f) == 1) { //file opened
			if (strcmp(teach.n, name) == 0) { //name entered is compared to the existing name in file
				float lsal;
				a = 0;
				printf("\n\nEnter the month till which salary is to be paid:: ");
				fflush(stdin);
				scanf("%d", &month);
				month = chkdat(month, day);
				teach.adv = (month - mm - 1) * teach.salary;
				if (teach.adv < 0) teach.adv = 0;
				lsal = mm - teach.dt.month; //months of salary left to be paid
				if (lsal < 0) lsal = 0;
				teach.total = teach.adv + teach.salary * (1 + lsal);
				if (month == teach.dt.month) teach.total = 0;

				printf("\nmonthy salary left to be paid: %.2f", lsal);
				printf("\ntotal: %.2f", teach.total);
				printf("\nadvance: %.2f", teach.adv);
				teach.dt.month = month;
				fwrite(&teach, sizeof(teach), 1, t);
				fclose(f);
				fclose(t);

				if (a == 1)
					printf("\n\nRECORD NOT FOUND");

				printf("\n\n");
				system("pause");
				fflush(stdin);
				system("del teacher");
				system("ren te, teacher");
			}
		}
		printf("\n\nDo you want to continue with the process (Y/N): ");
		fflush(stdin);
		c = getchar();
	}
	getchar();
} // end function salary

void fee(int mm) {
	system("cls");
	printf("\n\t******************************************************************");
	printf("\n\t                                                                  ");
	printf("\n\t*********************            FEE           *******************");
	printf("\n\t                                                                  ");
	printf("\n\t******************************************************************");
	FILE *f, *t;
	int a = 0;
	char name[50], c = 'y';
	int clas, roll, month, dif;
	while (c == 'y' || c == 'Y') {
		int a = 1, day = 0;
		fflush(stdin);
		printf("\n\nEnter name: ");
		scanf("%[^\n]", name);
		printf("\n\nEnter class: ");
		fflush(stdin);
		clas = clscanf();
		printf("\n\nEnter roll: ");
		fflush(stdin);
		scanf("%d", &roll);
		f = fopen("student", "rb+");
		t = fopen("te", "wb");
		while (fread(&stud, sizeof(stud), 1, f) == 1) {
			if (strcmp(stud.n, name) == 0 && clas == stud.cl && roll == stud.roll) {
				a = 0;
				printf("\n\nEnter the month till which fee to be paid: ");
				fflush(stdin);
				scanf("%d", &month);
				month = chkdat(month, day);
				dif = mm - stud.dt.month;
				stud.fine = (dif * stud.fee) * 0.01;
				stud.due = (dif)* stud.fee;
				if (stud.fine < 0) stud.fine = 0;
				if (stud.due < 0) stud.due = 0;
				if (stud.total < 0) stud.total = 0;
				stud.total = stud.fine + stud.due + stud.adv;
				printf("\nfine: %.2f", stud.fine);
				printf("\ndue: %.2f", stud.due);
				printf("\ntotal: %.2f", stud.total);
				printf("\nadvance: %.2f", stud.adv);
				stud.dt.month = month;
				stud.total = 0;
				stud.fine = 0;
				stud.due = 0;
				fwrite(&stud, sizeof(stud), 1, t);
			}
		}
		if (a == 1)
			printf("\n\nRECORD NOT FOUND");

		printf("\n\n");
		system("pause");
		fflush(stdin);

		fclose(f);
		fclose(t);
		system("del student");
		system("ren te, student");
		printf("\n\nDo you want to continue with the process (Y/N): ");
		fflush(stdin);
		c = getchar();
	}
	getchar();
} // end function fee

void ext() {
	int i;
	system("color 0c");
	printf("\n\n\t\tThank you for using the School Billing System Program\n\n\t\t");
	system("pause");
	system("cls");
	printf("\n\n\t\t\tExiting\n\n");

	for (i = 1; i <= 60; i++) {
		Sleep(50);
		printf("*");
	}
	exit(0);
} // end function ext

int chkdat(int mnt, int dnt) {
	int mon, day;
	if (mnt > 12 || mnt < 1 || dnt > 31 || dnt < 1) {
		MessageBox(0, "Invalid Date!\nEnter Again", "Error!", 0);

		fflush(stdin);
		scanf("%d%d", &mon, &day);
		mon = chkdat(mon, day);
	}
	else {
		return(mnt);
	}
} // end function chkdat

int clscanf() {
	int mnt, mon;
	fflush(stdin);
	scanf("%d", &mnt);
	if (mnt > 10 || mnt < 1) {
		MessageBox(0, "Invalid Class!\nEnter Class", "Error!", 0);
		fflush(stdin);
		mon = clscanf();
	}
	else
		return mnt;
} // end function clscanf
