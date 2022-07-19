//https://school.programmers.co.kr/learn/courses/30/lessons/92334
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
vector<int> solution(vector<string> id_list, vector<string> report, int k);//함수 선언
using namespace std;

int main() {
	vector<string> id_l, rep;//user, 신고보고서

	int us_n;
	cin >> us_n;//user 수
	for (int i = 0; i < us_n; i++) {
		string ele;//user 이름
		cin >> ele;
		id_l.push_back(ele);
	}

	int re_n;
	cin >> re_n;//신고 수
	cin.ignore();
		//cin으로 입력받을 경우, 변수에 '\n'을 저장하지 않으므로 입력 버퍼에 '\n' 찌꺼기가 남게 된다.
		//cin으로 입력받은 후, 버퍼에 '\n'가 차있는 상태에서 getline을 사용할 경우, '\n'문자로 인해 정상적으로 입력을 받지 못하는 이슈
	
	for (int i = 0; i < re_n; i++) {
		string ele;//신고하는 사람 + 불량 이용자
		getline(cin, ele);
		rep.push_back(ele);//보고서에 추가
	}

	int k;//정지횟수 기준
	solution(id_l, rep, k);//문제 함수
	return 0;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer;
	map<string, int> rep_n;//신고당한 횟수<이름,횟수>
	map<string, set<string>> rep_l;//신고한 리스트<신고자,불량자set>

	for (string s : report) {//report안의 구성요소가 s로 들어감
		//문자열 파싱
		int blank = s.find(' ');
		string from = s.substr(0, blank);
		string to = s.substr(blank);

		if (rep_l[from].find(to) == rep_l[from].end()) {//from이 to를 신고한 이력이 없다면
			rep_n[to]++;//to선언과 동시에 to가 신고당한 횟수 추가
			rep_l[from].insert(to);//from선언과 동시에 from이 to신고한거 추가
		}
	}
	
	for (string s : id_list) {
		int res = 0;//신고 성공한 개수
		for (string str : rep_l[s])//신고한 불량자 set중에서
			if (rep_n[str] >= k) res++;//기준 넘는 사람 수 세기
		answer.push_back(res);//총 사람 수 넣어주기
	}

	return answer;
}