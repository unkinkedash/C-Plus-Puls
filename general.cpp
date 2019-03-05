#include<iostream>
using namespace std;

//enum dayOfWeek{M, TU, W, TH, F, ST, SN};

//assinatura de uma funcao
//void swap(int &, int &);



int main() {
  int inteiro = 40; // -2bi to 2bi 4 bytes
  float pontoFlutuante = 5.1f; // 4 bytes, precisao de 38 zeros
  double precisaoDupla = 5.122; // 8 bytes, precisao de 308 zeros
  short shortNum = 5; //-32768 to 32767, 2 bytes
  char letra = 'a';

  cout << "pontoFlutuante: " << pontoFlutuante << '\n';
  cout << "precisaoDupla: " << precisaoDupla << '\n';
  cout << "inteiro: " << inteiro << '\n';
  cout << "letra " << letra << '\n';
  cout << "short " << shortNum << endl;

  //concatena duas strings
  string hello = "Hello ";
  string world = "World!";
  cout << hello + world << '\n';

  //tudo que não é 0 se torna 1
  bool bolean = true;
  cout << bolean << '\n';

  unsigned short int semSinal = 10; // 65535
  cout << "unsigned short int: " << semSinal << '\n';

  //constante, valor que não pode ser mudado ao decorrer do programa
  const int agua = 3;
  cout << "constante: " << agua << '\n';

  //leitura do usuário
  int age;
  cout << "Enter your age: ";
  cin >> age;

  //condicao
  int a = 3, b = 9;
  cout << (a == b) << endl;

  /*
  bitwise and - &
  bitwise or - |
  bitwise not - ~
  bitwise xor - ^
  bitwise left shift - <<
  bitwise rigth shift - >>
  */

  /*

  1 0 1 0
  0 0 1 0
  -------
  0 0 1 0

  */

  cout << (10 & 2) << endl;

  /*
  int x = 10;

  switch (x) {
    case 0:
      cout << "o x vale 0!" << endl;
      break;
    case 1:
      cout << "o x vale 1!" << endl;
      break;
    default:
      cout << "errou!" << endl;
      break;
  }

  */

  //operador condicional
  /*
  int a = 10, b = 90;

  string message = (a > b) ?  "a > b" : "a < b";
  cout << message << '\n';
  */

  //goto
  /*
  loop:
  if (a > b) {
    goto loop;
  }
  */


  //vetor
  //int vetor[5];//tipo nome[capacidade]

  //validação de dados
  /*
  string nome;
  cout << "Enter yout name: ";
  cin >> nome;
  cout << "\nEnter your age again: ";
  cin >> age;
  cout << cin.rdstate() << endl;//mostra o estado do buffer
  cin.clear();//limpa o buffer e coloca o estado como OK(goodbit)
  cout << cin.rdstate()<< endl;//mostra o estado do buffer depois de limpo

  // o jaito certo de fazer
  string name;
  cout << "Give me your name and surname:"<< endl;
  cin >> name;
  cin.ignore(10000, '\n'); remove partes inúteis do buffer

  int age;
  cout << "Give me your age:" << endl;
  if (cin >> age)//retorn falso se os tipos inseridos não são compatíveis
    cout << "Your age is equal to:" << endl;
  else
  {
    cin.clear();
    cin.ignore(10000, '\n'); //time to remove "Wlodarczyk" the wood log and make the stream flow
    cout << "Give me your age name as string I dare you";
    cin >> age;
  }

  int age;
  cout << "Give me your age:" <<endl;
  cin >> age;
  cin.ignore(); // it ignores just enter without arguments being sent. it's same as cin.ignore(1, '\n')
  cout << "Your age is" << age << endl;
  //se nao colocar o ignore, o getline usa só o '\n' usado no cin anterior,
  //pois o getline apenas pega até achar um '\n'. Dessa forma ele acha um no buffer enão el amis nada


  string nameAndSurname;
  cout << "Give me your name and surname:"<< endl;
  getline(cin, nameAndSurname);
  cout << "Hello, " << nameAndSurname << endl;

*/
  /*
  //uso de enum
  dayOfWeek day = M;
  //indica qual valor tem o dia com o label 'M'
  cout << dayOfWeek(M) << endl;
  cout << dayOfWeek(2) << endl;

  */


  /*
  //variáveis de referencia
  string variable = "variable";
  string &reference = variable;

  reference = "o valor da variavel referenciada muda";


  */


  /*
  //passando variáveis por referencia
  int a = 10;
  int b = 20;

  swap(a,b);
  cout << a << endl;
  cout << b << endl;

  */

  return 0;
}

/*

void swap(int &x, int &y){
  int aux;
  aux = x;
  x = y;
  y = aux;

}

*/
