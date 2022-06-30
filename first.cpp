#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
//vector<int> solution(vector<string> id_list, vector<string> report, int k);//함수 선언
using namespace std;

int main() {
	vector<string> id_l, rep;

	//int us_n;
	//cin >> us_n;//user 수
	//for (int i = 0; i < us_n; i++) {
	//	string ele;
	//	cin >> ele;
	//	id_l.push_back(ele);
	//}

	int re_n;
	cin >> re_n;//신고 수
	cin.ignore();// cin으로 입력받을 경우, 변수에 '\n'을 저장하지 않으므로 입력 버퍼에 '\n' 찌꺼기가 남게 된다.
	for (int i = 0; i < re_n; i++) {
		string ele;
		cout << "값1 : " << ele << endl;
		getline(cin, ele);
		cout << "값2 : " << ele << endl;
		rep.push_back(ele);
	}
	cout << rep.size() << endl;
	for (int i = 0; i < re_n; i++) {
		cout << "원소 : "<<rep[i] << endl;
	}

	int k;//정지횟수 기준
	//solution(id_l, rep, k);//문제 함수
	return 0;
}

//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//	vector<int> answer;
//	map<string, int> rep_n;//신고당한 횟수
//	map<string, set<string>> rep_l;//신고한 리스트
//
//	for (int i = 0; i < id_list.size(); i++) {
//
//	}
//
//	return answer;
//}