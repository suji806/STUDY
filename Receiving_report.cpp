//https://school.programmers.co.kr/learn/courses/30/lessons/92334
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
vector<int> solution(vector<string> id_list, vector<string> report, int k);//�Լ� ����
using namespace std;

int main() {
	vector<string> id_l, rep;//user, �Ű���

	int us_n;
	cin >> us_n;//user ��
	for (int i = 0; i < us_n; i++) {
		string ele;//user �̸�
		cin >> ele;
		id_l.push_back(ele);
	}

	int re_n;
	cin >> re_n;//�Ű� ��
	cin.ignore();
		//cin���� �Է¹��� ���, ������ '\n'�� �������� �����Ƿ� �Է� ���ۿ� '\n' ��Ⱑ ���� �ȴ�.
		//cin���� �Է¹��� ��, ���ۿ� '\n'�� ���ִ� ���¿��� getline�� ����� ���, '\n'���ڷ� ���� ���������� �Է��� ���� ���ϴ� �̽�
	
	for (int i = 0; i < re_n; i++) {
		string ele;//�Ű��ϴ� ��� + �ҷ� �̿���
		getline(cin, ele);
		rep.push_back(ele);//������ �߰�
	}

	int k;//����Ƚ�� ����
	solution(id_l, rep, k);//���� �Լ�
	return 0;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer;
	map<string, int> rep_n;//�Ű���� Ƚ��<�̸�,Ƚ��>
	map<string, set<string>> rep_l;//�Ű��� ����Ʈ<�Ű���,�ҷ���set>

	for (string s : report) {//report���� ������Ұ� s�� ��
		//���ڿ� �Ľ�
		int blank = s.find(' ');
		string from = s.substr(0, blank);
		string to = s.substr(blank);

		if (rep_l[from].find(to) == rep_l[from].end()) {//from�� to�� �Ű��� �̷��� ���ٸ�
			rep_n[to]++;//to����� ���ÿ� to�� �Ű���� Ƚ�� �߰�
			rep_l[from].insert(to);//from����� ���ÿ� from�� to�Ű��Ѱ� �߰�
		}
	}
	
	for (string s : id_list) {
		int res = 0;//�Ű� ������ ����
		for (string str : rep_l[s])//�Ű��� �ҷ��� set�߿���
			if (rep_n[str] >= k) res++;//���� �Ѵ� ��� �� ����
		answer.push_back(res);//�� ��� �� �־��ֱ�
	}

	return answer;
}