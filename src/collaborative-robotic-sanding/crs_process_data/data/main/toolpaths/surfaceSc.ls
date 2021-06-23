/PROG surfaceSc
/ATTR
OWNER			= MNEDITOR;
COMMENT			= "";
PROG_SIZE		= 4757;
FILE_NAME		= surfaceSc;
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
	2:  R[10]=200 ;
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
	X =	2365.144409	mm,	Y =	677.510384	mm,	Z =	532.923789	mm,
	W =	146.679205	deg,	P =	157.938105	deg,	R =	90.144429	deg
};
P[2]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2388.559177	mm,	Y =	669.698500	mm,	Z =	536.889038	mm,
	W =	146.679204	deg,	P =	157.938105	deg,	R =	90.144428	deg
};
P[3]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2402.566782	mm,	Y =	669.518239	mm,	Z =	454.097981	mm,
	W =	152.377629	deg,	P =	152.025755	deg,	R =	88.716015	deg
};
P[4]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2423.765557	mm,	Y =	668.830865	mm,	Z =	372.977378	mm,
	W =	152.377629	deg,	P =	152.025755	deg,	R =	88.716015	deg
};
P[5]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2437.079358	mm,	Y =	617.788645	mm,	Z =	258.894670	mm,
	W =	146.962311	deg,	P =	167.436478	deg,	R =	68.019916	deg
};
P[6]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2410.357957	mm,	Y =	618.230305	mm,	Z =	347.673653	mm,
	W =	144.715161	deg,	P =	172.996777	deg,	R =	70.247124	deg
};
P[7]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2389.968702	mm,	Y =	618.773266	mm,	Z =	438.162034	mm,
	W =	141.261763	deg,	P =	176.680265	deg,	R =	71.597134	deg
};
P[8]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2376.725897	mm,	Y =	619.459311	mm,	Z =	529.625559	mm,
	W =	141.261763	deg,	P =	176.680265	deg,	R =	71.597134	deg
};
P[9]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2368.504127	mm,	Y =	569.245341	mm,	Z =	530.562493	mm,
	W =	143.838076	deg,	P =	-163.443718	deg,	R =	53.198222	deg
};
P[10]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2380.063768	mm,	Y =	568.767469	mm,	Z =	432.211307	mm,
	W =	145.638056	deg,	P =	-168.308093	deg,	R =	50.705302	deg
};
P[11]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2398.999383	mm,	Y =	567.994170	mm,	Z =	334.998962	mm,
	W =	148.728288	deg,	P =	-170.710399	deg,	R =	50.164307	deg
};
P[12]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2424.531064	mm,	Y =	567.293730	mm,	Z =	239.167977	mm,
	W =	152.159960	deg,	P =	-175.530500	deg,	R =	48.962680	deg
};
P[13]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2459.259922	mm,	Y =	566.422370	mm,	Z =	146.755625	mm,
	W =	152.159960	deg,	P =	-175.530500	deg,	R =	48.962680	deg
};
P[14]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2482.335990	mm,	Y =	516.271222	mm,	Z =	55.933225	mm,
	W =	153.579454	deg,	P =	162.812234	deg,	R =	68.788967	deg
};
P[15]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2441.562074	mm,	Y =	516.726433	mm,	Z =	145.832061	mm,
	W =	149.389004	deg,	P =	170.965654	deg,	R =	70.653582	deg
};
P[16]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2411.480226	mm,	Y =	517.106412	mm,	Z =	239.705435	mm,
	W =	146.822547	deg,	P =	177.955956	deg,	R =	73.773883	deg
};
P[17]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2388.995880	mm,	Y =	517.858821	mm,	Z =	335.633900	mm,
	W =	143.948807	deg,	P =	179.243311	deg,	R =	74.019036	deg
};
P[18]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2371.749410	mm,	Y =	518.555514	mm,	Z =	432.660046	mm,
	W =	140.824973	deg,	P =	-179.214811	deg,	R =	74.524798	deg
};
P[19]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2360.351954	mm,	Y =	519.265004	mm,	Z =	530.288852	mm,
	W =	140.824973	deg,	P =	-179.214811	deg,	R =	74.524798	deg
};
P[20]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2356.379264	mm,	Y =	468.953384	mm,	Z =	516.607098	mm,
	W =	145.303460	deg,	P =	-160.291686	deg,	R =	55.448610	deg
};
P[21]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2361.620363	mm,	Y =	468.615822	mm,	Z =	466.724298	mm,
	W =	146.914561	deg,	P =	-161.606336	deg,	R =	54.742074	deg
};
P[22]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2374.906132	mm,	Y =	467.908286	mm,	Z =	372.133322	mm,
	W =	149.461389	deg,	P =	-163.289039	deg,	R =	53.981637	deg
};
P[23]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2393.389291	mm,	Y =	467.404529	mm,	Z =	276.780119	mm,
	W =	150.536835	deg,	P =	-167.866598	deg,	R =	51.776194	deg
};
P[24]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2417.784597	mm,	Y =	466.717622	mm,	Z =	182.667455	mm,
	W =	153.573388	deg,	P =	-172.006984	deg,	R =	50.493525	deg
};
P[25]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2450.094652	mm,	Y =	466.034772	mm,	Z =	91.164262	mm,
	W =	154.291731	deg,	P =	-175.402987	deg,	R =	49.434913	deg
};
P[26]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2468.349993	mm,	Y =	465.600022	mm,	Z =	46.288223	mm,
	W =	154.291731	deg,	P =	-175.402987	deg,	R =	49.434913	deg
};
P[27]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2458.054055	mm,	Y =	415.497916	mm,	Z =	45.168876	mm,
	W =	159.676155	deg,	P =	-162.347386	deg,	R =	26.631509	deg
};
P[28]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2423.999901	mm,	Y =	416.086327	mm,	Z =	137.315297	mm,
	W =	160.805950	deg,	P =	-156.751676	deg,	R =	28.053523	deg
};
P[29]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2397.253667	mm,	Y =	416.902779	mm,	Z =	231.785977	mm,
	W =	158.659303	deg,	P =	-153.225562	deg,	R =	28.976689	deg
};
P[30]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2377.206674	mm,	Y =	417.643531	mm,	Z =	327.872112	mm,
	W =	157.219087	deg,	P =	-150.294738	deg,	R =	29.919273	deg
};
P[31]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2362.507165	mm,	Y =	418.261446	mm,	Z =	424.859893	mm,
	W =	157.129712	deg,	P =	-147.623196	deg,	R =	30.977519	deg
};
P[32]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2351.787796	mm,	Y =	418.963482	mm,	Z =	522.208631	mm,
	W =	157.129712	deg,	P =	-147.623196	deg,	R =	30.977519	deg
};
P[33]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2349.638191	mm,	Y =	368.839306	mm,	Z =	512.797012	mm,
	W =	146.060174	deg,	P =	-158.878098	deg,	R =	56.461207	deg
};
P[34]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2359.189384	mm,	Y =	368.194972	mm,	Z =	418.886730	mm,
	W =	148.311545	deg,	P =	-160.631459	deg,	R =	55.446353	deg
};
P[35]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2373.202404	mm,	Y =	367.526594	mm,	Z =	325.538408	mm,
	W =	150.506199	deg,	P =	-162.573467	deg,	R =	54.452715	deg
};
P[36]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2391.803014	mm,	Y =	366.841904	mm,	Z =	232.928957	mm,
	W =	153.262219	deg,	P =	-165.265896	deg,	R =	53.280015	deg
};
P[37]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2416.392969	mm,	Y =	366.128682	mm,	Z =	141.678593	mm,
	W =	156.665749	deg,	P =	-168.796115	deg,	R =	52.068008	deg
};
P[38]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2448.354718	mm,	Y =	365.304498	mm,	Z =	53.093603	mm,
	W =	156.665749	deg,	P =	-168.796115	deg,	R =	52.068008	deg
};
P[39]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2437.942936	mm,	Y =	315.409584	mm,	Z =	66.888537	mm,
	W =	164.206334	deg,	P =	-159.586892	deg,	R =	27.517547	deg
};
P[40]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2421.199435	mm,	Y =	315.774921	mm,	Z =	113.385204	mm,
	W =	163.194577	deg,	P =	-156.065918	deg,	R =	28.341333	deg
};
P[41]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2393.590447	mm,	Y =	316.572388	mm,	Z =	208.048976	mm,
	W =	161.173401	deg,	P =	-152.132797	deg,	R =	29.442179	deg
};
P[42]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2373.192673	mm,	Y =	317.366251	mm,	Z =	304.496247	mm,
	W =	159.030471	deg,	P =	-149.345991	deg,	R =	30.358200	deg
};
P[43]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2358.469868	mm,	Y =	318.075828	mm,	Z =	401.902861	mm,
	W =	157.690535	deg,	P =	-146.911949	deg,	R =	31.300277	deg
};
P[44]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2348.315490	mm,	Y =	318.776163	mm,	Z =	499.730809	mm,
	W =	157.690535	deg,	P =	-146.911949	deg,	R =	31.300277	deg
};
P[45]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2346.275565	mm,	Y =	268.690496	mm,	Z =	500.480347	mm,
	W =	146.458799	deg,	P =	-157.878720	deg,	R =	57.167508	deg
};
P[46]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2355.148696	mm,	Y =	268.078250	mm,	Z =	409.644416	mm,
	W =	148.331667	deg,	P =	-159.446841	deg,	R =	56.186113	deg
};
P[47]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2367.696021	mm,	Y =	267.424691	mm,	Z =	319.185337	mm,
	W =	151.166319	deg,	P =	-161.521552	deg,	R =	55.064363	deg
};
P[48]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2385.549269	mm,	Y =	266.746206	mm,	Z =	229.610433	mm,
	W =	153.834192	deg,	P =	-163.803131	deg,	R =	54.004131	deg
};
P[49]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2408.693355	mm,	Y =	265.966987	mm,	Z =	141.189532	mm,
	W =	158.010320	deg,	P =	-166.255412	deg,	R =	53.117604	deg
};
P[50]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2438.897268	mm,	Y =	265.174154	mm,	Z =	55.259393	mm,
	W =	158.010320	deg,	P =	-166.255412	deg,	R =	53.117604	deg
};
P[51]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2437.039948	mm,	Y =	215.135908	mm,	Z =	52.717146	mm,
	W =	166.225581	deg,	P =	-157.984351	deg,	R =	27.938213	deg
};
P[52]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2406.758564	mm,	Y =	215.957677	mm,	Z =	139.289897	mm,
	W =	163.492921	deg,	P =	-154.112231	deg,	R =	28.891623	deg
};
P[53]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2383.531340	mm,	Y =	216.699146	mm,	Z =	227.914467	mm,
	W =	161.594584	deg,	P =	-150.945077	deg,	R =	29.849720	deg
};
P[54]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2365.886865	mm,	Y =	217.377080	mm,	Z =	317.829028	mm,
	W =	160.037783	deg,	P =	-147.917237	deg,	R =	30.939133	deg
};
P[55]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2353.432809	mm,	Y =	218.033494	mm,	Z =	408.538084	mm,
	W =	158.721184	deg,	P =	-145.762992	deg,	R =	31.825927	deg
};
P[56]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2344.817647	mm,	Y =	218.678020	mm,	Z =	499.537404	mm,
	W =	158.721184	deg,	P =	-145.762992	deg,	R =	31.825927	deg
};
P[57]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2343.814797	mm,	Y =	168.613559	mm,	Z =	498.728995	mm,
	W =	146.679259	deg,	P =	-156.952355	deg,	R =	57.822375	deg
};
P[58]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2352.275198	mm,	Y =	167.989508	mm,	Z =	406.846271	mm,
	W =	148.789698	deg,	P =	-158.505005	deg,	R =	56.798077	deg
};
P[59]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2364.710933	mm,	Y =	167.328980	mm,	Z =	315.377708	mm,
	W =	151.558327	deg,	P =	-160.462586	deg,	R =	55.665517	deg
};
P[60]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2382.312369	mm,	Y =	166.637438	mm,	Z =	224.706388	mm,
	W =	154.744833	deg,	P =	-162.911552	deg,	R =	54.460855	deg
};
P[61]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2406.011793	mm,	Y =	165.878493	mm,	Z =	135.428317	mm,
	W =	158.514448	deg,	P =	-165.506794	deg,	R =	53.423602	deg
};
P[62]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2436.477364	mm,	Y =	165.077375	mm,	Z =	48.524805	mm,
	W =	158.514448	deg,	P =	-165.506794	deg,	R =	53.423602	deg
};
P[63]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2435.347867	mm,	Y =	115.016367	mm,	Z =	47.859356	mm,
	W =	167.439126	deg,	P =	-157.410112	deg,	R =	28.084210	deg
};
P[64]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2404.759784	mm,	Y =	115.834556	mm,	Z =	135.144605	mm,
	W =	164.894890	deg,	P =	-153.614117	deg,	R =	29.054422	deg
};
P[65]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2381.039279	mm,	Y =	116.592635	mm,	Z =	224.472599	mm,
	W =	162.638191	deg,	P =	-150.144036	deg,	R =	30.139664	deg
};
P[66]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2363.606935	mm,	Y =	117.296521	mm,	Z =	315.223496	mm,
	W =	160.815018	deg,	P =	-147.293133	deg,	R =	31.197445	deg
};
P[67]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2351.345693	mm,	Y =	117.958907	mm,	Z =	406.758423	mm,
	W =	159.354168	deg,	P =	-145.037128	deg,	R =	32.157396	deg
};
P[68]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2343.188772	mm,	Y =	118.604812	mm,	Z =	498.585324	mm,
	W =	159.354168	deg,	P =	-145.037128	deg,	R =	32.157396	deg
};
P[69]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2342.802945	mm,	Y =	68.566043	mm,	Z =	498.730596	mm,
	W =	146.695687	deg,	P =	-156.311670	deg,	R =	58.280376	deg
};
P[70]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2350.839714	mm,	Y =	67.924624	mm,	Z =	405.744159	mm,
	W =	149.085845	deg,	P =	-157.809828	deg,	R =	57.248125	deg
};
P[71]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2363.189522	mm,	Y =	67.247756	mm,	Z =	313.200596	mm,
	W =	152.020905	deg,	P =	-159.686419	deg,	R =	56.107622	deg
};
P[72]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2380.888046	mm,	Y =	66.532780	mm,	Z =	221.459808	mm,
	W =	155.614927	deg,	P =	-162.118833	deg,	R =	54.848927	deg
};
P[73]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2405.211836	mm,	Y =	65.764568	mm,	Z =	131.282792	mm,
	W =	159.328158	deg,	P =	-164.655415	deg,	R =	53.765409	deg
};
P[74]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2436.236043	mm,	Y =	64.953051	mm,	Z =	43.467120	mm,
	W =	159.328158	deg,	P =	-164.655415	deg,	R =	53.765409	deg
};
P[75]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2435.423705	mm,	Y =	14.921812	mm,	Z =	45.006227	mm,
	W =	168.379139	deg,	P =	-157.097444	deg,	R =	28.156956	deg
};
P[76]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2404.394719	mm,	Y =	15.760679	mm,	Z =	132.851476	mm,
	W =	165.688424	deg,	P =	-153.432418	deg,	R =	29.109013	deg
};
P[77]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2380.197848	mm,	Y =	16.537772	mm,	Z =	222.753974	mm,
	W =	163.173512	deg,	P =	-149.865700	deg,	R =	30.238477	deg
};
P[78]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2362.640988	mm,	Y =	17.255745	mm,	Z =	314.176688	mm,
	W =	161.173049	deg,	P =	-146.984414	deg,	R =	31.323423	deg
};
P[79]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2350.456520	mm,	Y =	17.929317	mm,	Z =	406.414119	mm,
	W =	159.537853	deg,	P =	-144.675845	deg,	R =	32.322573	deg
};
P[80]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2342.598876	mm,	Y =	18.577173	mm,	Z =	498.948191	mm,
	W =	159.537853	deg,	P =	-144.675845	deg,	R =	32.322573	deg
};
P[81]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2342.558970	mm,	Y =	-31.453054	mm,	Z =	499.108706	mm,
	W =	146.692534	deg,	P =	-156.079082	deg,	R =	58.448529	deg
};
P[82]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2350.139042	mm,	Y =	-32.080392	mm,	Z =	409.158120	mm,
	W =	149.042207	deg,	P =	-157.424176	deg,	R =	57.499699	deg
};
P[83]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2361.711024	mm,	Y =	-32.740827	mm,	Z =	319.594934	mm,
	W =	152.033231	deg,	P =	-159.188860	deg,	R =	56.391234	deg
};
P[84]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2378.416696	mm,	Y =	-33.440346	mm,	Z =	230.803420	mm,
	W =	155.381896	deg,	P =	-161.261804	deg,	R =	55.262869	deg
};
P[85]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2400.946482	mm,	Y =	-34.183939	mm,	Z =	143.252468	mm,
	W =	159.699143	deg,	P =	-164.053699	deg,	R =	53.999099	deg
};
P[86]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2430.867398	mm,	Y =	-34.968363	mm,	Z =	58.279491	mm,
	W =	159.699143	deg,	P =	-164.053699	deg,	R =	53.999099	deg
};
P[87]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2431.269983	mm,	Y =	-84.986909	mm,	Z =	57.553900	mm,
	W =	168.445288	deg,	P =	-156.755348	deg,	R =	28.236254	deg
};
P[88]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2401.511279	mm,	Y =	-84.233755	mm,	Z =	143.094702	mm,
	W =	166.293789	deg,	P =	-152.444387	deg,	R =	29.393301	deg
};
P[89]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2378.895951	mm,	Y =	-83.493641	mm,	Z =	230.695622	mm,
	W =	164.110714	deg,	P =	-149.213154	deg,	R =	30.462401	deg
};
P[90]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2362.058719	mm,	Y =	-82.785710	mm,	Z =	319.587099	mm,
	W =	161.974851	deg,	P =	-146.451172	deg,	R =	31.537074	deg
};
P[91]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2350.370632	mm,	Y =	-82.114751	mm,	Z =	409.241083	mm,
	W =	160.191601	deg,	P =	-144.347157	deg,	R =	32.470422	deg
};
P[92]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2342.713722	mm,	Y =	-81.485010	mm,	Z =	499.162259	mm,
	W =	160.191601	deg,	P =	-144.347157	deg,	R =	32.470422	deg
};
P[93]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2343.179138	mm,	Y =	-131.518906	mm,	Z =	499.079949	mm,
	W =	147.206418	deg,	P =	-155.656620	deg,	R =	58.745815	deg
};
P[94]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2351.154851	mm,	Y =	-132.168840	mm,	Z =	407.969044	mm,
	W =	149.721702	deg,	P =	-156.916136	deg,	R =	57.820236	deg
};
P[95]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2363.297502	mm,	Y =	-132.858921	mm,	Z =	317.286008	mm,
	W =	152.856604	deg,	P =	-158.487752	deg,	R =	56.777299	deg
};
P[96]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2380.637287	mm,	Y =	-133.581079	mm,	Z =	227.408519	mm,
	W =	156.317414	deg,	P =	-160.436751	deg,	R =	55.647840	deg
};
P[97]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2403.868976	mm,	Y =	-134.327349	mm,	Z =	138.856368	mm,
	W =	160.156910	deg,	P =	-163.006623	deg,	R =	54.403798	deg
};
P[98]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2433.814294	mm,	Y =	-135.119827	mm,	Z =	52.635448	mm,
	W =	160.156910	deg,	P =	-163.006623	deg,	R =	54.403798	deg
};
P[99]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2435.623701	mm,	Y =	-185.183413	mm,	Z =	52.103959	mm,
	W =	169.906107	deg,	P =	-155.966376	deg,	R =	28.402278	deg
};
P[100]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2405.567612	mm,	Y =	-184.393713	mm,	Z =	138.711206	mm,
	W =	167.565881	deg,	P =	-152.093877	deg,	R =	29.475534	deg
};
P[101]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2382.272383	mm,	Y =	-183.648944	mm,	Z =	227.288529	mm,
	W =	165.494706	deg,	P =	-148.878483	deg,	R =	30.555371	deg
};
P[102]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2364.714722	mm,	Y =	-182.922810	mm,	Z =	317.184041	mm,
	W =	163.325907	deg,	P =	-146.221037	deg,	R =	31.608045	deg
};
P[103]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2352.241948	mm,	Y =	-182.224403	mm,	Z =	407.877256	mm,
	W =	161.301978	deg,	P =	-144.121267	deg,	R =	32.557297	deg
};
P[104]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2344.009832	mm,	Y =	-181.583058	mm,	Z =	498.879914	mm,
	W =	161.301978	deg,	P =	-144.121267	deg,	R =	32.557297	deg
};
P[105]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2345.201915	mm,	Y =	-231.621554	mm,	Z =	498.717446	mm,
	W =	2.326967	deg,	P =	-39.498105	deg,	R =	179.475528	deg
};
P[106]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2354.735686	mm,	Y =	-232.347819	mm,	Z =	399.786437	mm,
	W =	2.677983	deg,	P =	-36.470705	deg,	R =	179.468429	deg
};
P[107]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2369.480478	mm,	Y =	-233.111926	mm,	Z =	301.504767	mm,
	W =	3.005826	deg,	P =	-33.310065	deg,	R =	179.461621	deg
};
P[108]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2389.651246	mm,	Y =	-233.913887	mm,	Z =	204.076688	mm,
	W =	3.305413	deg,	P =	-28.696405	deg,	R =	179.452481	deg
};
P[109]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2417.547893	mm,	Y =	-234.711292	mm,	Z =	108.709502	mm,
	W =	2.798263	deg,	P =	-25.462924	deg,	R =	179.446567	deg
};
P[110]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2434.130788	mm,	Y =	-235.143771	mm,	Z =	61.974335	mm,
	W =	2.798263	deg,	P =	-25.462924	deg,	R =	179.446567	deg
};
P[111]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2436.230517	mm,	Y =	-285.200983	mm,	Z =	63.476355	mm,
	W =	14.605780	deg,	P =	-21.622285	deg,	R =	152.131470	deg
};
P[112]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2419.808952	mm,	Y =	-284.766784	mm,	Z =	110.332351	mm,
	W =	16.087573	deg,	P =	-24.299298	deg,	R =	151.542509	deg
};
P[113]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2391.965432	mm,	Y =	-283.926802	mm,	Z =	205.494871	mm,
	W =	18.362712	deg,	P =	-28.300526	deg,	R =	150.475424	deg
};
P[114]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2371.661225	mm,	Y =	-283.126605	mm,	Z =	302.487681	mm,
	W =	19.896381	deg,	P =	-31.155007	deg,	R =	149.552467	deg
};
P[115]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2356.704379	mm,	Y =	-282.362897	mm,	Z =	400.419475	mm,
	W =	21.372401	deg,	P =	-33.790550	deg,	R =	148.564916	deg
};
P[116]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2346.741303	mm,	Y =	-281.660658	mm,	Z =	498.799005	mm,
	W =	21.372401	deg,	P =	-33.790550	deg,	R =	148.564916	deg
};
P[117]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2348.610250	mm,	Y =	-331.690631	mm,	Z =	499.336045	mm,
	W =	33.217700	deg,	P =	-21.570105	deg,	R =	123.385205	deg
};
P[118]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2359.257845	mm,	Y =	-332.438167	mm,	Z =	400.862461	mm,
	W =	31.151681	deg,	P =	-19.701408	deg,	R =	124.450599	deg
};
P[119]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2374.454778	mm,	Y =	-333.204330	mm,	Z =	302.961705	mm,
	W =	28.548517	deg,	P =	-17.600102	deg,	R =	125.468257	deg
};
P[120]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2395.165314	mm,	Y =	-334.011489	mm,	Z =	205.983778	mm,
	W =	25.017495	deg,	P =	-14.706351	deg,	R =	126.621453	deg
};
P[121]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2423.286714	mm,	Y =	-334.921321	mm,	Z =	111.052298	mm,
	W =	23.566310	deg,	P =	-12.362455	deg,	R =	127.469189	deg
};
P[122]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2439.411133	mm,	Y =	-335.349874	mm,	Z =	64.337545	mm,
	W =	23.566310	deg,	P =	-12.362455	deg,	R =	127.469189	deg
};
P[123]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2444.188047	mm,	Y =	-385.444085	mm,	Z =	67.305199	mm,
	W =	26.034997	deg,	P =	-0.056370	deg,	R =	103.976010	deg
};
P[124]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2427.522259	mm,	Y =	-385.067516	mm,	Z =	113.937595	mm,
	W =	29.053607	deg,	P =	-0.105949	deg,	R =	104.339877	deg
};
P[125]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2399.033189	mm,	Y =	-384.109590	mm,	Z =	208.610950	mm,
	W =	33.015823	deg,	P =	-2.722158	deg,	R =	103.337913	deg
};
P[126]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2378.051309	mm,	Y =	-383.300260	mm,	Z =	305.182751	mm,
	W =	35.869068	deg,	P =	-3.743939	deg,	R =	102.966546	deg
};
P[127]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2362.169127	mm,	Y =	-382.503275	mm,	Z =	402.703053	mm,
	W =	38.305122	deg,	P =	-4.914186	deg,	R =	102.346626	deg
};
P[128]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2350.801386	mm,	Y =	-381.791871	mm,	Z =	500.678903	mm,
	W =	38.305122	deg,	P =	-4.914186	deg,	R =	102.346626	deg
};
P[129]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2353.745749	mm,	Y =	-431.789559	mm,	Z =	502.375538	mm,
	W =	36.815807	deg,	P =	10.476448	deg,	R =	82.134389	deg
};
P[130]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2364.957692	mm,	Y =	-432.487265	mm,	Z =	412.333411	mm,
	W =	34.645989	deg,	P =	10.637669	deg,	R =	82.057152	deg
};
P[131]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2379.470653	mm,	Y =	-433.254780	mm,	Z =	322.692411	mm,
	W =	31.785034	deg,	P =	11.262545	deg,	R =	82.179519	deg
};
P[132]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2398.232465	mm,	Y =	-434.145749	mm,	Z =	233.771240	mm,
	W =	27.436809	deg,	P =	12.915917	deg,	R =	82.566466	deg
};
P[133]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2423.182559	mm,	Y =	-435.036838	mm,	Z =	146.371283	mm,
	W =	22.648891	deg,	P =	14.081263	deg,	R =	82.313234	deg
};
P[134]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2454.753560	mm,	Y =	-435.834753	mm,	Z =	61.439254	mm,
	W =	22.648891	deg,	P =	14.081263	deg,	R =	82.313234	deg
};
P[135]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2461.048245	mm,	Y =	-486.219595	mm,	Z =	76.859096	mm,
	W =	8.879693	deg,	P =	26.234064	deg,	R =	56.361804	deg
};
P[136]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2441.878588	mm,	Y =	-485.514456	mm,	Z =	123.078121	mm,
	W =	14.924113	deg,	P =	25.639726	deg,	R =	57.441258	deg
};
P[137]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2410.689048	mm,	Y =	-484.453623	mm,	Z =	217.855722	mm,
	W =	20.932350	deg,	P =	25.890633	deg,	R =	58.607219	deg
};
P[138]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2387.469353	mm,	Y =	-483.503157	mm,	Z =	314.870488	mm,
	W =	25.261941	deg,	P =	26.122573	deg,	R =	59.348548	deg
};
P[139]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2370.204234	mm,	Y =	-482.821668	mm,	Z =	413.067028	mm,
	W =	27.395592	deg,	P =	28.259544	deg,	R =	61.018701	deg
};
P[140]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2357.596191	mm,	Y =	-482.095389	mm,	Z =	511.759959	mm,
	W =	27.395592	deg,	P =	28.259544	deg,	R =	61.018701	deg
};
P[141]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2365.867726	mm,	Y =	-532.344622	mm,	Z =	486.158102	mm,
	W =	10.589921	deg,	P =	35.744860	deg,	R =	32.061607	deg
};
P[142]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2381.183056	mm,	Y =	-533.152463	mm,	Z =	387.903633	mm,
	W =	7.909345	deg,	P =	33.622482	deg,	R =	31.041552	deg
};
P[143]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2401.587232	mm,	Y =	-533.991770	mm,	Z =	290.500525	mm,
	W =	4.682878	deg,	P =	30.425659	deg,	R =	29.746068	deg
};
P[144]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2428.878266	mm,	Y =	-534.819775	mm,	Z =	195.121262	mm,
	W =	4.682878	deg,	P =	30.425659	deg,	R =	29.746068	deg
};
P[145]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2407.110076	mm,	Y =	-584.170789	mm,	Z =	317.364857	mm,
	W =	164.997306	deg,	P =	147.392514	deg,	R =	179.460169	deg
};
P[146]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2385.830377	mm,	Y =	-583.120000	mm,	Z =	413.980847	mm,
	W =	168.904029	deg,	P =	143.547290	deg,	R =	179.468378	deg
};
P[147]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2371.170957	mm,	Y =	-582.383772	mm,	Z =	511.532088	mm,
	W =	168.904029	deg,	P =	143.547290	deg,	R =	179.468378	deg
};
P[148]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2379.826614	mm,	Y =	-632.860826	mm,	Z =	526.012066	mm,
	W =	147.589418	deg,	P =	154.528642	deg,	R =	152.778243	deg
};
P[149]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2391.589268	mm,	Y =	-633.457656	mm,	Z =	446.765623	mm,
	W =	147.589418	deg,	P =	154.528642	deg,	R =	152.778243	deg
};
P[150]{
   GP1:
	UF : 0, UT : 1,		CONFIG : 'F U T, 0, 0, 0',
	X =	2368.074357	mm,	Y =	-641.221108	mm,	Z =	443.333744	mm,
	W =	147.589418	deg,	P =	154.528642	deg,	R =	152.778243	deg
};

/END.