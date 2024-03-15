#include <iostream>

using namespace std;

// Вложенный switch


int main() {

	setlocale(LC_ALL, "ru");

	char chr = 'A';
	char chr2 = 'A';

	switch (chr) {
	case 'A': cout << "Это A является частью внещнего switch" << endl;
		switch (chr2) {
		case 'A':
			cout << "Это A является частью внутренного switch" << endl;
			break;
		}
		break;
	}

	return 0;
}