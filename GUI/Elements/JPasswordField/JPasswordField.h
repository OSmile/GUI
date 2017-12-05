#pragma once
#include "../../GUI/GUIBox.h"

class PasswordField : public GUIBox
{
private:
	friend class GUILayer;
	std::string text;
	std::string textIn;
	Text txt;         
	std::string textButt; 
	Text txtButt;         
	RectangleShape field;
	RectangleShape fieldButt;
	std::vector<char> vect;
	std::string correct;
	bool buttPass = false;
	bool fieldPass = false;

protected:
	PasswordField(RenderWindow* renderWindow_, float x, float y, float width, float height, std::string text, TextStyle *tstyle, GUIStyle *gstyle, std::string correct);
	bool inField;
	bool inFieldButt;

public:
	virtual void Draw() override;
	virtual void Recalc() override;
	Text Display();
	Text DisplayButt();
	void handleEvent(const sf::Event& event) override;
	bool Inside(Vector2i); 
	bool InsideButt(Vector2i);
};
