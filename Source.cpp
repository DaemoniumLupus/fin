
#include "Header.h"





ofstream fout;//������ � ����
/*
struct Proem { //��������� ������
	bool impost;
	int l;
	int h; //����� � ������ ������
	int stvorkiVProem ;
	int prishepka;
	int f6,f3,f5,f2; // ������� � ��
	int naShodf5;
	int qf6,qf3; //���������� ������� � ��
	int qf5;  //���������� ������� � ��
	int steklo[3];
	int stekloNiz[3];
	int qSteklo;
	int qStekloNiz;
	int verhImposta;
};

Proem proem = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
*/
void zaproem(int) {
	//Proem proem;
	
	bool impost;
	int l;
	int h; //����� � ������ ������
	int stvorkiVProem;
	int prishepka;
	int f6, f3 = 0, f5, f2; // ������� � ��
	int naShodf5 = 0;
	int qf6, qf3; //���������� ������� � ��
	int qf5 = 0;  //���������� ������� � ��
	int steklo[3];
	int stekloNiz[3];
	int qSteklo;
	int qStekloNiz;
	int verhImposta;
	
	
	cout << "vvedite h\n";
	cin >>  h;
	cout << "vvedite l\n";
	cin >>  l;
	cout << "kol-vo stvorok\n";
	cin >>  stvorkiVProem;
	cout << "impost?1-0\n";
	cin >>  impost;
	if ( impost) {
		cout << "verh imposta";
		cin >>  verhImposta;
	}
	cout << "kol-vo prishepok\n";
	cin >>  prishepka;

	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;

	switch ( stvorkiVProem) { //���������� �6 � ������� �3
	case 2:
		 qf6 = 4;

		if ( prishepka == 0) {
			 f3 = ( l - 26) / 2 + 15 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 38) / 2 + 15 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 50) / 2 + 15 - 40;
		}
		break;
	case 3:
		 qf6 = 6;

		if ( prishepka == 0) {
			 f3 =
				( l - 26 - 30) / 3 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 38 - 30) / 3 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 50 - 30) / 3 + 30 - 40;
		}
		break;
	case 4:
		 qf6 = 8;

		if ( prishepka == 0) {
			 f3 = ( l - 26 - 30) / 4 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 38 - 30) / 4 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 50 - 30) / 4 + 30 - 40;
		}
		break;
	case 5:
		 qf6 = 10;

		if ( prishepka == 0) {
			 f3 = ( l - 39 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 51 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 63 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3 = ( l - 75 - 60) / 5 + 30 - 40;
		}
		break;
	case 6:
		 qf6 = 12;

		if ( prishepka == 0) {
			 f3 = ( l - 39 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 51 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 63 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3 = ( l - 75 - 60) / 6 + 30 - 40;
		}
		break;
	case 7:
		 qf6 = 14;

		if ( prishepka == 0) {
			 f3 = ( l - 39 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 51 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 63 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3 = ( l - 75 - 60) / 7 + 30 - 40;
		}
		break;
	case 8:
		 qf6 = 16;

		if ( prishepka == 0) {
			 f3 = ( l - 39 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3 = ( l - 51 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3 = ( l - 63 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3 = ( l - 75 - 60) / 8 + 30 - 40;
		}
		break;
	default:
		break;
	}

	if ( stvorkiVProem > 4) { //������� � ���������� �5 �� ����

		 naShodf5 =  h - 38;
	}
	if ( impost) { //���������� �3
		 qf3 =  stvorkiVProem * 3;
	}
	else
		 qf3 =  stvorkiVProem * 2;

	 f2 =  l; //������� �2

	 f6 =  h - 38; //������� �6
	 f5 =  h - 16; //������� �5

  //cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;

	 steklo[0] =  f3 - 2; //������ ������
	 stekloNiz[0] =  steklo[0];
	 qSteklo =  stvorkiVProem;


	if ( impost) {
		 steklo[1] =  f6 -  verhImposta - 34;
		 stekloNiz[1] =  verhImposta - 43 - 33;
		 qStekloNiz =  stvorkiVProem;
	}
	else  steklo[1] =  f6 - 86; //������ ������

//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;

	cout << "f2 - " <<  f2 << " - 2 ��.\n";
	cout << "f3 - " <<  f3 << " - " <<  qf3
		<< " ��.\n";
	cout << "f5 - " <<  f5 << " - " <<  qf5
		<< " ��.\n";
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;
	if ( naShodf5 > 0) {
		cout << "f5 - " <<  naShodf5 << " - 1 ��.\n";
	}
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl <<proem[qu_proemov].f5 << endl <<proem[qu_proemov].qf5<<"\n";
	cout << "f6 - " <<  f6 << " - " <<  qf6 << " ��.\n";
	for (int i = 0; i < 10; i++) {
		cout << "~";
	}
	cout << "\nsteklo - " <<  steklo[0] << "x"
		<<  steklo[1] << " - " <<  qSteklo
		<< " ��.\n";
	if ( impost) {
		cout << "\nsteklo Niz - " <<  stekloNiz[0] << "x"
			<<  stekloNiz[1] << " - "
			<<  qStekloNiz << " ��.\n";
	}

	fout.open("text.txt", ios::app);
	fout << "f2 - " <<  f2 << " - 2 ��.\n";
	fout << "f3 - " <<  f3 << " - " <<  qf3
		<< " ��.\n";
	fout << "f5 - " <<  f5 << " - " <<  qf5
		<< " ��.\n";
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;
	if ( naShodf5 > 0) {
		fout << "f5 - " <<  naShodf5 << " - 1 ��.\n";
	}
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl <<proem[qu_proemov].f5 << endl <<proem[qu_proemov].qf5<<"\n";
	fout << "f6 - " <<  f6 << " - " <<  qf6 << " ��.\n";
	
	fout << "\nsteklo - " <<  steklo[0] << "x"
		<<  steklo[1] << " - " <<  qSteklo
		<< " ��.\n";
	if ( impost) {
		fout << "\nsteklo Niz - " <<  stekloNiz[0] << "x"
			<<  stekloNiz[1] << " - "
			<<  qStekloNiz << " ��.\n";
	}
	for (int i = 0; i < 20; i++) {
		fout << "~";
	}
	cout << "\n";
	fout.close();
}

int main() {
	setlocale(LC_ALL, "Russian");
	int i; // ���������� �������
	//int qu_proemov; // ������� ��� �������� ������ ������
	cout << "kol-vo proemov\n";
	cin >> i;
	for (int qu_proemov = 0; qu_proemov < i; qu_proemov++) {
		/*
		 impost = 0;
		 l = 0;
		 h = 0; //����� � ������ ������
		 stvorkiVProem = 0;
		 prishepka = 0;
		 f6 = 0; // ������� � ��
		 f3 = 0;
		 f5 = 0;
		 f2 = 0;
		 naShodf5 = 0;
		 qf6 = 0; //���������� ������� � ��
		 qf3 = 0;
		 qf5 = 2;  //���������� ������� � ��
		 steklo[0] = 0, 0;
		 stekloNiz[0] = 0, 0;
		 qSteklo = 0;
		 qStekloNiz = 0;
		 verhImposta = 0;
		*/
		zaproem(qu_proemov);
		//print(proem);
		
		
	}
	system("print text.txt");

	system("pause");
	return 0;
}