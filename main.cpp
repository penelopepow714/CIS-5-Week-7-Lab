#include <iostream>

// Lab 7 — Your Name
// CIS 5 Week 07 · Two arrays

int main() {
  const int N = 5;
  int quiz[N] = {88, 92, 78, 95, 81};
  int lab[N] = {70, 70, 70, 70, 70};

  std::cout << "Quiz" << std::endl;
  int quizsum = 0;
  int quizhigh = quiz[0];

  for (int i = 0; i < N; ++i) {
    std::cout << "[" << i << "]" << quiz[i] << std::endl;
    quizsum += quiz[i];
    if (quiz[i] > quizhigh) {
      quizhigh = quiz[i];
    }
  }
  std::cout << "Sum: " << quizsum << std::endl;
  std::cout << "High: " << quizhigh << std::endl;
  std::cout << "Lab" << std::endl;

  int labsum = 0;
  int labhigh = lab[0];

  for (int i = 0; i < N; ++i) {
    std::cout << "[" << i << "]" << lab[i] << std::endl;
    labsum += lab[i];
    
    if (lab[i] > labhigh){
      labhigh = lab[i];
    }
  }
  std::cout << "Sum: " << labsum << std::endl;
  std::cout << "High: " << labhigh << std::endl;


  return 0;
}
