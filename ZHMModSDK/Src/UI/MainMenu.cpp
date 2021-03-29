#include "MainMenu.h"

#include <imgui.h>


#include "IModSDK.h"
#include "ModSelector.h"

using namespace UI;

void MainMenu::Draw(bool p_HasFocus)
{
	if (!p_HasFocus)
		return;
	
	ImGui::BeginMainMenuBar();

	ImGui::PushFont(SDK()->GetImGuiBlackFont());
	ImGui::Text("ZHM MOD SDK");
	ImGui::PopFont();
	ImGui::Text("Press the ~ key (under ESC) to open this menu");

	if (ImGui::Button("SELECT MODS"))
	{
		ModSelector::Show();
	}

	ImGui::EndMainMenuBar();
}
