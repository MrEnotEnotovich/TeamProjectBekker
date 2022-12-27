#include "bekker.h"
#include "products.h"

int main()
{
   MainInterface *MainMenu = new MainInterface;
   MainMenu->interactMain();
   delete MainMenu;
}
