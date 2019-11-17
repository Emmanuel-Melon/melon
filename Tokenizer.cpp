/**
* matcher should be used within the context of a tokenizer
*/
class Tokenizer {
private:
  tokens
public:
  template <typename T> bool tokenize(T input);
};


template <typename T> bool Tokenizer::tokenize(T input) {
  cout << "tokenizing this input" << endl;
  // add to specific type array token?
}
