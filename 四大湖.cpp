#include<iostream>
using namespace std;
int main() {
	int by, dt, t, hz;
	for (by = 1; by <= 4; by++) {
		for (dt = 1; dt <= 4; dt++) {
			for (t = 1; t <= 4; t++) {
				for (hz = 1; hz <= 4; hz++) {
					if(
						(by != dt && by != t && by != hz && dt != t && dt != hz && t != hz)
						&&((dt==1)+(hz==4)+(by==3)==1)
						&&((hz==1)+(dt==4)+(by==2)+(t==3)==1)
						&&((hz==4)+(dt==3)==1)
						&&((by==1)+(t==4)+(hz==2)+(dt==3)==1)
						){
						cout << by << endl << dt << endl << t << endl << hz << endl;
						break;
					}
					
				}
			}
		}
	}
	return 0;
}