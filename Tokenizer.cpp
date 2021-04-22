class Tokenizer {
private:
  int tokens;
public:
  template <typename T> bool tokenize(T input);
};


template <typename T> bool Tokenizer::tokenize(T input) {
  cout << "tokenizing this input" << endl;
}
