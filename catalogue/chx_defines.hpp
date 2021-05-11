//----------------------------------------------------------------------------------
#define CHXSERVERCOLOR							0.541,0,0.09												// 
#define CHXSERVERCOLORALF					0.541,0,0.09,1												// 
#define CHXSERVERCOLORHEX					"#8a0017"												// 
//--------------	
//----	Colors
#define CHXNULL												-1,-1,-1,-1							// NULL
#define CHXMAINBLACKBG								0,0,0,0.95							// MAINBG
#define CHXMAINBLACKBGT							1,1,1,1							// MAINBG
#define CHXWHITE											1,1,1,9								// White
#define CHXBLACK											0,0,0,9								// Black
#define CHXBGCOLORBGO								1,1,1,0.8							// Black 0.8
#define CHXCOLORGREY								0.216,0.231,0.263,1		// Dark Grey
#define CHXCOLORRED			 						0.541,0,0.09,1						// Dark Red
#define CHXCOLORGREEN								0.122,0.557,0.384,1			// Dark Green
#define CHXCOLORORANGE							0.831,0.42,0.157,1			// Dark Orange 
#define CHXCOLORLORANGE						1,0.471,0,1						// Light Orange 
#define CHXCOLORHEXW								"#FFFFFF"							// HEX White
#define CHXCOLORHEXB								"#000000"							// HEX Black
#define CHXCOLORHEXO								"#D46B28"						// HEX Dark Orange 
#define CHXCOLORHEXR								"#8a0017"						// HEX Dark Red 
#define CHXCOLORHEXG								"#204838"							// HEX Dark Green
#define CHXCOLORHEXLG								"#E5E5E5"						// HEX Light Grey


//----	Basics
#define CHXTEXTCOLOR									CHXWHITE									// Text Color
#define CHXFONT												"Zeppelin32"								// Font
#define CHXTEXTSIZE										0.03921											// Font Size
#define CHXBACKGROUND4							"#(argb,8,8,3)color(0,0,0,0.65)"	//  Background Colour

//----------------------------------------------------------------------------------
//----	Buttons
#define CHXBTNTEXTSIZE								0.03921										// Font Size
#define CHXBTNTEXTCOLOR							1,1,1,0.9									// Text Color
#define CHXBTNTEXTCOLOR2						1,1,1,0.25									// Text Color
#define CHXBTNDISCOLOR								0,0,0,0.5										// Disabled Text Color
#define CHXBTNBGCOLOR								1,1,1,0.1									// Background Color
#define CHXBTNBGCOLOR2							1,1,1,0.25									// Background Color
#define CHXBTNACTBG									1,1,1,0.03									// BG Active Button
#define CHXBTNDISBG										1,1,1,0.03									// BG Disabled Button
#define CHXBTNFCSBG									1,1,1,0.3									// Focused
#define CHXBTNBORDERS								0													// Border Size
#define CHXBTNSHADOW								1													// Shadow
//----	List-box
#define CHXLBFONT											CHXFONT								//  
#define CHXLBCOLOR										CHXWHITE								//  
#define CHXLBTEXTSIZE									"(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .9)"										//  
#define CHXLBTEXTSHADOW							0													//  
#define CHXLBCOLORSCROLLBAR				CHXCOLORGREY					//  
#define CHXLBCOLORSELECT						CHXWHITE								//  
#define CHXLBCOLORSELECT2						CHXCOLORGREY					//  
#define CHXLBCOLORBACKGROUND			CHXBLACK								//  
#define CHXLBCOLORSELECTBG2				CHXCOLORGREY					//  
#define CHXLBARROWEMPTY						CHXBLACK								//  
#define CHXLBARROWFULL							CHXBLACK								//  
#define CHXARROWEMPTY								"#(argb,8,8,3)color(1,1,1,1)"	//
#define CHXARROWFULL								"#(argb,8,8,3)color(1,1,1,1)"	//
//----	Titles
#define CHXTEXTTBGCOLOR							CHXNULL								//  
#define CHXTEXTTCOLOR								CHXSERVERCOLORALF			// 
#define CHXTEXTTSIZE									0.04421										// Font Size
//----	Header
#define CHXBHEADBGCOLOR						CHXSERVERCOLORALF			// Header Background Dark Red 
#define CHXHDTEXTC										CHXCOLORHEXW					// Header Color / Arma Yellow 
#define CHXHDTEXTSIZE									0.03921										// Font Size
//----	Footer
#define CHXFOOTBGCOLOR							CHXSERVERCOLORALF			// Footer Background Dark Red 
#define CHXFTTEXTC										CHXCOLORHEXW					// Footer Color / Arma Yellow 
#define CHXFOOTTEXTSIZE							0.04421										// Font Size
//--------------

//----------------------------------------------------------------------------------
class CHX_RscStructuredText	{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {CHXTEXTCOLOR};
	colorBackground[] = {CHXTEXTTBGCOLOR};
	class Attributes	{
		font = CHXFONT;
		color = CHXCOLORHEXW;
		align = "center";
		valign = "middle";	
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = CHXTEXTTSIZE;
	shadow = 2;
};
class CHX_RscPicture	{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {CHXMAINBLACKBG};
	colorText[] = {CHXMAINBLACKBG};
	font = CHXFONT;
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class CHX_RscListBox {
	style = 0; 
	type = 102;
	shadow = 0;
	font = "Zeppelin32";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * .9)";
	color[] = {CHXCOLORGREY};
	colorText[] = {1,1,1,1.0};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {CHXWHITE};
	colorSelect[] = {CHXSERVERCOLORALF};
	colorSelect2[] = {CHXWHITE};
	colorSelectBackground[] = {1,1,1,0.2};
	colorSelectBackground2[] = {1,1,1,0.2};
	period = 1.2;
	rowHeight = 0;
	soundSelect[] = {"",.1,1};
	soundExpand[] = {"",.1,1};
	soundCollapse[] = {"",.1,1};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;  
	drawSideArrows = 1;
	idcRight = -1;
	idcLeft = -1;
class ListScrollBar {
	color[] = {CHXWHITE};
//	colorActive[] = {CHXSERVERCOLORALF};
//	colorDisabled[] = {CHXCOLORGREY};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.3};
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
	arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
	border = "\ca\ui\data\ui_border_scroll_ca.paa";
};
class ScrollBar {  
	color[] = {1,1,1,0.6};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.3};
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
	arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
	border = "\ca\ui\data\ui_border_scroll_ca.paa";
   };
};
class CHX_RscButton	{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {CHXBTNTEXTCOLOR};
	colorDisabled[] = {CHXBTNDISBG};
	colorBackground[] = {CHXBTNBGCOLOR2};
	colorBackgroundDisabled[] = {CHXBTNDISCOLOR};
	colorBackgroundActive[] = {CHXBTNBGCOLOR2};
	colorFocused[] = {CHXBTNBGCOLOR2};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {1,1,1,0.05};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.055589;
	h = 0.039216;
	shadow = 1;
	font = CHXFONT;
	sizeEx = CHXBTNTEXTSIZE;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class CHX_RscEdit	{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {CHXBGCOLORBGO};
	colorText[] = {CHXTEXTCOLOR};
	colorSelection[] = {CHXCOLORGREY};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = CHXFONT;
	shadow = 2;
	sizeEx = CHXTEXTSIZE;
};