#define RESRC_SCNR_MAX 256

typedef struct Dc_st
{
	int PicDummy;
	int PicBlackWall;
	int PicWhiteWall;

	int PicLogo;
	int PicTitle;
	int PicTitleExtra;
	int PicTitleExtraClear;
	int PicTitleCursor;
	int PicSelect;
	int PicExit;

	int PicTitleStartOn;
	int PicTitleStartPress;
	int PicTitleSettingOn;
	int PicTitleSettingPress;

	int PicCfgWall;
	int PicCfgWindow;
	int PicCfgFullScreen;
	int PicCfgKidoku;
	int PicCfgMidoku;
	int PicCfgRotL;
	int PicCfgRotR;
	int PicCfgDir2;
	int PicCfgDir4;
	int PicCfgDir6;
	int PicCfgDir8;
	int PicCfgBomb;
	int PicCfgModoru;
	int PicCfgTsumami;
	int PicCfgPressKey;

	int PicContinueShinai;
	int PicContinueShinaiFocus;
	int PicContinueSuru;
	int PicContinueSuruFocus;

	int PicSelectGI;
	int PicSelectJP;

	int PicCpuWall;
	int PicCpuCursor;

	int PicReady;

	int PicWin;
	int PicWinWall;
	int PicWin1P;
	int PicWin2P;
	int PicLose;
	int PicLoseWall;
	int PicLose1P;
	int PicLose2P;

	int PicPauseItem[4][2]; // [0 - 3][非選択, 選択]

	int PicCIStar;
	int PicCI1P1Ren3;
	int PicCI1P2Ren3;
	int PicCI2P1Ren3;
	int PicCI2P2Ren3;
	int PicCI1P1Ren5;
	int PicCI1P2Ren5;
	int PicCI2P1Ren5;
	int PicCI2P2Ren5;
	int PicCI1P1Ren7;
	int PicCI1P2Ren7;
	int PicCI2P1Ren7;
	int PicCI2P2Ren7;

	int PicCI1P1Damage;
	int PicCI1P2Damage;
	int PicCI2P1Damage;
	int PicCI2P2Damage;

	int PicCIHissStar;
	int PicCIHiss1P1;
	int PicCIHiss1P2;
	int PicCIHiss2P1;
	int PicCIHiss2P2;

	int PicAscii[0x100];
	int PicDir[10];

	int PicFace[PZPLYR_MAX][3][3]; // [PZPLYR_*][普通, 苦しい, 最悪][通常, アニメ1, アニメ2]

	int PicEffeHana;
	int PicEffeHoshi;
	int PicEffeKagaya;

	int PicBlocks[BLOCK_COLOR_NUM];
	int PicFlowers[BLOCK_COLOR_NUM];

	int BGM_Title;

	int SeReady;
	int SeStart;
	int SeFlower;
	int SeFlowerLot;
	int SeMove;
	int SeRotate;
	int SeErase;
	int SeDecide;
	int SeBomb;

	int SeIkuyo;
	int SeUwa;
	int SeEi;
	int SeSore;
	int SeHa;
	int SeGo;
	int SeSpCmd;
	int SeRucca;
	int SeJReady;
	int SeRen3;
	int SeRen5;
	int SeRen7;
	int SeWin;
	int SeLose;
	int SeHissOk;

	int SeBellWin;
	int SeBellLose;
	int SeBellHiss;

	double BGMVolume;
	double SeVolume;

	double BlackCurtain; // 0.0 - 1.0
	double WhiteCurtain; // 0.0 - 1.0
	double BCPct;
	double WCPct;

	char ResrcScnrList[RESRC_SCNR_MAX][2048];
	int ResrcScnrCount;
}
Dc_t;
extern Dc_t *Dc;

void DcInit_LoadAllPicture(void);
void DcInit_LoadAllPictureSafe(void);

void DcInit(void);
void DcFnlz(void);

typedef struct Gnd_st
{
	struct
	{
		int W;
		int H;
	}
	RealScreen;
}
Gnd_t;
extern Gnd_t Gnd;

void GndInit(void);
