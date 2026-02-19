#include <iostream>

int main()
{
  char *ans = nullptr;
  size_t len = 0, cap = 0;
  size_t k;
  char cr;

  while (true)
  {
    if (!(std::cin >> k))
    {
      if (std::cin.eof())
      {
        break;
      }
      else
      {
        std::cerr << "Cant read 1 of parameters" << '\n';
        return 1;
      }
    }
  }
}
