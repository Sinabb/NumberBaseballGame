#include <iostream>

void correctCheck(const int secret[], const int correct[], int& strikes, int& balls) {

	strikes = 0;
	balls = 0;

	for (int i = 0; i < 3; i++) {
		if (secret[i] == correct[i]) {
			strikes++;
		}
		else {
			for (int j = 0; j < 3; j++) {
				if (secret[j] == correct[i]) {
					balls++;
					break;
				}
			}
		}
	}
}

int main() {
	const int secretNumber[] = { 4, 5, 6 };

	std::cout << "3자리 숫자를 추측하세요." << std::endl;

	while (true) {
		std::cout << "추측을 입력하세요: ";
		int correct[3];
		for (int i = 0; i < 3; i++) {
			std::cin >> correct[i];
		}

		int strikes, balls;
		correctCheck(secretNumber, correct, strikes, balls);

		std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;

		if (strikes == 3) {
			std::cout << "축하합니다! 정답을 맞추셨습니다." << std::endl;
			break;
		}

	}

}