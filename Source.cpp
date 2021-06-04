
#include "Header.h"



/*
int f6[10], f3[10], f5[10], f2[10]; // размеры в мм
int naShodf5[10];
int qf6[10], qf3[10]; //количество профиля в шт
int qu_proemov = 0;
*/
ofstream fout;//запись в файл
/*
struct Proem { //структура проема
	bool impost;
	int l;
	int h; //длина и высота проема
	int stvorkiVProem ;
	int prishepka;
	int f6,f3,f5,f2; // размеры в мм
	int naShodf5;
	int qf6,qf3; //количество профиля в шт
	int qf5;  //количество профиля в шт
	int steklo[3];
	int stekloNiz[3];
	int qSteklo;
	int qStekloNiz;
	int verhImposta;
};

Proem proem = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
*/
//структура
void zaproem(int) {
	//Proem proem;
	
	bool impost;
	int l;
	int h; //длина и высота проема
	int stvorkiVProem;
	int prishepka;
	
	//int qf5 = 0;  //количество профиля в шт
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

	switch ( stvorkiVProem) { //количество ф6 и размеры ф3
	case 2:
		 qf6[qu_proemov] = 4;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 26) / 2 + 15 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 38) / 2 + 15 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 50) / 2 + 15 - 40;
		}
		break;
	case 3:
		 qf6[qu_proemov] = 6;

		if ( prishepka == 0) {
			 f3[qu_proemov] =
				( l - 26 - 30) / 3 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 38 - 30) / 3 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 50 - 30) / 3 + 30 - 40;
		}
		break;
	case 4:
		 qf6[qu_proemov] = 8;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 26 - 30) / 4 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 38 - 30) / 4 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 50 - 30) / 4 + 30 - 40;
		}
		break;
	case 5:
		 qf6[qu_proemov] = 10;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 39 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 51 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 63 - 60) / 5 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3[qu_proemov] = ( l - 75 - 60) / 5 + 30 - 40;
		}
		break;
	case 6:
		 qf6[qu_proemov] = 12;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 39 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 51 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 63 - 60) / 6 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3[qu_proemov] = ( l - 75 - 60) / 6 + 30 - 40;
		}
		break;
	case 7:
		 qf6[qu_proemov] = 14;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 39 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 51 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 63 - 60) / 7 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3[qu_proemov] = ( l - 75 - 60) / 7 + 30 - 40;
		}
		break;
	case 8:
		 qf6[qu_proemov] = 16;

		if ( prishepka == 0) {
			 f3[qu_proemov] = ( l - 39 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 1) {
			 f3[qu_proemov] = ( l - 51 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 2) {
			 f3[qu_proemov] = ( l - 63 - 60) / 8 + 30 - 40;
		}
		else if ( prishepka == 3) {
			 f3[qu_proemov] = ( l - 75 - 60) / 8 + 30 - 40;
		}
		break;
	default:
		break;
	}

	if ( stvorkiVProem > 4) { //размеры и количество ф5 на сход

		 naShodf5[qu_proemov] =  h - 38;
	}
	if ( impost) { //количество ф3
		 qf3[qu_proemov] =  stvorkiVProem * 3;
	}
	else
		 qf3[qu_proemov] =  stvorkiVProem * 2;

	 f2[qu_proemov] =  l; //размеры ф2

	 f6[qu_proemov] =  h - 38; //размеры ф6
	 f5[qu_proemov] =  h - 16; //размеры ф5

  //cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;

	 steklo[0] =  f3[qu_proemov] - 2; //ширина стекла
	 
	 qSteklo =  stvorkiVProem;


	if ( impost) {
		 steklo[1] =  f6[qu_proemov] -  verhImposta - 34;
		 stekloNiz[1] =  verhImposta - 43 - 33;
		 stekloNiz[0] = steklo[0];
		 qStekloNiz =  stvorkiVProem;
	}
	else  steklo[1] =  f6[qu_proemov] - 86; //высота стекла

//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;

	cout << "f2 - " <<  f2[qu_proemov] << " - 2 шт.\n";
	cout << "f3 - " <<  f3[qu_proemov] << " - " <<  qf3[qu_proemov] << " шт.\n";
	
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;
	if ( naShodf5[qu_proemov] > 0) {
		cout << "f5 - " <<  naShodf5[qu_proemov] << " - 3 шт.\n";
	} else cout << "f5 - " << f5[qu_proemov] << " - "/* <<  qf5*/ << "2 шт.\n";
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl <<proem[qu_proemov].f5 << endl <<proem[qu_proemov].qf5<<"\n";
	cout << "f6 - " <<  f6[qu_proemov] << " - " <<  qf6[qu_proemov] << " шт.\n";
	for (int i = 0; i < 10; i++) {
		cout << "~";
	}
	cout << "\nsteklo - " <<  steklo[0] << "x"
		<<  steklo[1] << " - " <<  qSteklo
		<< " шт.\n";
	if ( impost) {
		cout << "\nsteklo Niz - " <<  stekloNiz[0] << "x"
			<<  stekloNiz[1] << " - "
			<<  qStekloNiz << " шт.\n";
	}

	fout.open("text.txt", ios::app);
	fout << "\nProem " << qu_proemov + 1;
	fout << "\nf2 - " <<  f2[qu_proemov] << " - 2 шт.\n";
	fout << "f3 - " <<  f3[qu_proemov] << " - " <<  qf3[qu_proemov]
		<< " шт.\n";
	fout << "f5 - " <<  f5[qu_proemov] << " - "/* <<  qf5*/<< "2 шт.\n";
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl << proem[qu_proemov].f5 << endl << proem[qu_proemov].qf5;
	if ( naShodf5[qu_proemov] > 0) {
		fout << "f5 - " <<  naShodf5[qu_proemov] << " - 1 шт.\n";
	}
	//cout << "\nalarm" << proem[qu_proemov].qf6 << endl <<proem[qu_proemov].f5 << endl <<proem[qu_proemov].qf5<<"\n";
	fout << "f6 - " <<  f6[qu_proemov] << " - " <<  qf6[qu_proemov] << " шт.\n";
	
	fout << "\nsteklo - " <<  steklo[0] << "x"
		<<  steklo[1] << " - " <<  qSteklo
		<< " шт.\n";
	if ( impost) {
		fout << "\nsteklo Niz - " <<  stekloNiz[0] << "x"
			<<  stekloNiz[1] << " - "
			<<  qStekloNiz << " шт.\n";
	}
	for (int i = 0; i < 20; i++) {
		fout << "~";
	}
	cout << "\n";
	fout.close();
}

void palki() {

	int qpf2 = 0, qpf3 = 0, qpf5 = 0, qpf6 = 0;


	for (int x = 0; x < i; x++) {

		if (f2[x] * 2 >= 6000) { // f2
			qpf2 += 2;
		}
		else {
			qpf2++;
		}

		if (f3[x] * qf3[x] <= 6000) { // f3
			qpf3 += 1;
		}
		if (f3[x] * qf3[x] > 6000) {
			qpf3 += 2;
		}
		if (f3[x] * qf3[x] > 12000) {
			qpf3 += 3;
		}
		if (f3[x] * qf3[x] > 18000) {
			qpf3 += 4;
		}

		if (naShodf5[x] > 0) { // f5
			if (f5[x] * 3 > 6000) qpf5 += 2;
			else qpf5 += 1;
		}
		else {
			if (f5[x] * 2 > 6000) qpf5 += 2;
			else qpf5 += 1;
		}

		if (f6[x] * qf6[x] <= 6000) { // f6
			qpf6 += 1;
		}
		if (f6[x] * qf6[x] > 6000) {
			qpf6 += 2;
		}
		if (f6[x] * qf6[x] > 12000) {
			qpf6 += 3;
		}
		if (f6[x] * qf6[x] > 18000) {
			qpf6 += 4;
		}
		if (f6[x] * qf6[x] > 24000) {
			qpf6 += 5;
		}


	}


		fout.open("text.txt", ios::app);
		cout << endl
			<< "f2 - " << qpf2 << endl
			<< "f3 - " << qpf3 << endl
			<< "f5 - " << qpf5 << endl
			<< "f6 - " << qpf6 << endl;
		fout << endl 
			<< "f2 - " << qpf2 << endl 
			<< "f3 - " << qpf3 << endl 
			<< "f5 - " << qpf5 << endl 
			<< "f6 - " << qpf6 << endl;
		fout.close();
	
}


int main() {
	setlocale(LC_ALL, "Russian");
	
	//int qu_proemov; // счетчик для контроля номера проема
	cout << "kol-vo proemov\n";
	cin >> i;
	cout << "color\n";
	cin >> color;

	fout.open("text.txt");
	fout << "New\n";
	fout << color << "\n";
	fout.close();

	

	for (; qu_proemov < i; qu_proemov++) {
		/*
		 impost = 0;
		 l = 0;
		 h = 0; //длина и высота проема
		 stvorkiVProem = 0;
		 prishepka = 0;
		 f6 = 0; // размеры в мм
		 f3 = 0;
		 f5 = 0;
		 f2 = 0;
		 naShodf5 = 0;
		 qf6 = 0; //количество профиля в шт
		 qf3 = 0;
		 qf5 = 2;  //количество профиля в шт
		 steklo[0] = 0, 0;
		 stekloNiz[0] = 0, 0;
		 qSteklo = 0;
		 qStekloNiz = 0;
		 verhImposta = 0;
		*/
		zaproem(qu_proemov);
		//print(proem);
		
	}
	palki();
	//system("print text.txt");
	

	system ("pause");
	return 0;
}