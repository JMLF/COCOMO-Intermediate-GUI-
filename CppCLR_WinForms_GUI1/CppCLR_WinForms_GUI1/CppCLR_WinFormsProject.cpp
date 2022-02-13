#include "Form1.h"
#include "../../C_COCOMO/C_CALCUL.h"

using namespace System::Windows::Forms;


int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}