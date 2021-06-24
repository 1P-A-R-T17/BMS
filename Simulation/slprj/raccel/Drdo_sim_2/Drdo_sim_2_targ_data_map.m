  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 155;
      section.data(155)  = dumData; %prealloc
      
	  ;% rtP.Battery_BatType
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Battery1_BatType
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Battery2_BatType
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.PWM_Period
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.PWM7_Period
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Constant_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Constant_Value_efypwvyyax
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Constant_Value_ogegtmkzv0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Constant_Value_pbqzqfbpnm
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Constant_Value_hu3rmuppbn
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Constant_Value_h5irp45zuu
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Constant_Value_bksqnhysc0
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Constant_Value_owtewy0ssm
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.Constant_Value_k5pwul1wle
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.itinit1_InitialCondition
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.R2_Gain
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Currentfilter_A
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.Currentfilter_C
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.itinit_InitialCondition
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.inti_UpperSat
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.inti_LowerSat
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Gain_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.R3_Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.Integrator2_IC
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.BAL_A
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.BAL_C
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.R1_Gain
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.itinit1_InitialCondition_l3j5mkh0dv
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtP.R2_Gain_jrqfqsl4vo
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtP.Currentfilter_A_hazdhojaym
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtP.Currentfilter_C_ldprzne4qv
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtP.itinit_InitialCondition_pv4h4vt0ps
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtP.inti_UpperSat_itldayqrxp
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtP.inti_LowerSat_lz3gh0icex
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtP.Gain_Gain_ozvwrv1fuy
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtP.R3_Gain_dgx1dntlxw
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtP.Integrator2_IC_finfcihmmt
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtP.Saturation_UpperSat_lxx4j3fnoa
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtP.Saturation_LowerSat_kwi433xk5g
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtP.BAL_A_cudqa1u03y
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtP.BAL_C_pnvzkp4ayj
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtP.R1_Gain_k1h1x1zryv
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtP.itinit1_InitialCondition_go30gfvhlp
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtP.R2_Gain_fij43s2whq
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtP.Currentfilter_A_pyl0ygpghg
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtP.Currentfilter_C_hx4sknoziy
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtP.itinit_InitialCondition_nf4pvnucgc
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtP.inti_UpperSat_nowwhgaxwk
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtP.inti_LowerSat_cwekkzbyq1
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtP.Gain_Gain_jbuudt1ftk
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtP.R3_Gain_de1tgv0zzw
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtP.Integrator2_IC_kqbwod02j2
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtP.Saturation_UpperSat_blj3ug4rzx
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtP.Saturation_LowerSat_o0i20janpw
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtP.BAL_A_n35zxahhei
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtP.BAL_C_ix2bm3qtha
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtP.R1_Gain_elo0441xsu
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtP.StateSpace_P1_Size
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtP.StateSpace_P1
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 61;
	
	  ;% rtP.StateSpace_P2_Size
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 3956;
	
	  ;% rtP.StateSpace_P2
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 3958;
	
	  ;% rtP.StateSpace_P3_Size
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 3962;
	
	  ;% rtP.StateSpace_P3
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 3964;
	
	  ;% rtP.StateSpace_P4_Size
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 3973;
	
	  ;% rtP.StateSpace_P4
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 3975;
	
	  ;% rtP.StateSpace_P5_Size
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 7680;
	
	  ;% rtP.StateSpace_P5
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 7682;
	
	  ;% rtP.StateSpace_P6_Size
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 7732;
	
	  ;% rtP.StateSpace_P6
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 7734;
	
	  ;% rtP.StateSpace_P7_Size
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 7759;
	
	  ;% rtP.StateSpace_P7
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 7761;
	
	  ;% rtP.StateSpace_P8_Size
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 7786;
	
	  ;% rtP.StateSpace_P8
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 7788;
	
	  ;% rtP.StateSpace_P9_Size
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 7813;
	
	  ;% rtP.StateSpace_P9
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 7815;
	
	  ;% rtP.StateSpace_P10_Size
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 7816;
	
	  ;% rtP.StateSpace_P10
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 7818;
	
	  ;% rtP.R4_Gain
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 7819;
	
	  ;% rtP.Saturation_UpperSat_pcz043fnep
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 7820;
	
	  ;% rtP.Saturation_LowerSat_b05y2t0vvl
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 7821;
	
	  ;% rtP.donotdeletethisgain_Gain
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 7822;
	
	  ;% rtP.R_Gain
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 7823;
	
	  ;% rtP.R4_Gain_ayggl2vp1n
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 7824;
	
	  ;% rtP.Saturation_UpperSat_aqwzuangfk
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 7825;
	
	  ;% rtP.Saturation_LowerSat_bcd3czsgyq
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 7826;
	
	  ;% rtP.donotdeletethisgain_Gain_bg3gl2myht
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 7827;
	
	  ;% rtP.R_Gain_jzgvbxeufj
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 7828;
	
	  ;% rtP.R4_Gain_ckkisgzyfx
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 7829;
	
	  ;% rtP.Saturation_UpperSat_i3x3oscagf
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 7830;
	
	  ;% rtP.Saturation_LowerSat_gnz45aadu0
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 7831;
	
	  ;% rtP.donotdeletethisgain_Gain_o42imifl5k
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 7832;
	
	  ;% rtP.R_Gain_g4gmpqe5wx
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 7833;
	
	  ;% rtP.Gain4_Gain
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 7834;
	
	  ;% rtP.Gain1_Gain
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 7835;
	
	  ;% rtP.Gain2_Gain
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 7836;
	
	  ;% rtP.Gain4_Gain_kh00znyazs
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 7837;
	
	  ;% rtP.Gain1_Gain_og11bwmhu2
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 7838;
	
	  ;% rtP.Gain2_Gain_m4x3vq3y1f
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 7839;
	
	  ;% rtP.Gain4_Gain_fstjjgzlds
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 7840;
	
	  ;% rtP.Gain1_Gain_anymdqpqln
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 7841;
	
	  ;% rtP.Gain2_Gain_jptbha03po
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 7842;
	
	  ;% rtP.donotdeletethisgain_Gain_aakwgyoy4i
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 7843;
	
	  ;% rtP.donotdeletethisgain_Gain_m54lmnwzgw
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 7844;
	
	  ;% rtP.donotdeletethisgain_Gain_f1vxkbch2y
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 7845;
	
	  ;% rtP.donotdeletethisgain_Gain_ikuam0amnb
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 7846;
	
	  ;% rtP.Constant_Value_jorngiczgp
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 7847;
	
	  ;% rtP.Constant1_Value
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 7848;
	
	  ;% rtP.Constant12_Value
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 7849;
	
	  ;% rtP.Constant9_Value
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 7850;
	
	  ;% rtP.Constant1_Value_ks0gbwvaxk
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 7851;
	
	  ;% rtP.Constant2_Value
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 7852;
	
	  ;% rtP.Constant3_Value
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 7853;
	
	  ;% rtP.Constant4_Value
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 7854;
	
	  ;% rtP.Constant_Value_fzmb45jy2r
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 7855;
	
	  ;% rtP.Constant1_Value_jelmmtr1rj
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 7856;
	
	  ;% rtP.Constant12_Value_df3z3yuypl
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 7857;
	
	  ;% rtP.Constant9_Value_bfo0fnc5l1
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 7858;
	
	  ;% rtP.Constant1_Value_jxqfbvs00y
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 7859;
	
	  ;% rtP.Constant2_Value_nbkvr3eqsy
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 7860;
	
	  ;% rtP.Constant3_Value_k030zkojhy
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 7861;
	
	  ;% rtP.Constant4_Value_p1xz0cpgth
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 7862;
	
	  ;% rtP.Constant_Value_kiu123temw
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 7863;
	
	  ;% rtP.Constant1_Value_jj3f5fu3xp
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 7864;
	
	  ;% rtP.Constant12_Value_ktnzmkcekm
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 7865;
	
	  ;% rtP.Constant9_Value_nhyzz1ckmw
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 7866;
	
	  ;% rtP.Constant1_Value_gbfcrdkgqa
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 7867;
	
	  ;% rtP.Constant2_Value_gnk2tjoo5o
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 7868;
	
	  ;% rtP.Constant3_Value_hat1prtoip
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 7869;
	
	  ;% rtP.Constant4_Value_cmgjzabbd1
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 7870;
	
	  ;% rtP.gate_Value
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 7871;
	
	  ;% rtP.gate_Value_j2rsbfopkw
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 7872;
	
	  ;% rtP.gate_Value_pnadvif4hc
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 7873;
	
	  ;% rtP.gate_Value_m3r3nzaglm
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 7874;
	
	  ;% rtP.gate_Value_cw3efytsqz
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 7875;
	
	  ;% rtP.gate_Value_m3ymbazbc2
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 7876;
	
	  ;% rtP.gate_Value_awsbj1udfy
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 7877;
	
	  ;% rtP.gate_Value_lcm302k1d0
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 7878;
	
	  ;% rtP.eee_Value
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 7879;
	
	  ;% rtP.gate_Value_hvqav3fre2
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 7880;
	
	  ;% rtP.eee_Value_jvovxrhhe5
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 7881;
	
	  ;% rtP.gate_Value_jtuhk5jcfy
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 7882;
	
	  ;% rtP.eee_Value_livrakccix
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 7883;
	
	  ;% rtP.gate_Value_hfhtxagkxf
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 7884;
	
	  ;% rtP.eee_Value_a41qgiert1
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 7885;
	
	  ;% rtP.gate_Value_imdjf4i2gu
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 7886;
	
	  ;% rtP.eee_Value_cwpq0ctqc0
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 7887;
	
	  ;% rtP.gate_Value_fenld0mt10
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 7888;
	
	  ;% rtP.eee_Value_kooi21cjzm
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 7889;
	
	  ;% rtP.gate_Value_gobcdjfmgd
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 7890;
	
	  ;% rtP.eee_Value_cgwkesmam5
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 7891;
	
	  ;% rtP.gate_Value_iurqku1hqp
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 7892;
	
	  ;% rtP.eee_Value_mmisgtzd2o
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 7893;
	
	  ;% rtP.gate_Value_hthchwxqcl
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 7894;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 164;
      section.data(164)  = dumData; %prealloc
      
	  ;% rtB.pgb0d4fezl
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.k1l0dq0whk
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.oohzmrpuub
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.ly2tudtpk5
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.deawsx5qhs
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.i4titeidnc
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.nlefoy3v23
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.k23slsjlyn
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.kxathhjjic
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.njqzbmzkw3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.otit5fyej4
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.cyszaymdj5
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.jj2ykly5on
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.p5alxz5ziy
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.hcwmplpfgi
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.kgkep0bsfn
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.gbskkfyvvs
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.ohk0kl4s2f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.cxs3zbuah3
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.c24gsmq3eo
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.fy4echtbva
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.c3xidiouan
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.pe2sphdjh2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.gz0tlad0jf
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.kmuikitwmq
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.eprxgrrx1i
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.pmwdqmho2g
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.l5a1wc4xqj
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.ixqtzgbiga
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.d3gxzds2xr
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.c4f254ywzz
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtB.p5xdglg0cq
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtB.iqy4ug0lia
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtB.dgob51egq2
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtB.ej1y2hbu1l
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtB.cmxojssbts
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtB.p1fz34rv0r
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtB.polkv0vm24
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtB.naj01eqche
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtB.nr4gs0vfac
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtB.dfqj14wwuu
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtB.lx4rf5dtol
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtB.kyo53jtai5
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtB.nby1ptxpmw
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtB.ogaffaai1o
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtB.erekh4vfpe
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtB.eo5u1lxtg4
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtB.g0ppvkegvc
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtB.kpg4nocamz
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtB.pd4oav3zfl
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtB.hskyqojmid
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtB.fmtaaiz1bq
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtB.hnkaykfcmo
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
	  ;% rtB.b3rs2blycp
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 53;
	
	  ;% rtB.hf335bhyf1
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 54;
	
	  ;% rtB.ok0zckk00c
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 55;
	
	  ;% rtB.l5xc5g0oxc
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 56;
	
	  ;% rtB.hftcpnhtft
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 57;
	
	  ;% rtB.hsqch24np1
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 58;
	
	  ;% rtB.fiz4rc4nlg
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 59;
	
	  ;% rtB.km5yr5pvq0
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 60;
	
	  ;% rtB.oq4qh1b0g3
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 61;
	
	  ;% rtB.giwbgwucdk
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 62;
	
	  ;% rtB.gpd3l10f2a
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 63;
	
	  ;% rtB.h0gqnbiair
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 64;
	
	  ;% rtB.nd0cjgwifw
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 65;
	
	  ;% rtB.lbzxgesswo
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 66;
	
	  ;% rtB.fylyx3bgwb
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 67;
	
	  ;% rtB.hrzbsnrwi3
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 68;
	
	  ;% rtB.psghlesfzb
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 69;
	
	  ;% rtB.lowxonccdy
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 76;
	
	  ;% rtB.kuj5cjfmdx
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 126;
	
	  ;% rtB.gmmxcfk4v1
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 127;
	
	  ;% rtB.hazzrzn13y
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 128;
	
	  ;% rtB.lhizeihnhz
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 129;
	
	  ;% rtB.agvnom3jo0
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 130;
	
	  ;% rtB.p5xpxaxvbl
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 131;
	
	  ;% rtB.ljv350v5jl
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 132;
	
	  ;% rtB.fjr1hyyzxs
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 133;
	
	  ;% rtB.odu4rqvais
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 134;
	
	  ;% rtB.mzfgyicx2y
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 135;
	
	  ;% rtB.lxdepkj5ye
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 136;
	
	  ;% rtB.cf5lednvm2
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 137;
	
	  ;% rtB.o3jpdxseje
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 138;
	
	  ;% rtB.kshw2uxvoi
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 139;
	
	  ;% rtB.lhpatqphjc
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 140;
	
	  ;% rtB.mr3r11o4cd
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 141;
	
	  ;% rtB.hz0bo4qocx
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 142;
	
	  ;% rtB.i5ef2hwgvu
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 143;
	
	  ;% rtB.mjks4xhjow
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 144;
	
	  ;% rtB.dmhyv1f3ig
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 145;
	
	  ;% rtB.l42lm2ncga
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 146;
	
	  ;% rtB.mwzvrxpr2p
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 147;
	
	  ;% rtB.hrd1lm1ya0
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 148;
	
	  ;% rtB.ey2vd3i5uv
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 149;
	
	  ;% rtB.jqhmwoilj3
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 150;
	
	  ;% rtB.k2mzdcop0k
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 151;
	
	  ;% rtB.c1q3so5mg1
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 152;
	
	  ;% rtB.lefofrzdab
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 153;
	
	  ;% rtB.fodfgq0jzj
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 154;
	
	  ;% rtB.ffqmzoabpt
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 155;
	
	  ;% rtB.croyui1tfg
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 156;
	
	  ;% rtB.h5rctxnl5g
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 157;
	
	  ;% rtB.bg1emtvlu5
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 158;
	
	  ;% rtB.de0pptp2dt
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 159;
	
	  ;% rtB.f2esttvhy2
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 160;
	
	  ;% rtB.p0xrb21qa1
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 161;
	
	  ;% rtB.bed1vibtj4
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 162;
	
	  ;% rtB.a4raottyfg
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 163;
	
	  ;% rtB.j1n20lggjq
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 164;
	
	  ;% rtB.cq1hxzcfzr
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 165;
	
	  ;% rtB.m4ih4dx4xb
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 166;
	
	  ;% rtB.jppegbuoi5
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 167;
	
	  ;% rtB.cu43ie0v4m
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 168;
	
	  ;% rtB.ng4lafji5x
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 169;
	
	  ;% rtB.p5tpfuerbv
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 170;
	
	  ;% rtB.gckyylswxk
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 171;
	
	  ;% rtB.eoewe3hpfs
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 172;
	
	  ;% rtB.lgzmg01p1c
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 173;
	
	  ;% rtB.cqfzimln2f
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 174;
	
	  ;% rtB.kwrjw25yn5
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 175;
	
	  ;% rtB.ilzaifqtd1
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 176;
	
	  ;% rtB.fdsengn1kg
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 177;
	
	  ;% rtB.aqajecbbnu
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 178;
	
	  ;% rtB.mjmg2qs5xf
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 179;
	
	  ;% rtB.odighpugae
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 180;
	
	  ;% rtB.kat2ic3vyh
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 181;
	
	  ;% rtB.mo0cmtpcyi
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 182;
	
	  ;% rtB.htqhpx0nsu
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 183;
	
	  ;% rtB.fw5hv2gf0k
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 184;
	
	  ;% rtB.l0wr0i0a0y
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 185;
	
	  ;% rtB.gyysi3xihf
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 186;
	
	  ;% rtB.kq3prrs1uu
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 187;
	
	  ;% rtB.kv0kguhr0b
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 188;
	
	  ;% rtB.mgmgi14ih4
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 189;
	
	  ;% rtB.fafevfeqnj
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 190;
	
	  ;% rtB.ecm55snlkx
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 191;
	
	  ;% rtB.mtks03qisz
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 192;
	
	  ;% rtB.puxyxqzwrf
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 193;
	
	  ;% rtB.jrfwiwd43z
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 194;
	
	  ;% rtB.dtavayqhda
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 195;
	
	  ;% rtB.cgb0hlthvq
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 196;
	
	  ;% rtB.hvpojhtj1s
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 197;
	
	  ;% rtB.ddd1o5htss
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 198;
	
	  ;% rtB.dxwmqkhxq3
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 199;
	
	  ;% rtB.j23pwi0b5d
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 200;
	
	  ;% rtB.efzw5gzeym
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 201;
	
	  ;% rtB.ej4hpfvopy
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 205;
	
	  ;% rtB.naomta4xqc
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 209;
	
	  ;% rtB.jxf2ydkrkn
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 213;
	
	  ;% rtB.fkbr4vcy5f
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 217;
	
	  ;% rtB.o5ewjixonz
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 218;
	
	  ;% rtB.clyhmv3twu
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 219;
	
	  ;% rtB.phihsmbahp
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 220;
	
	  ;% rtB.hywsatg4v3
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 224;
	
	  ;% rtB.eibp1n2aoz
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 228;
	
	  ;% rtB.krxdnnqn04
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 232;
	
	  ;% rtB.bdfew4ubkp
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 236;
	
	  ;% rtB.g3sarexv1b
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 237;
	
	  ;% rtB.b0rmkoujvo
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 238;
	
	  ;% rtB.dgkrrt2kba
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 239;
	
	  ;% rtB.jaqvf35q5g
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 243;
	
	  ;% rtB.fsfqwkysby
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 247;
	
	  ;% rtB.p5m2d13jre
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 251;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% rtB.e4kk4vfb1y
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ay5ogb25yw
	  section.data(2).logicalSrcIdx = 165;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.dvelx51u0p
	  section.data(3).logicalSrcIdx = 166;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.lwhjrhsyft
	  section.data(4).logicalSrcIdx = 167;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.pstioklrgc
	  section.data(5).logicalSrcIdx = 168;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.jtq210enar
	  section.data(6).logicalSrcIdx = 169;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.oxfqljnx42
	  section.data(7).logicalSrcIdx = 170;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.f2sgyuvprw
	  section.data(8).logicalSrcIdx = 171;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.lqctpheqal
	  section.data(9).logicalSrcIdx = 172;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.e1lg13dbu0
	  section.data(10).logicalSrcIdx = 173;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.alnnimc4ed
	  section.data(11).logicalSrcIdx = 174;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.jh5vh1upy1
	  section.data(12).logicalSrcIdx = 175;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.c15ame0mkq
	  section.data(13).logicalSrcIdx = 176;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.frcrm0imu1
	  section.data(14).logicalSrcIdx = 177;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.nlvoty5kpb
	  section.data(15).logicalSrcIdx = 178;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.gao5lz0fop
	  section.data(16).logicalSrcIdx = 179;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.bqqtnueefv
	  section.data(17).logicalSrcIdx = 180;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.krqyyt04ow
	  section.data(18).logicalSrcIdx = 181;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.lx0nmorndi
	  section.data(19).logicalSrcIdx = 182;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.peg5g4ebaj
	  section.data(20).logicalSrcIdx = 183;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.hjx4ttdxtg
	  section.data(21).logicalSrcIdx = 184;
	  section.data(21).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.lmeiw1aeti
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nslw55fjo4
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.j1sqbqmbx3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.gb0p0tz3nz
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.nikwcsnlrs
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.fnx2l0adch
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jhxorqowf3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.fhrkpme2ua
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.m2cbloulv2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.m33htneu44
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.j4h3sf5tof
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.p4sl4of4eu
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.fzilssap5b
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fvzajbb5pk
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.jgycbxp0kd
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtDW.bhqiz0ostl
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cw0uq4zdcz.LoggedData
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 22;
	
	  ;% rtDW.gollga0vke.LoggedData
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 26;
	
	  ;% rtDW.gop3lvwil2.LoggedData
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 30;
	
	  ;% rtDW.ekvcfateot.LoggedData
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 34;
	
	  ;% rtDW.kdr4gka2zp.LoggedData
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 37;
	
	  ;% rtDW.ejcx1ntqzg.LoggedData
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 41;
	
	  ;% rtDW.p2zhc55or3.LoggedData
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 45;
	
	  ;% rtDW.puarrkjwb4.LoggedData
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 48;
	
	  ;% rtDW.fe4yi24401.LoggedData
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 49;
	
	  ;% rtDW.anotinlj1b.LoggedData
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 50;
	
	  ;% rtDW.awv2paopc4.LoggedData
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 51;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtDW.gudxj4f5fr
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fnwcukpljc
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.no5ex5xcn1
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hrgiwxycqx
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.altxlvicd3
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 26;
	
	  ;% rtDW.f2n5brutlw
	  section.data(6).logicalSrcIdx = 32;
	  section.data(6).dtTransOffset = 27;
	
	  ;% rtDW.nnmbytzwts
	  section.data(7).logicalSrcIdx = 33;
	  section.data(7).dtTransOffset = 28;
	
	  ;% rtDW.fdj2ubzmrv
	  section.data(8).logicalSrcIdx = 34;
	  section.data(8).dtTransOffset = 29;
	
	  ;% rtDW.a0pmgywf4u
	  section.data(9).logicalSrcIdx = 35;
	  section.data(9).dtTransOffset = 30;
	
	  ;% rtDW.ebvemqdpie
	  section.data(10).logicalSrcIdx = 36;
	  section.data(10).dtTransOffset = 31;
	
	  ;% rtDW.la35cccgmk
	  section.data(11).logicalSrcIdx = 37;
	  section.data(11).dtTransOffset = 32;
	
	  ;% rtDW.byn0u0nqg4
	  section.data(12).logicalSrcIdx = 38;
	  section.data(12).dtTransOffset = 58;
	
	  ;% rtDW.bjj13qhbj4
	  section.data(13).logicalSrcIdx = 39;
	  section.data(13).dtTransOffset = 59;
	
	  ;% rtDW.f3klxlmlxp
	  section.data(14).logicalSrcIdx = 40;
	  section.data(14).dtTransOffset = 60;
	
	  ;% rtDW.iekkid5tdc
	  section.data(15).logicalSrcIdx = 41;
	  section.data(15).dtTransOffset = 61;
	
	  ;% rtDW.pgykuojto4
	  section.data(16).logicalSrcIdx = 42;
	  section.data(16).dtTransOffset = 62;
	
	  ;% rtDW.kwn43b15y5
	  section.data(17).logicalSrcIdx = 43;
	  section.data(17).dtTransOffset = 63;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 38;
      section.data(38)  = dumData; %prealloc
      
	  ;% rtDW.nli2vgeh2l
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jzsv2t2lkp
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lwkbt2jmbb
	  section.data(3).logicalSrcIdx = 46;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nzlezri5if
	  section.data(4).logicalSrcIdx = 47;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.dogfdpqywe
	  section.data(5).logicalSrcIdx = 48;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ij42hk2gox
	  section.data(6).logicalSrcIdx = 49;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.dbxk3wsexw
	  section.data(7).logicalSrcIdx = 50;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.dkha4nh5hk
	  section.data(8).logicalSrcIdx = 51;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ggljqhbc2z
	  section.data(9).logicalSrcIdx = 52;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.ljac4kbmhk
	  section.data(10).logicalSrcIdx = 53;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.g45wnkz5nk
	  section.data(11).logicalSrcIdx = 54;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.aydau4o4xu
	  section.data(12).logicalSrcIdx = 55;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.p3fsjegloa
	  section.data(13).logicalSrcIdx = 56;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.b5gols3idy
	  section.data(14).logicalSrcIdx = 57;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.ewptjpzynq
	  section.data(15).logicalSrcIdx = 58;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.bff5sopkuo
	  section.data(16).logicalSrcIdx = 59;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.p3afsqgkuh
	  section.data(17).logicalSrcIdx = 60;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.pjyrobqcup
	  section.data(18).logicalSrcIdx = 61;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.gjhglnw2fy
	  section.data(19).logicalSrcIdx = 62;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.lsmjehtnux
	  section.data(20).logicalSrcIdx = 63;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.oqcjqasc2u
	  section.data(21).logicalSrcIdx = 64;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.gxbtelcl54
	  section.data(22).logicalSrcIdx = 65;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.dpmpfafv23
	  section.data(23).logicalSrcIdx = 66;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.ewm05hm5fd
	  section.data(24).logicalSrcIdx = 67;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.atop3sgsqq
	  section.data(25).logicalSrcIdx = 68;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.np2a5gu2nd
	  section.data(26).logicalSrcIdx = 69;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.aj13yfzsqb
	  section.data(27).logicalSrcIdx = 70;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.a4zo1l0ugg
	  section.data(28).logicalSrcIdx = 71;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.kxwhl4deiz
	  section.data(29).logicalSrcIdx = 72;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.oqsfgh42ip
	  section.data(30).logicalSrcIdx = 73;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.cx23vuteby
	  section.data(31).logicalSrcIdx = 74;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.isbqvnaoi4
	  section.data(32).logicalSrcIdx = 75;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.h0httbfyha
	  section.data(33).logicalSrcIdx = 76;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.h234s2aqw5
	  section.data(34).logicalSrcIdx = 77;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.mp03nbr0yk
	  section.data(35).logicalSrcIdx = 78;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.ejvsxdy4us
	  section.data(36).logicalSrcIdx = 79;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.pfff4wu12s
	  section.data(37).logicalSrcIdx = 80;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.fbl4mmnwqe
	  section.data(38).logicalSrcIdx = 81;
	  section.data(38).dtTransOffset = 37;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 276496418;
  targMap.checksum1 = 3317950777;
  targMap.checksum2 = 3654610639;
  targMap.checksum3 = 3948613528;

