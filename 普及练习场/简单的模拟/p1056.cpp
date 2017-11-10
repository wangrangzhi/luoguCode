#include<bits/stdc++.h>
using namespace std;

struct pairBettween {
	int xi;
	int yi;
	int pi;
	int qi;
} ;

struct showTime
{
	int line;
	int showCheck;

};

bool moreCheck(const showTime &lhs, const showTime &rhs) {
    return lhs.showCheck > rhs.showCheck;
}

bool underTheLine(const showTime &lhs, const showTime &rhs) {
    return lhs.line < rhs.line;
}

int main() {

	int M,N,K,L,D;
	cin >> M >> N >> K >> L >> D;


	pairBettween pairStu[D];

	for(int i = 0; i<D; i++) {
		cin >> pairStu[i].xi >> pairStu[i].yi >> pairStu[i].pi >> pairStu[i].qi;
	}

	showTime cross[M];
	int crossInt = 0;
	memset(cross, 0, M);
	showTime vertical[N];
	int verticalInt = 0;
	memset(vertical, 0, N);


	if( K == 0 && L == 0) {
		return 0;
	}

	bool Exist = false;

	for(int i = 0; i<D; i++) {
		if(pairStu[i].xi == pairStu[i].pi) {
			
			int save1 = pairStu[i].yi < pairStu[i].qi ? pairStu[i].yi : pairStu[i].qi;
			
			for(int j = 0; j<N; j++) {
				if(vertical[j].line == save1)
				{
					Exist = true;
					vertical[j].showCheck++;	
				}
			}
			
			if(!Exist) {
				vertical[verticalInt].line = save1;
				verticalInt++;
			}

		}

		if(pairStu[i].yi == pairStu[i].qi) {
			
			int save2 = pairStu[i].xi < pairStu[i].pi ? pairStu[i].xi : pairStu[i].pi;

			for(int j = 0; j<K; j++) {
				if(cross[j].line == save2)
				{
					Exist = true;
					cross[j].showCheck++;	
					
				}
			}

			if(!Exist) {
				cross[crossInt].line = save2;
				crossInt++;
			}
		}

		Exist = false;
	}

//	stable_sort(cross, cross+K);
	stable_sort(vertical, vertical+ sizeof(vertical)/sizeof(showTime), moreCheck);
	
	cout << "_______________________________\n";

//	stable_sort(vertical, vertical+ sizeof(showTime)*L, underTheLine);

	for(int i = 0 ; i<L; i++) {
	
		
		
		cout << vertical[i].line << " " << ;
	}

	cout << "\n";

	for(int i = 0 ; i<L; i++) {
	//	cout << vertical[i] << " ";
	}

	return 0;
}




