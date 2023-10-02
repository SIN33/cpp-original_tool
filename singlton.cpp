class Hoge : public Singleton<Hoge>
{
private :
  friend class Singleton<Hoge>;
  Hoge() { std::cout << "Hoge()" << std::endl; }

  // �f�t�H���g�R���X�g���N�^�ȊO�ŃC���X�^���X���\�z�������ꍇ�AcreateInstance()���㏑������
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