/* Предложение switch


switch(выражение){
	case константа 1:
		последовательность предложений
	break;
	case константа 2:
		последовательность предложений
	break;
	case константа 3:
		последовательность предложений
	break;
	.
	.
	.
	.
	.
	 default:
	 	последовательность предложений

}



*/

int main() {

	setlocale(LC_ALL, "ru");

	int num;

	cout << "Введите число от 1 до 3: ";
	cin >> num;

	switch (num) {
		case 1:
			cout << "1\n";
			break;
		case 2:
			cout << "2\n";
			break;
		case 3:
			cout << "3\n";
			break;
		default:
			cout << "Вы можете вводить только 1, 2 или 3 .\n";

	}

	return 0;
}