#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
//vector<int> solution(vector<string> id_list, vector<string> report, int k);//�Լ� ����
using namespace std;

int main() {
	vector<string> id_l, rep;

	//int us_n;
	//cin >> us_n;//user ��
	//for (int i = 0; i < us_n; i++) {
	//	string ele;
	//	cin >> ele;
	//	id_l.push_back(ele);
	//}

	int re_n;
	cin >> re_n;//�Ű� ��
	cin.ignore();// cin���� �Է¹��� ���, ������ '\n'�� �������� �����Ƿ� �Է� ���ۿ� '\n' ��Ⱑ ���� �ȴ�.
	for (int i = 0; i < re_n; i++) {
		string ele;
		cout << "��1 : " << ele << endl;
		getline(cin, ele);
		cout << "��2 : " << ele << endl;
		rep.push_back(ele);
	}
	cout << rep.size() << endl;
	for (int i = 0; i < re_n; i++) {
		cout << "���� : "<<rep[i] << endl;
	}

	int k;//����Ƚ�� ����
	//solution(id_l, rep, k);//���� �Լ�
	return 0;
}

//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//	vector<int> answer;
//	map<string, int> rep_n;//�Ű���� Ƚ��
//	map<string, set<string>> rep_l;//�Ű��� ����Ʈ
//
//	for (int i = 0; i < id_list.size(); i++) {
//
//	}
//
//	return answer;
//}