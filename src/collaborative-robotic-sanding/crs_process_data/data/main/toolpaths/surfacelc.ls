/PROG surfacelc
/ATTR
OWNER			= MNEDITOR;
COMMENT			= "";
PROG_SIZE		= 4757;
FILE_NAME		= surfacelc;
VERSION			= 0;
LINE_COUNT		= 150;
MEMORY_SIZE		= 5089;
PROTECT			= READ_WRITE;
TCD:  STACK_SIZE		= 0,
      TASK_PRIORITY		= 50,
      TIME_SLICE		= 0,
      BUSY_LAMP_OFF		= 0,
      ABORT_REQUEST		= 0,
      PAUSE_REQUEST		= 0;
DEFAULT_GROUP	= 1,*,*,*,*;
CONTROL_CODE	= 00000000 00000000;
/MN
	1:  UFRAME_NUM=0 ;
	2:  UTOOL_NUM=1 ;
	2:  PR[15,1]=0 ;
	2:  PR[15,2]=0 ;
	2:  PR[15,3]=0 ;
	2:  PR[15,4]=0 ;
	2:  PR[15,5]=0 ;
	2:  PR[15,6]=0 ;
	3:	;
	4:	;
	5:J P[1] 100% CNT60 Tool_Offset,PR[15] 	;
	6:L P[2] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	7:L P[3] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	8:L P[4] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	9:L P[5] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	10:L P[6] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	11:L P[7] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	12:L P[8] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	13:L P[9] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	14:L P[10] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	15:L P[11] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	16:L P[12] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	17:L P[13] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	18:L P[14] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	19:L P[15] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	20:L P[16] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	21:L P[17] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	22:L P[18] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	23:L P[19] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	24:L P[20] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	25:L P[21] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	26:L P[22] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	27:L P[23] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	28:L P[24] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	29:L P[25] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	30:L P[26] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	31:L P[27] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	32:L P[28] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	33:L P[29] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	34:L P[30] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	35:L P[31] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	36:L P[32] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	37:L P[33] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	38:L P[34] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	39:L P[35] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	40:L P[36] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	41:L P[37] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	42:L P[38] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	43:L P[39] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	44:L P[40] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	45:L P[41] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	46:L P[42] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	47:L P[43] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	48:L P[44] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	49:L P[45] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	50:L P[46] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	51:L P[47] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	52:L P[48] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	53:L P[49] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	54:L P[50] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	55:L P[51] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	56:L P[52] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	57:L P[53] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	58:L P[54] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	59:L P[55] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	60:L P[56] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	61:L P[57] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	62:L P[58] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	63:L P[59] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	64:L P[60] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	65:L P[61] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	66:L P[62] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	67:L P[63] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	68:L P[64] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	69:L P[65] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	70:L P[66] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	71:L P[67] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	72:L P[68] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	73:L P[69] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	74:L P[70] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	75:L P[71] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	76:L P[72] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	77:L P[73] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	78:L P[74] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	79:L P[75] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	80:L P[76] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	81:L P[77] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	82:L P[78] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	83:L P[79] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	84:L P[80] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	85:L P[81] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	86:L P[82] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	87:L P[83] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	88:L P[84] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	89:L P[85] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	90:L P[86] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	91:L P[87] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	92:L P[88] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	93:L P[89] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	94:L P[90] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	95:L P[91] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	96:L P[92] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	97:L P[93] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	98:L P[94] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	99:L P[95] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	100:L P[96] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	101:L P[97] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	102:L P[98] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	103:L P[99] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	104:L P[100] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	105:L P[101] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	106:L P[102] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	107:L P[103] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	108:L P[104] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	109:L P[105] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	110:L P[106] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	111:L P[107] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	112:L P[108] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	113:L P[109] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	114:L P[110] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	115:L P[111] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	116:L P[112] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	117:L P[113] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	118:L P[114] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	119:L P[115] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	120:L P[116] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	121:L P[117] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	122:L P[118] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	123:L P[119] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	124:L P[120] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	125:L P[121] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	126:L P[122] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	127:L P[123] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	128:L P[124] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	129:L P[125] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	130:L P[126] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	131:L P[127] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	132:L P[128] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	133:L P[129] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	134:L P[130] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	135:L P[131] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	136:L P[132] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	137:L P[133] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	138:L P[134] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	139:L P[135] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	140:L P[136] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	141:L P[137] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	142:L P[138] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	143:L P[139] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	144:L P[140] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	145:L P[141] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	146:L P[142] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	147:L P[143] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	148:L P[144] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	149:L P[145] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	150:L P[146] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	151:L P[147] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	152:L P[148] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	153:L P[149] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
	154:L P[150] R[10]mm/sec CNT60 Tool_Offset,PR[15] 	;
/POS
P[1]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2160.710996	mm,	Y =	676.778384	mm,	Z =	866.104966	mm,
	W =	99.473804	deg,	P =	164.499492	deg,	R =	74.103204	deg
};
P[2]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2184.125764	mm,	Y =	668.966500	mm,	Z =	870.070215	mm,
	W =	99.473803	deg,	P =	164.499492	deg,	R =	74.103203	deg
};
P[3]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2198.133369	mm,	Y =	668.786239	mm,	Z =	787.279158	mm,
	W =	104.170976	deg,	P =	161.476569	deg,	R =	68.619123	deg
};
P[4]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2219.332144	mm,	Y =	668.098865	mm,	Z =	706.158555	mm,
	W =	104.170976	deg,	P =	161.476569	deg,	R =	68.619123	deg
};
P[5]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2232.645945	mm,	Y =	617.056645	mm,	Z =	592.075847	mm,
	W =	105.714240	deg,	P =	-174.001032	deg,	R =	65.518313	deg
};
P[6]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2205.924544	mm,	Y =	617.498305	mm,	Z =	680.854830	mm,
	W =	102.399319	deg,	P =	-171.316306	deg,	R =	70.903628	deg
};
P[7]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2185.535289	mm,	Y =	618.041266	mm,	Z =	771.343211	mm,
	W =	98.235787	deg,	P =	-169.519001	deg,	R =	74.438069	deg
};
P[8]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2172.292484	mm,	Y =	618.727311	mm,	Z =	862.806736	mm,
	W =	98.235787	deg,	P =	-169.519001	deg,	R =	74.438069	deg
};
P[9]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2164.070714	mm,	Y =	568.513341	mm,	Z =	863.743670	mm,
	W =	98.373701	deg,	P =	-142.589293	deg,	R =	75.078097	deg
};
P[10]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2175.630355	mm,	Y =	568.035469	mm,	Z =	765.392484	mm,
	W =	103.351754	deg,	P =	-144.421337	deg,	R =	68.715669	deg
};
P[11]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2194.565970	mm,	Y =	567.262170	mm,	Z =	668.180139	mm,
	W =	107.732411	deg,	P =	-145.863382	deg,	R =	66.285915	deg
};
P[12]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2220.097651	mm,	Y =	566.561730	mm,	Z =	572.349154	mm,
	W =	113.587219	deg,	P =	-148.805619	deg,	R =	61.532990	deg
};
P[13]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2254.826509	mm,	Y =	565.690370	mm,	Z =	479.936802	mm,
	W =	113.587219	deg,	P =	-148.805619	deg,	R =	61.532990	deg
};
P[14]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2277.902577	mm,	Y =	515.539222	mm,	Z =	389.114402	mm,
	W =	112.308718	deg,	P =	-177.968098	deg,	R =	63.022078	deg
};
P[15]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2237.128661	mm,	Y =	515.994433	mm,	Z =	479.013238	mm,
	W =	107.162756	deg,	P =	-173.090065	deg,	R =	69.825338	deg
};
P[16]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2207.046813	mm,	Y =	516.374412	mm,	Z =	572.886612	mm,
	W =	103.252515	deg,	P =	-170.081955	deg,	R =	76.934803	deg
};
P[17]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2184.562467	mm,	Y =	517.126821	mm,	Z =	668.815077	mm,
	W =	100.179032	deg,	P =	-169.319983	deg,	R =	78.018454	deg
};
P[18]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2167.315997	mm,	Y =	517.823514	mm,	Z =	765.841223	mm,
	W =	96.775061	deg,	P =	-168.559899	deg,	R =	79.479281	deg
};
P[19]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2155.918541	mm,	Y =	518.533004	mm,	Z =	863.470029	mm,
	W =	96.775061	deg,	P =	-168.559899	deg,	R =	79.479281	deg
};
P[20]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2151.945851	mm,	Y =	468.221384	mm,	Z =	849.788275	mm,
	W =	97.631150	deg,	P =	-141.975432	deg,	R =	79.830769	deg
};
P[21]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2157.186950	mm,	Y =	467.883822	mm,	Z =	799.905475	mm,
	W =	100.113007	deg,	P =	-142.377749	deg,	R =	78.034818	deg
};
P[22]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2170.472719	mm,	Y =	467.176286	mm,	Z =	705.314499	mm,
	W =	103.738758	deg,	P =	-143.017314	deg,	R =	75.876214	deg
};
P[23]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2188.955878	mm,	Y =	466.672529	mm,	Z =	609.961296	mm,
	W =	107.711218	deg,	P =	-144.804812	deg,	R =	70.028666	deg
};
P[24]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2213.351184	mm,	Y =	465.985622	mm,	Z =	515.848632	mm,
	W =	113.024882	deg,	P =	-147.057878	deg,	R =	65.565787	deg
};
P[25]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2245.661239	mm,	Y =	465.302772	mm,	Z =	424.345439	mm,
	W =	115.486602	deg,	P =	-149.000356	deg,	R =	62.055190	deg
};
P[26]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2263.916580	mm,	Y =	464.868022	mm,	Z =	379.469400	mm,
	W =	115.486602	deg,	P =	-149.000356	deg,	R =	62.055190	deg
};
P[27]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2253.620642	mm,	Y =	414.765916	mm,	Z =	378.350053	mm,
	W =	126.354691	deg,	P =	-125.239084	deg,	R =	47.756739	deg
};
P[28]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2219.566488	mm,	Y =	415.354327	mm,	Z =	470.496474	mm,
	W =	121.303339	deg,	P =	-121.519146	deg,	R =	55.746487	deg
};
P[29]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2192.820254	mm,	Y =	416.170779	mm,	Z =	564.967154	mm,
	W =	114.489500	deg,	P =	-119.447678	deg,	R =	61.613135	deg
};
P[30]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2172.773261	mm,	Y =	416.911531	mm,	Z =	661.053289	mm,
	W =	108.577411	deg,	P =	-118.026685	deg,	R =	67.220508	deg
};
P[31]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2158.073752	mm,	Y =	417.529446	mm,	Z =	758.041070	mm,
	W =	103.957583	deg,	P =	-117.044749	deg,	R =	72.944068	deg
};
P[32]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2147.354383	mm,	Y =	418.231482	mm,	Z =	855.389808	mm,
	W =	103.957583	deg,	P =	-117.044749	deg,	R =	72.944068	deg
};
P[33]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2145.204778	mm,	Y =	368.107306	mm,	Z =	845.978189	mm,
	W =	97.416855	deg,	P =	-141.739452	deg,	R =	81.974738	deg
};
P[34]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2154.755971	mm,	Y =	367.462972	mm,	Z =	752.067907	mm,
	W =	100.834921	deg,	P =	-142.203085	deg,	R =	79.511060	deg
};
P[35]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2168.768991	mm,	Y =	366.794594	mm,	Z =	658.719585	mm,
	W =	104.296717	deg,	P =	-142.843685	deg,	R =	76.913260	deg
};
P[36]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2187.369601	mm,	Y =	366.109904	mm,	Z =	566.110134	mm,
	W =	108.740048	deg,	P =	-143.933703	deg,	R =	73.539983	deg
};
P[37]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2211.959556	mm,	Y =	365.396682	mm,	Z =	474.859770	mm,
	W =	114.190301	deg,	P =	-145.682104	deg,	R =	69.517980	deg
};
P[38]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2243.921305	mm,	Y =	364.572498	mm,	Z =	386.274780	mm,
	W =	114.190301	deg,	P =	-145.682104	deg,	R =	69.517980	deg
};
P[39]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2233.509523	mm,	Y =	314.677584	mm,	Z =	400.069714	mm,
	W =	127.858912	deg,	P =	-123.450809	deg,	R =	51.770709	deg
};
P[40]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2216.766022	mm,	Y =	315.042921	mm,	Z =	446.566381	mm,
	W =	122.751812	deg,	P =	-121.163041	deg,	R =	56.982106	deg
};
P[41]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2189.157034	mm,	Y =	315.840388	mm,	Z =	541.230153	mm,
	W =	115.311627	deg,	P =	-118.967633	deg,	R =	63.796262	deg
};
P[42]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2168.759260	mm,	Y =	316.634251	mm,	Z =	637.677424	mm,
	W =	108.779050	deg,	P =	-117.698100	deg,	R =	69.290878	deg
};
P[43]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2154.036455	mm,	Y =	317.343828	mm,	Z =	735.084038	mm,
	W =	103.248206	deg,	P =	-116.843853	deg,	R =	74.564693	deg
};
P[44]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2143.882077	mm,	Y =	318.044163	mm,	Z =	832.911986	mm,
	W =	103.248206	deg,	P =	-116.843853	deg,	R =	74.564693	deg
};
P[45]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2141.842152	mm,	Y =	267.958496	mm,	Z =	833.661524	mm,
	W =	97.138511	deg,	P =	-141.578973	deg,	R =	83.485532	deg
};
P[46]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2150.715283	mm,	Y =	267.346250	mm,	Z =	742.825593	mm,
	W =	100.059114	deg,	P =	-141.924195	deg,	R =	81.216421	deg
};
P[47]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2163.262608	mm,	Y =	266.692691	mm,	Z =	652.366514	mm,
	W =	104.258485	deg,	P =	-142.542851	deg,	R =	78.376519	deg
};
P[48]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2181.115856	mm,	Y =	266.014206	mm,	Z =	562.791610	mm,
	W =	108.381315	deg,	P =	-143.392496	deg,	R =	75.436482	deg
};
P[49]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2204.259942	mm,	Y =	265.234987	mm,	Z =	474.370709	mm,
	W =	114.026844	deg,	P =	-144.532624	deg,	R =	72.550010	deg
};
P[50]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2234.463855	mm,	Y =	264.442154	mm,	Z =	388.440570	mm,
	W =	114.026844	deg,	P =	-144.532624	deg,	R =	72.550010	deg
};
P[51]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2232.606535	mm,	Y =	214.403908	mm,	Z =	385.898323	mm,
	W =	128.050309	deg,	P =	-122.412625	deg,	R =	54.129673	deg
};
P[52]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2202.325151	mm,	Y =	215.225677	mm,	Z =	472.471074	mm,
	W =	120.452319	deg,	P =	-120.037178	deg,	R =	60.269183	deg
};
P[53]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2179.097927	mm,	Y =	215.967146	mm,	Z =	561.095644	mm,
	W =	113.897074	deg,	P =	-118.415271	deg,	R =	66.110257	deg
};
P[54]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2161.453452	mm,	Y =	216.645080	mm,	Z =	651.010205	mm,
	W =	107.341498	deg,	P =	-117.196068	deg,	R =	72.386443	deg
};
P[55]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2148.999396	mm,	Y =	217.301494	mm,	Z =	741.719261	mm,
	W =	102.194612	deg,	P =	-116.553252	deg,	R =	77.223727	deg
};
P[56]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2140.384234	mm,	Y =	217.946020	mm,	Z =	832.718581	mm,
	W =	102.194612	deg,	P =	-116.553252	deg,	R =	77.223727	deg
};
P[57]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2139.381384	mm,	Y =	167.881559	mm,	Z =	831.910172	mm,
	W =	96.737810	deg,	P =	-141.439635	deg,	R =	84.887621	deg
};
P[58]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2147.841785	mm,	Y =	167.257508	mm,	Z =	740.027448	mm,
	W =	99.884312	deg,	P =	-141.729621	deg,	R =	82.595563	deg
};
P[59]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2160.277520	mm,	Y =	166.596980	mm,	Z =	648.558885	mm,
	W =	103.950006	deg,	P =	-142.241552	deg,	R =	79.845186	deg
};
P[60]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2177.878956	mm,	Y =	165.905438	mm,	Z =	557.887565	mm,
	W =	108.717571	deg,	P =	-143.083639	deg,	R =	76.614741	deg
};
P[61]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2201.578380	mm,	Y =	165.146493	mm,	Z =	468.609494	mm,
	W =	114.078980	deg,	P =	-144.202935	deg,	R =	73.453968	deg
};
P[62]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2232.043951	mm,	Y =	164.345375	mm,	Z =	381.705982	mm,
	W =	114.078980	deg,	P =	-144.202935	deg,	R =	73.453968	deg
};
P[63]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2230.914454	mm,	Y =	114.284367	mm,	Z =	381.040533	mm,
	W =	128.584428	deg,	P =	-122.047419	deg,	R =	54.998349	deg
};
P[64]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2200.326371	mm,	Y =	115.102556	mm,	Z =	468.325782	mm,
	W =	121.146381	deg,	P =	-119.775631	deg,	R =	61.168560	deg
};
P[65]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2176.605866	mm,	Y =	115.860635	mm,	Z =	557.653776	mm,
	W =	113.656700	deg,	P =	-118.071394	deg,	R =	67.729579	deg
};
P[66]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2159.173522	mm,	Y =	116.564521	mm,	Z =	648.404673	mm,
	W =	107.024723	deg,	P =	-116.997329	deg,	R =	73.770778	deg
};
P[67]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2146.912280	mm,	Y =	117.226907	mm,	Z =	739.939600	mm,
	W =	101.493690	deg,	P =	-116.389289	deg,	R =	78.924105	deg
};
P[68]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.755359	mm,	Y =	117.872812	mm,	Z =	831.766501	mm,
	W =	101.493690	deg,	P =	-116.389289	deg,	R =	78.924105	deg
};
P[69]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.369532	mm,	Y =	67.834043	mm,	Z =	831.911773	mm,
	W =	96.328075	deg,	P =	-141.351937	deg,	R =	85.861785	deg
};
P[70]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2146.406301	mm,	Y =	67.192624	mm,	Z =	738.925336	mm,
	W =	99.715937	deg,	P =	-141.590734	deg,	R =	83.614318	deg
};
P[71]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2158.756109	mm,	Y =	66.515756	mm,	Z =	646.381773	mm,
	W =	103.898935	deg,	P =	-142.029061	deg,	R =	80.927476	deg
};
P[72]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2176.454633	mm,	Y =	65.800780	mm,	Z =	554.640985	mm,
	W =	109.078463	deg,	P =	-142.803296	deg,	R =	77.653218	deg
};
P[73]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2200.778423	mm,	Y =	65.032568	mm,	Z =	464.463969	mm,
	W =	114.375408	deg,	P =	-143.830002	deg,	R =	74.484122	deg
};
P[74]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2231.802630	mm,	Y =	64.221051	mm,	Z =	376.648297	mm,
	W =	114.375408	deg,	P =	-143.830002	deg,	R =	74.484122	deg
};
P[75]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2230.990292	mm,	Y =	14.189812	mm,	Z =	378.187404	mm,
	W =	129.153189	deg,	P =	-121.846824	deg,	R =	55.469015	deg
};
P[76]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2199.961306	mm,	Y =	15.028679	mm,	Z =	466.032653	mm,
	W =	121.682016	deg,	P =	-119.678527	deg,	R =	61.493569	deg
};
P[77]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2175.764435	mm,	Y =	15.805772	mm,	Z =	555.935151	mm,
	W =	113.740226	deg,	P =	-117.954340	deg,	R =	68.297284	deg
};
P[78]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2158.207575	mm,	Y =	16.523745	mm,	Z =	647.357865	mm,
	W =	106.837311	deg,	P =	-116.901820	deg,	R =	74.459350	deg
};
P[79]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2146.023107	mm,	Y =	17.197317	mm,	Z =	739.595296	mm,
	W =	101.008908	deg,	P =	-116.313665	deg,	R =	79.776192	deg
};
P[80]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.165463	mm,	Y =	17.845173	mm,	Z =	832.129368	mm,
	W =	101.008908	deg,	P =	-116.313665	deg,	R =	79.776192	deg
};
P[81]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.125557	mm,	Y =	-32.185054	mm,	Z =	832.289883	mm,
	W =	96.170926	deg,	P =	-141.322437	deg,	R =	86.216918	deg
};
P[82]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2145.705629	mm,	Y =	-32.812392	mm,	Z =	742.339297	mm,
	W =	99.415347	deg,	P =	-141.517147	deg,	R =	84.181643	deg
};
P[83]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2157.277611	mm,	Y =	-33.472827	mm,	Z =	652.776111	mm,
	W =	103.582061	deg,	P =	-141.896205	deg,	R =	81.623396	deg
};
P[84]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2173.983283	mm,	Y =	-34.172346	mm,	Z =	563.984597	mm,
	W =	108.293391	deg,	P =	-142.503282	deg,	R =	78.777566	deg
};
P[85]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2196.513069	mm,	Y =	-34.915939	mm,	Z =	476.433645	mm,
	W =	114.379477	deg,	P =	-143.565035	deg,	R =	75.210303	deg
};
P[86]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2226.433985	mm,	Y =	-35.700363	mm,	Z =	391.460668	mm,
	W =	114.379477	deg,	P =	-143.565035	deg,	R =	75.210303	deg
};
P[87]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2226.836570	mm,	Y =	-85.718909	mm,	Z =	390.735077	mm,
	W =	128.808019	deg,	P =	-121.628931	deg,	R =	55.989198	deg
};
P[88]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2197.077866	mm,	Y =	-84.965755	mm,	Z =	476.275879	mm,
	W =	120.864650	deg,	P =	-119.154525	deg,	R =	63.275311	deg
};
P[89]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2174.462538	mm,	Y =	-84.225641	mm,	Z =	563.876799	mm,
	W =	113.608698	deg,	P =	-117.682383	deg,	R =	69.634001	deg
};
P[90]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2157.625306	mm,	Y =	-83.517710	mm,	Z =	652.768276	mm,
	W =	106.690832	deg,	P =	-116.740476	deg,	R =	75.653316	deg
};
P[91]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2145.937219	mm,	Y =	-82.846751	mm,	Z =	742.422260	mm,
	W =	101.052755	deg,	P =	-116.246570	deg,	R =	80.552124	deg
};
P[92]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.280309	mm,	Y =	-82.217010	mm,	Z =	832.343436	mm,
	W =	101.052755	deg,	P =	-116.246570	deg,	R =	80.552124	deg
};
P[93]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2138.745725	mm,	Y =	-132.250906	mm,	Z =	832.261126	mm,
	W =	96.406709	deg,	P =	-141.264462	deg,	R =	86.856007	deg
};
P[94]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2146.721438	mm,	Y =	-132.900840	mm,	Z =	741.150221	mm,
	W =	99.758313	deg,	P =	-141.414824	deg,	R =	84.921465	deg
};
P[95]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2158.864089	mm,	Y =	-133.590921	mm,	Z =	650.467185	mm,
	W =	103.943367	deg,	P =	-141.703712	deg,	R =	82.595941	deg
};
P[96]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2176.203874	mm,	Y =	-134.313079	mm,	Z =	560.589696	mm,
	W =	108.697093	deg,	P =	-142.211832	deg,	R =	79.855121	deg
};
P[97]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2199.435563	mm,	Y =	-135.059349	mm,	Z =	472.037545	mm,
	W =	114.192734	deg,	P =	-143.110447	deg,	R =	76.481831	deg
};
P[98]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2229.380881	mm,	Y =	-135.851827	mm,	Z =	385.816625	mm,
	W =	114.192734	deg,	P =	-143.110447	deg,	R =	76.481831	deg
};
P[99]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2231.190288	mm,	Y =	-185.915413	mm,	Z =	385.285136	mm,
	W =	129.311039	deg,	P =	-121.123547	deg,	R =	57.189001	deg
};
P[100]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2201.134199	mm,	Y =	-185.125713	mm,	Z =	471.892383	mm,
	W =	121.632145	deg,	P =	-118.961717	deg,	R =	63.896342	deg
};
P[101]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2177.838970	mm,	Y =	-184.380944	mm,	Z =	560.469706	mm,
	W =	114.448338	deg,	P =	-117.532505	deg,	R =	70.302255	deg
};
P[102]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2160.281309	mm,	Y =	-183.654810	mm,	Z =	650.365218	mm,
	W =	107.637638	deg,	P =	-116.658752	deg,	R =	76.149849	deg
};
P[103]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2147.808535	mm,	Y =	-182.956403	mm,	Z =	741.058433	mm,
	W =	101.746341	deg,	P =	-116.192045	deg,	R =	81.073316	deg
};
P[104]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2139.576419	mm,	Y =	-182.315058	mm,	Z =	832.061091	mm,
	W =	101.746341	deg,	P =	-116.192045	deg,	R =	81.073316	deg
};
P[105]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2140.768502	mm,	Y =	-232.353554	mm,	Z =	831.898623	mm,
	W =	6.188282	deg,	P =	-84.484452	deg,	R =	175.785645	deg
};
P[106]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2150.302273	mm,	Y =	-233.079819	mm,	Z =	732.967614	mm,
	W =	5.210300	deg,	P =	-81.461247	deg,	R =	177.119834	deg
};
P[107]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2165.047065	mm,	Y =	-233.843926	mm,	Z =	634.685944	mm,
	W =	4.883852	deg,	P =	-78.302681	deg,	R =	177.780252	deg
};
P[108]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2185.217833	mm,	Y =	-234.645887	mm,	Z =	537.257865	mm,
	W =	4.684163	deg,	P =	-73.690617	deg,	R =	178.289550	deg
};
P[109]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2213.114480	mm,	Y =	-235.443292	mm,	Z =	441.890679	mm,
	W =	3.968238	deg,	P =	-70.457813	deg,	R =	178.506061	deg
};
P[110]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2229.697375	mm,	Y =	-235.875771	mm,	Z =	395.155512	mm,
	W =	3.968238	deg,	P =	-70.457813	deg,	R =	178.506061	deg
};
P[111]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2231.797104	mm,	Y =	-285.932983	mm,	Z =	396.657532	mm,
	W =	52.347936	deg,	P =	-57.317015	deg,	R =	126.414863	deg
};
P[112]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2215.375539	mm,	Y =	-285.498784	mm,	Z =	443.513528	mm,
	W =	57.011672	deg,	P =	-59.044801	deg,	R =	122.400602	deg
};
P[113]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2187.532019	mm,	Y =	-284.658802	mm,	Z =	538.676048	mm,
	W =	64.844712	deg,	P =	-61.280003	deg,	R =	115.451390	deg
};
P[114]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2167.227812	mm,	Y =	-283.858605	mm,	Z =	635.668858	mm,
	W =	70.937023	deg,	P =	-62.560326	deg,	R =	109.767058	deg
};
P[115]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2152.270966	mm,	Y =	-283.094897	mm,	Z =	733.600652	mm,
	W =	77.014015	deg,	P =	-63.466488	deg,	R =	104.009888	deg
};
P[116]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2142.307890	mm,	Y =	-282.392658	mm,	Z =	831.980182	mm,
	W =	77.014015	deg,	P =	-63.466488	deg,	R =	104.009888	deg
};
P[117]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2144.176837	mm,	Y =	-332.422631	mm,	Z =	832.517222	mm,
	W =	82.146492	deg,	P =	-38.448247	deg,	R =	97.475118	deg
};
P[118]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2154.824432	mm,	Y =	-333.170167	mm,	Z =	734.043638	mm,
	W =	78.835911	deg,	P =	-37.949760	deg,	R =	100.094649	deg
};
P[119]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2170.021365	mm,	Y =	-333.936330	mm,	Z =	636.142882	mm,
	W =	74.868904	deg,	P =	-37.221854	deg,	R =	102.863915	deg
};
P[120]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2190.731901	mm,	Y =	-334.743489	mm,	Z =	539.164955	mm,
	W =	69.549879	deg,	P =	-35.979683	deg,	R =	106.400078	deg
};
P[121]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2218.853301	mm,	Y =	-335.653321	mm,	Z =	444.233475	mm,
	W =	66.719413	deg,	P =	-34.859893	deg,	R =	109.121870	deg
};
P[122]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2234.977720	mm,	Y =	-336.081874	mm,	Z =	397.518722	mm,
	W =	66.719413	deg,	P =	-34.859893	deg,	R =	109.121870	deg
};
P[123]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2239.754634	mm,	Y =	-386.176085	mm,	Z =	400.486376	mm,
	W =	70.181065	deg,	P =	-9.873467	deg,	R =	99.941267	deg
};
P[124]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2223.088846	mm,	Y =	-385.799516	mm,	Z =	447.118772	mm,
	W =	73.160149	deg,	P =	-10.162395	deg,	R =	100.171442	deg
};
P[125]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2194.599776	mm,	Y =	-384.841590	mm,	Z =	541.792127	mm,
	W =	77.580792	deg,	P =	-11.333730	deg,	R =	97.581210	deg
};
P[126]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2173.617896	mm,	Y =	-384.032260	mm,	Z =	638.363928	mm,
	W =	80.614060	deg,	P =	-11.799987	deg,	R =	96.578962	deg
};
P[127]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2157.735714	mm,	Y =	-383.235275	mm,	Z =	735.884230	mm,
	W =	83.271841	deg,	P =	-12.193559	deg,	R =	95.287146	deg
};
P[128]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2146.367973	mm,	Y =	-382.523871	mm,	Z =	833.860080	mm,
	W =	83.271841	deg,	P =	-12.193559	deg,	R =	95.287146	deg
};
P[129]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2149.312336	mm,	Y =	-432.521559	mm,	Z =	835.556715	mm,
	W =	82.760696	deg,	P =	12.928127	deg,	R =	91.964993	deg
};
P[130]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2160.524279	mm,	Y =	-433.219265	mm,	Z =	745.514588	mm,
	W =	80.619612	deg,	P =	13.094785	deg,	R =	92.029765	deg
};
P[131]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2175.037240	mm,	Y =	-433.986780	mm,	Z =	655.873588	mm,
	W =	77.861125	deg,	P =	13.442210	deg,	R =	92.577490	deg
};
P[132]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2193.799052	mm,	Y =	-434.877749	mm,	Z =	566.952417	mm,
	W =	73.791467	deg,	P =	14.313138	deg,	R =	94.076700	deg
};
P[133]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2218.749146	mm,	Y =	-435.768838	mm,	Z =	479.552460	mm,
	W =	69.241151	deg,	P =	15.294251	deg,	R =	94.775234	deg
};
P[134]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2250.320147	mm,	Y =	-436.566753	mm,	Z =	394.620431	mm,
	W =	69.241151	deg,	P =	15.294251	deg,	R =	94.775234	deg
};
P[135]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2256.614832	mm,	Y =	-486.951595	mm,	Z =	410.040273	mm,
	W =	60.808445	deg,	P =	41.599651	deg,	R =	87.027085	deg
};
P[136]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2237.445175	mm,	Y =	-486.246456	mm,	Z =	456.259298	mm,
	W =	66.497539	deg,	P =	40.469379	deg,	R =	87.205021	deg
};
P[137]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2206.255635	mm,	Y =	-485.185623	mm,	Z =	551.036899	mm,
	W =	72.713899	deg,	P =	39.801139	deg,	R =	88.314149	deg
};
P[138]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2183.035940	mm,	Y =	-484.235157	mm,	Z =	648.051665	mm,
	W =	77.209913	deg,	P =	39.420304	deg,	R =	89.085005	deg
};
P[139]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2165.770821	mm,	Y =	-483.553668	mm,	Z =	746.248205	mm,
	W =	80.722257	deg,	P =	39.536268	deg,	R =	92.453580	deg
};
P[140]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2153.162778	mm,	Y =	-482.827389	mm,	Z =	844.941136	mm,
	W =	80.722257	deg,	P =	39.536268	deg,	R =	92.453580	deg
};
P[141]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2161.434313	mm,	Y =	-533.076622	mm,	Z =	819.339279	mm,
	W =	69.781077	deg,	P =	64.085663	deg,	R =	80.344767	deg
};
P[142]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2176.749643	mm,	Y =	-533.884463	mm,	Z =	721.084810	mm,
	W =	63.117642	deg,	P =	63.640671	deg,	R =	75.262240	deg
};
P[143]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2197.153819	mm,	Y =	-534.723770	mm,	Z =	623.681702	mm,
	W =	54.260508	deg,	P =	62.558235	deg,	R =	68.179889	deg
};
P[144]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2224.444853	mm,	Y =	-535.551775	mm,	Z =	528.302439	mm,
	W =	54.260508	deg,	P =	62.558235	deg,	R =	68.179889	deg
};
P[145]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2202.676663	mm,	Y =	-584.902789	mm,	Z =	650.546034	mm,
	W =	163.219367	deg,	P =	102.399579	deg,	R =	177.881784	deg
};
P[146]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2181.396964	mm,	Y =	-583.852000	mm,	Z =	747.162024	mm,
	W =	166.376752	deg,	P =	98.556733	deg,	R =	177.124900	deg
};
P[147]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2166.737544	mm,	Y =	-583.115772	mm,	Z =	844.713265	mm,
	W =	166.376752	deg,	P =	98.556733	deg,	R =	177.124900	deg
};
P[148]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2175.393201	mm,	Y =	-633.592826	mm,	Z =	859.193243	mm,
	W =	106.272228	deg,	P =	119.335060	deg,	R =	122.547397	deg
};
P[149]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2187.155855	mm,	Y =	-634.189656	mm,	Z =	779.946800	mm,
	W =	106.272228	deg,	P =	119.335060	deg,	R =	122.547397	deg
};
P[150]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2163.640944	mm,	Y =	-641.953108	mm,	Z =	776.514921	mm,
	W =	106.272227	deg,	P =	119.335060	deg,	R =	122.547396	deg
};

/END.