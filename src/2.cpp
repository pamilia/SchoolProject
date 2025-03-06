  int getRandomNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 mersenne_twister(rd());
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(mersenne_twister);
  }