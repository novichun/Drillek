#include "std_lib_facilities.h"

int main()
{

	//1. Nagy C betű helyett kis c
		//cout << "Success!\n";

	//2. " jel hiánya 
		//cout << "Success!\n";

	//3. Success rosszul írva és '' jelek hiánya nem kell !
		//cout << "Success!" << '\n';

	//4. "" jelek hiánya és rosszul írva
		//cout << "Success!" << '\n';

	//5. srting helyett int
		//int res = 7; 
		//vector<int> v(10); v[5] = res;
		//cout << "Success!\n";

	//6. v(5) helyett v[5]
		//vector<int> v(10); 
		//v[5] = 7;
		//if (v(5)!=7) cout << "Success!\n";	

	//7. Hozzá kell írni bool cond = true;
		//bool cond = true;
		//if (cond) cout << "Success!\n";
		//else cout << "Fail!\n";

	//8. False értéket True ra kell állítani
		//bool c = true;
		//if (c) cout << "Success!\n";
		//else cout << "Fail!\n";

	//9. (!c) felkiátójel hiánya és rosszul írt bool -> boo
		//string s = "ape";
		//bool c = "fool"<s;
		//if (!c) cout << "Success!\n";

	//10. nem egyező a két érték s==s fool==fool
		//string s = "fool";
		//if (s=="fool") cout << "Success!\n";

	//11. < helyett << és nem egyezik az s==s
		//string s = "fool";
		//if (s=="fool") cout << "Success!\n";

	//12. + helyett == és <<
		//string s = "ape";
		//if (s=="ape") cout << "Success!\n";

	//13. int helyett size_t és 0<v.size() helyett i<v.size()
		//vector<char> v(5);
		//for (size_t i=0; i<v.size(); ++i);
		//cout << "Success!\n";

	//14. Nem volt benne hiba
		//vector<char> v(5);
		//for (int i=0; i<=v.size(); ++i) ;
		//cout << "Success!\n";

	//15. i<6 helyett i<10
		//string s = "Success!\n";
		//for (int i=0; i<10; ++i) cout << s[i];

	//16. Nincs szükség a then-re
		//if (true) cout << "Success!\n";
		//else cout << "Fail!\n";

	//17. char c helytt int c
		//int x = 2000; 
		//int c = x;
		//if (c==2000) cout << "Success!\n";

	//18. Nincs benne hiba.
		//string s = "Success!\n";
		//for (int i=0; i<10; ++i) cout << s[i];

	//19. Vector után hiányzik a <char>
		//vector<char> v(5);
		//for (int i=0; i<=v.size(); ++i) ;
		//cout << "Success!\n";

	//20. ++j helyett ++i
		//int i=0;
		//int j = 9;
		//while (i<10) ++i; 
		//if (j<i) cout << "Success!\n";

	//21. Zárójelet elhagytam és nem 5 hanem 5.0 nem x-2 hanem x+2
		//int x = 2;
		//double d = 5.0/x+2;
		//if (d==2*x+0.5) cout << "Success!\n";

	//22. <char> -t el kell hagyni 
		//string s = "Success!\n"; 
		//for (int i=0; i<=10; ++i) cout << s[i];

	//23. definiálni kell a j-t és ++j helyett ++i
		//int i=0;
		//int j=9;
		//while (i<10) ++i;
		//if (j<i) cout << "Success!\n";

	//24. d= helyett d== és 5 helyett 5.0 és - jelet cserélni kellett és if ágon értékeket kellett átírni
		//int x = 4;
		//double d = 5.0/(x-2);
		//if (d==x/2.0+0.5) cout << "Success!\n";

	//25. cin helyett cout-ot kell használni
		//cout << "Success!\n";

	return 0;
}