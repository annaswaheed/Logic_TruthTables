#include <iostream>
#include <string>
using namespace std;
// Discrete Math : Project 1
//Siddi Annas Waheed 																			


int main()
{
	int numVar = 0;
	do
	{
		cout << "enter the number of variables (max 4)" << endl;
		cin >> numVar;
	} while (numVar > 4);


	string Var[5];
	for (int i = 0; i < numVar; i++)
	{
		cout << "enter the name of variables" << endl;
		cin >> Var[i];
	}

	string op;
	cout << "what operations you want to perform?" << endl;
	
	cin >> op;
	cout << "it will print 0 as false / 1 as true " << endl;
	if (op == "not") {
		if (numVar == 4) {
			int p, q, r, s;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "  " << Var[3] << " |" << " " << "'" << Var[0]
				<< " " << "'" << Var[1] << " " << "'" << Var[2] << " " << "'" << Var[3] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{
						for (s = 0; s < 2; s++)
						{
							cout << p << "  " << q << "  " << r << "  " << s << " |" << "  " << !p << "  " << !q << "  " << !r << "  " << !s << endl;
						}
					}
				}

			}
		}
		else if (numVar == 3)
		{
			int p, q, r;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << " |" << " " << "'" << Var[0]
				<< " " << "'" << Var[1] << " " << "'" << Var[2] << endl;
			for (int p = 0; p < 2; p++)
			{
				for (int q = 0; q < 2; q++)
				{
					for (int r = 0; r < 2; r++)
					{
						cout << p << "  " << q << "  " << r << " |" << "  " << !p << "  " << !q << "  " << !r << endl;
					}
				}

			}
		}
		else if (numVar == 2)
		{
			int p, q;
			cout << Var[0] << "  " << Var[1] << "  " << " |" << " " << "'" << Var[0]
				<< " " << "'" << Var[1] << " " << endl;
			for (int p = 0; p < 2; p++)
			{
				for (int q = 0; q < 2; q++)
				{
					cout << p << "  " << q << "  " << " |" << "  " << !p << "  " << !q << endl;
				}

			}
		}
		else if (numVar == 1)
		{
			int p, q;
			cout << Var[0] << "  " << " | " << "'" << Var[0]
				<< endl;
			for (int p = 0; p < 2; p++)
			{
				cout << p << "  " << " | " << "'" << !p << endl;
			}
		}
	}
	if (op == "and")
	{
		if (numVar == 4) {
			int p, q, r, s;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "  " << Var[3] << " |"
				//operater name
				<< " " << Var[0] << "&" << Var[1] << " " << Var[2] << "&" << Var[3] << " " << Var[0] << Var[1] << Var[2] << Var[3] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{
						for (s = 0; s < 2; s++)
						{
							bool anb, bnc, cnd;
							anb = p && q;
							bnc = r && s;
							cnd = anb && bnc;
							cout << p << "  " << q << "  " << r << "  " << s << " |" << "  " << anb;
							cout << "   " << bnc << " ";
							cout << "  " << cnd;
							cout << endl;
						}
					}
				}

			}
		}
		else if (numVar == 3)
		{
			int p, q, r;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "|"
				//operater name
				<< " " << Var[0] << "&" << Var[1] << " " << Var[0] << "&" << Var[2] << " " << Var[1] << "&" << Var[2] << " " << Var[0] << Var[1] << Var[2] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{

						bool anb, anc, cnd, bnc;
						anb = p && q;
						anc = p && r;
						bnc = q && r;
						cnd = anb && bnc;
						cout << p << "  " << q << "  " << r << "|" << "  " << anb;
						cout << "   " << anc << "   " << bnc << " ";
						cout << "  " << cnd;
						cout << endl;
					}
				}

			}
		}
		else if (numVar == 2)
		{
			{
				int p, q;
				cout << Var[0] << "  " << Var[1] << "  |"

					//operater name
					<< " " << Var[0] << "&" << Var[1]
					//<< " " << Var[0] << "&" << Var[2] << " " << Var[1] << "&" << Var[2] << " " << Var[0] << Var[1] << Var[2] 
					<< endl;

				for (p = 0; p < 2; p++)
				{
					for (q = 0; q < 2; q++)
					{
						bool anb;
						anb = p && q;
						cout << p << "  " << q << "  " << "|" << "  " << anb;
						cout << endl;
					}

				}
			}
		}

	}	
	if (op == "or") {
		if (numVar == 4) {
			int p, q, r, s;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "  " << Var[3] << " |"
				//operater name
				<< " " << Var[0] << "V" << Var[1] << " " << Var[2] << "V" << Var[3] << " " <<Var[0] << Var[1] << Var[2] << Var[3] << "(V)" << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{
						for (s = 0; s < 2; s++)
						{
							bool anb, bnc, cnd;
							anb = p || q;
							bnc = r || s;
							cnd = anb || bnc;
							cout << p << "  " << q << "  " << r << "  " << s << " |" << "  " << anb;
							cout << "   " << bnc << " ";
							cout << "  " << cnd;
							cout << endl;
						}
					}
				}

			}
		}
		else if (numVar == 3)
		{
			int p, q, r;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "|"
				//operater name
				<< " " << Var[0] << "V" << Var[1] << " " << Var[0] << "V" << Var[2] << " " << Var[1] << "V" << Var[2] << " " << Var[0] << Var[1] << Var[2] << "V" << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{

						bool anb, anc, cnd, bnc;
						anb = p || q;
						anc = p || r;
						bnc = q || r;
						cnd = anb && bnc;
						cout << p << "  " << q << "  " << r << "|" << "  " << anb;
						cout << "   " << anc << "   " << bnc << " ";
						cout << "  " << cnd;
						cout << endl;
					}
				}

			}
		}
		else if (numVar == 2)
		{
			{
				int p, q;
				cout << Var[0] << "  " << Var[1] << "  |"

					//operater name
					<< " " << Var[0] << "V" << Var[1]
					//<< " " << Var[0] << "&" << Var[2] << " " << Var[1] << "&" << Var[2] << " " << Var[0] << Var[1] << Var[2] 
					<< endl;

				for (p = 0; p < 2; p++)
				{
					for (q = 0; q < 2; q++)
					{
						bool anb;
						anb = p || q;
						cout << p << "  " << q << "  " << "|" << "  " << anb;
						cout << endl;
					}

				}
			}
		}

	
	
	
	}
	if (op == "implies") {
		if (numVar == 4) {
			int p, q, r, s;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "  " << Var[3] << " |"
				//operater name
				<< " " << Var[0] << "->" << Var[1] << " " << Var[2] << "->" << Var[3] << " " << Var[0] << Var[1] <<"->"<<Var[2] << Var[3] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{
						for (s = 0; s < 2; s++)
						{
							bool anb, cnd, abncd;
							anb = (!p || q);
							cnd = (!r || s);
							abncd = (!anb || cnd);
							cout << p << "  " << q << "  " << r << "  " << s << " |" << "  " << anb;
							cout << "     " << cnd << " ";
							cout << "     " << abncd;
							cout << endl;
						}
					}
				}

			}
		}
		else if (numVar == 3)
		{
			int p, q, r;
			cout << Var[0] << "  " << Var[1] << "  " << Var[2] << "  " << Var[3] << "|"
				//operater name
				<< " " << Var[0] << "->" << Var[1] << " " << Var[2] << "->" << Var[3] << " " << Var[0] << Var[1] << "->" << Var[2] << Var[3] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
					for (r = 0; r < 2; r++)
					{
							bool anb, cnd, abncd;
							anb = (!p || q);
							cnd = (!p || r);
							abncd = (!anb || cnd);
							cout << p << "  " << q << "  " << r << " |" << "  " << anb;
							cout << "     " << cnd << " ";
							cout << "     " << abncd;
							cout << endl;
					}
				}

			}

		}
		else if (numVar == 2) {
			int p, q;
			cout << Var[0] << "  " << Var[1] << " |"
				//operater name
				<< " " << Var[0] << "->" << Var[1] << "   " << Var[1] << "->" << Var[0]  <<"    " << Var[0] << Var[1] <<"->" << Var[1] << Var[0] << endl;
			for (p = 0; p < 2; p++)
			{
				for (q = 0; q < 2; q++)
				{
						bool anb, cnd, abncd;
						anb = (!p || q);
						cnd = (!q || p);
						abncd = (!anb || cnd);
						cout << p << "  " << q << " |" << "  " << anb;
						cout << "      " << cnd << " ";
						cout << "       " << abncd;
						cout << endl;

				}

			}
		}

}

}
