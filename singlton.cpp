class Hoge : public Singleton<Hoge>
{
private :
  friend class Singleton<Hoge>;
  Hoge() { std::cout << "Hoge()" << std::endl; }

  // デフォルトコンストラクタ以外でインスタンスを構築したい場合、createInstance()を上書きする
  Hoge(int) { std::cout << "Hoge(int)" << std::endl; }
  static Hoge *createInstance()
  {
    return new Hoge(0);
  }
  
};

int main()
{
	Hoge::createInstance();
	return 0;
}