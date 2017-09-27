package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVWellKnownProjCSType枚举常见与椭球体相关的具体投影坐标系程序根据这个标识可以创建一个投影坐标系统
 */
public enum EVWellKnownProjCSType implements INativeEnum<EVWellKnownProjCSType> {
	evgsProjectedCoordinateSystemTypeUnknow(EVWellKnownProjCSTypeHelper.ENUM_VALUES[0]),
	WGS1984_World_Mercator(EVWellKnownProjCSTypeHelper.ENUM_VALUES[1]),
	WGS1984_SphereWeb_Mercator(EVWellKnownProjCSTypeHelper.ENUM_VALUES[2]),
	WGS_84_UTM_Zone_1N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[3]),
	WGS_84_UTM_Zone_2N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[4]),
	WGS_84_UTM_Zone_3N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[5]),
	WGS_84_UTM_Zone_4N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[6]),
	WGS_84_UTM_Zone_5N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[7]),
	WGS_84_UTM_Zone_6N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[8]),
	WGS_84_UTM_Zone_7N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[9]),
	WGS_84_UTM_Zone_8N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[10]),
	WGS_84_UTM_Zone_9N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[11]),
	WGS_84_UTM_Zone_10N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[12]),
	WGS_84_UTM_Zone_11N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[13]),
	WGS_84_UTM_Zone_12N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[14]),
	WGS_84_UTM_Zone_13N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[15]),
	WGS_84_UTM_Zone_14N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[16]),
	WGS_84_UTM_Zone_15N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[17]),
	WGS_84_UTM_Zone_16N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[18]),
	WGS_84_UTM_Zone_17N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[19]),
	WGS_84_UTM_Zone_18N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[20]),
	WGS_84_UTM_Zone_19N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[21]),
	WGS_84_UTM_Zone_20N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[22]),
	WGS_84_UTM_Zone_21N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[23]),
	WGS_84_UTM_Zone_22N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[24]),
	WGS_84_UTM_Zone_23N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[25]),
	WGS_84_UTM_Zone_24N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[26]),
	WGS_84_UTM_Zone_25N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[27]),
	WGS_84_UTM_Zone_26N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[28]),
	WGS_84_UTM_Zone_27N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[29]),
	WGS_84_UTM_Zone_28N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[30]),
	WGS_84_UTM_Zone_29N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[31]),
	WGS_84_UTM_Zone_30N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[32]),
	WGS_84_UTM_Zone_31N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[33]),
	WGS_84_UTM_Zone_32N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[34]),
	WGS_84_UTM_Zone_33N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[35]),
	WGS_84_UTM_Zone_34N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[36]),
	WGS_84_UTM_Zone_35N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[37]),
	WGS_84_UTM_Zone_36N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[38]),
	WGS_84_UTM_Zone_37N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[39]),
	WGS_84_UTM_Zone_38N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[40]),
	WGS_84_UTM_Zone_39N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[41]),
	WGS_84_UTM_Zone_40N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[42]),
	WGS_84_UTM_Zone_41N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[43]),
	WGS_84_UTM_Zone_42N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[44]),
	WGS_84_UTM_Zone_43N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[45]),
	WGS_84_UTM_Zone_44N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[46]),
	WGS_84_UTM_Zone_45N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[47]),
	WGS_84_UTM_Zone_46N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[48]),
	WGS_84_UTM_Zone_47N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[49]),
	WGS_84_UTM_Zone_48N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[50]),
	WGS_84_UTM_Zone_49N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[51]),
	WGS_84_UTM_Zone_50N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[52]),
	WGS_84_UTM_Zone_51N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[53]),
	WGS_84_UTM_Zone_52N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[54]),
	WGS_84_UTM_Zone_53N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[55]),
	WGS_84_UTM_Zone_54N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[56]),
	WGS_84_UTM_Zone_55N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[57]),
	WGS_84_UTM_Zone_56N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[58]),
	WGS_84_UTM_Zone_57N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[59]),
	WGS_84_UTM_Zone_58N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[60]),
	WGS_84_UTM_Zone_59N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[61]),
	WGS_84_UTM_Zone_60N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[62]),
	WGS_84_UTM_Grid_System_Southern_Hemisphere(EVWellKnownProjCSTypeHelper.ENUM_VALUES[63]),
	WGS_84_UTM_zone_1S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[64]),
	WGS_84_UTM_zone_2S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[65]),
	WGS_84_UTM_zone_3S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[66]),
	WGS_84_UTM_zone_4S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[67]),
	WGS_84_UTM_zone_5S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[68]),
	WGS_84_UTM_zone_6S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[69]),
	WGS_84_UTM_zone_7S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[70]),
	WGS_84_UTM_zone_8S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[71]),
	WGS_84_UTM_zone_9S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[72]),
	WGS_84_UTM_zone_10S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[73]),
	WGS_84_UTM_zone_11S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[74]),
	WGS_84_UTM_zone_12S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[75]),
	WGS_84_UTM_zone_13S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[76]),
	WGS_84_UTM_zone_14S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[77]),
	WGS_84_UTM_zone_15S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[78]),
	WGS_84_UTM_zone_16S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[79]),
	WGS_84_UTM_zone_17S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[80]),
	WGS_84_UTM_zone_18S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[81]),
	WGS_84_UTM_zone_19S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[82]),
	WGS_84_UTM_zone_20S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[83]),
	WGS_84_UTM_zone_21S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[84]),
	WGS_84_UTM_zone_22S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[85]),
	WGS_84_UTM_zone_23S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[86]),
	WGS_84_UTM_zone_24S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[87]),
	WGS_84_UTM_zone_25S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[88]),
	WGS_84_UTM_zone_26S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[89]),
	WGS_84_UTM_zone_27S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[90]),
	WGS_84_UTM_zone_28S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[91]),
	WGS_84_UTM_zone_29S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[92]),
	WGS_84_UTM_zone_30S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[93]),
	WGS_84_UTM_zone_31S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[94]),
	WGS_84_UTM_zone_32S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[95]),
	WGS_84_UTM_zone_33S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[96]),
	WGS_84_UTM_zone_34S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[97]),
	WGS_84_UTM_zone_35S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[98]),
	WGS_84_UTM_zone_36S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[99]),
	WGS_84_UTM_zone_37S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[100]),
	WGS_84_UTM_zone_38S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[101]),
	WGS_84_UTM_zone_39S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[102]),
	WGS_84_UTM_zone_40S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[103]),
	WGS_84_UTM_zone_41S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[104]),
	WGS_84_UTM_zone_42S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[105]),
	WGS_84_UTM_zone_43S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[106]),
	WGS_84_UTM_zone_44S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[107]),
	WGS_84_UTM_zone_45S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[108]),
	WGS_84_UTM_zone_46S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[109]),
	WGS_84_UTM_zone_47S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[110]),
	WGS_84_UTM_zone_48S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[111]),
	WGS_84_UTM_zone_49S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[112]),
	WGS_84_UTM_zone_50S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[113]),
	WGS_84_UTM_zone_51S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[114]),
	WGS_84_UTM_zone_52S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[115]),
	WGS_84_UTM_zone_53S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[116]),
	WGS_84_UTM_zone_54S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[117]),
	WGS_84_UTM_zone_55S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[118]),
	WGS_84_UTM_zone_56S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[119]),
	WGS_84_UTM_zone_57S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[120]),
	WGS_84_UTM_zone_58S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[121]),
	WGS_84_UTM_zone_59S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[122]),
	WGS_84_UTM_zone_60S(EVWellKnownProjCSTypeHelper.ENUM_VALUES[123]),
	Xian_1980_Gauss_Kruger_zone_13(EVWellKnownProjCSTypeHelper.ENUM_VALUES[124]),
	Xian_1980_Gauss_Kruger_zone_14(EVWellKnownProjCSTypeHelper.ENUM_VALUES[125]),
	Xian_1980_Gauss_Kruger_zone_15(EVWellKnownProjCSTypeHelper.ENUM_VALUES[126]),
	Xian_1980_Gauss_Kruger_zone_16(EVWellKnownProjCSTypeHelper.ENUM_VALUES[127]),
	Xian_1980_Gauss_Kruger_zone_17(EVWellKnownProjCSTypeHelper.ENUM_VALUES[128]),
	Xian_1980_Gauss_Kruger_zone_18(EVWellKnownProjCSTypeHelper.ENUM_VALUES[129]),
	Xian_1980_Gauss_Kruger_zone_19(EVWellKnownProjCSTypeHelper.ENUM_VALUES[130]),
	Xian_1980_Gauss_Kruger_zone_20(EVWellKnownProjCSTypeHelper.ENUM_VALUES[131]),
	Xian_1980_Gauss_Kruger_zone_21(EVWellKnownProjCSTypeHelper.ENUM_VALUES[132]),
	Xian_1980_Gauss_Kruger_zone_22(EVWellKnownProjCSTypeHelper.ENUM_VALUES[133]),
	Xian_1980_Gauss_Kruger_zone_23(EVWellKnownProjCSTypeHelper.ENUM_VALUES[134]),
	Xian_1980_Gauss_Kruger_CM_75E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[135]),
	Xian_1980_Gauss_Kruger_CM_81E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[136]),
	Xian_1980_Gauss_Kruger_CM_87E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[137]),
	Xian_1980_Gauss_Kruger_CM_93E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[138]),
	Xian_1980_Gauss_Kruger_CM_99E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[139]),
	Xian_1980_Gauss_Kruger_CM_105E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[140]),
	Xian_1980_Gauss_Kruger_CM_111E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[141]),
	Xian_1980_Gauss_Kruger_CM_117E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[142]),
	Xian_1980_Gauss_Kruger_CM_123E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[143]),
	Xian_1980_Gauss_Kruger_CM_129E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[144]),
	Xian_1980_Gauss_Kruger_CM_135E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[145]),
	Xian_1980_3_degree_Gauss_Kruger_zone_25(EVWellKnownProjCSTypeHelper.ENUM_VALUES[146]),
	Xian_1980_3_degree_Gauss_Kruger_zone_26(EVWellKnownProjCSTypeHelper.ENUM_VALUES[147]),
	Xian_1980_3_degree_Gauss_Kruger_zone_27(EVWellKnownProjCSTypeHelper.ENUM_VALUES[148]),
	Xian_1980_3_degree_Gauss_Kruger_zone_28(EVWellKnownProjCSTypeHelper.ENUM_VALUES[149]),
	Xian_1980_3_degree_Gauss_Kruger_zone_29(EVWellKnownProjCSTypeHelper.ENUM_VALUES[150]),
	Xian_1980_3_degree_Gauss_Kruger_zone_30(EVWellKnownProjCSTypeHelper.ENUM_VALUES[151]),
	Xian_1980_3_degree_Gauss_Kruger_zone_31(EVWellKnownProjCSTypeHelper.ENUM_VALUES[152]),
	Xian_1980_3_degree_Gauss_Kruger_zone_32(EVWellKnownProjCSTypeHelper.ENUM_VALUES[153]),
	Xian_1980_3_degree_Gauss_Kruger_zone_33(EVWellKnownProjCSTypeHelper.ENUM_VALUES[154]),
	Xian_1980_3_degree_Gauss_Kruger_zone_34(EVWellKnownProjCSTypeHelper.ENUM_VALUES[155]),
	Xian_1980_3_degree_Gauss_Kruger_zone_35(EVWellKnownProjCSTypeHelper.ENUM_VALUES[156]),
	Xian_1980_3_degree_Gauss_Kruger_zone_36(EVWellKnownProjCSTypeHelper.ENUM_VALUES[157]),
	Xian_1980_3_degree_Gauss_Kruger_zone_37(EVWellKnownProjCSTypeHelper.ENUM_VALUES[158]),
	Xian_1980_3_degree_Gauss_Kruger_zone_38(EVWellKnownProjCSTypeHelper.ENUM_VALUES[159]),
	Xian_1980_3_degree_Gauss_Kruger_zone_39(EVWellKnownProjCSTypeHelper.ENUM_VALUES[160]),
	Xian_1980_3_degree_Gauss_Kruger_zone_40(EVWellKnownProjCSTypeHelper.ENUM_VALUES[161]),
	Xian_1980_3_degree_Gauss_Kruger_zone_41(EVWellKnownProjCSTypeHelper.ENUM_VALUES[162]),
	Xian_1980_3_degree_Gauss_Kruger_zone_42(EVWellKnownProjCSTypeHelper.ENUM_VALUES[163]),
	Xian_1980_3_degree_Gauss_Kruger_zone_43(EVWellKnownProjCSTypeHelper.ENUM_VALUES[164]),
	Xian_1980_3_degree_Gauss_Kruger_zone_44(EVWellKnownProjCSTypeHelper.ENUM_VALUES[165]),
	Xian_1980_3_degree_Gauss_Kruger_zone_45(EVWellKnownProjCSTypeHelper.ENUM_VALUES[166]),
	Xian_1980_3_degree_Gauss_Kruger_CM_75E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[167]),
	Xian_1980_3_degree_Gauss_Kruger_CM_78E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[168]),
	Xian_1980_3_degree_Gauss_Kruger_CM_81E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[169]),
	Xian_1980_3_degree_Gauss_Kruger_CM_84E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[170]),
	Xian_1980_3_degree_Gauss_Kruger_CM_87E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[171]),
	Xian_1980_3_degree_Gauss_Kruger_CM_90E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[172]),
	Xian_1980_3_degree_Gauss_Kruger_CM_93E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[173]),
	Xian_1980_3_degree_Gauss_Kruger_CM_96E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[174]),
	Xian_1980_3_degree_Gauss_Kruger_CM_99E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[175]),
	Xian_1980_3_degree_Gauss_Kruger_CM_102E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[176]),
	Xian_1980_3_degree_Gauss_Kruger_CM_105E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[177]),
	Xian_1980_3_degree_Gauss_Kruger_CM_108E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[178]),
	Xian_1980_3_degree_Gauss_Kruger_CM_111E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[179]),
	Xian_1980_3_degree_Gauss_Kruger_CM_114E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[180]),
	Xian_1980_3_degree_Gauss_Kruger_CM_117E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[181]),
	Xian_1980_3_degree_Gauss_Kruger_CM_120E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[182]),
	Xian_1980_3_degree_Gauss_Kruger_CM_123E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[183]),
	Xian_1980_3_degree_Gauss_Kruger_CM_126E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[184]),
	Xian_1980_3_degree_Gauss_Kruger_CM_129E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[185]),
	Xian_1980_3_degree_Gauss_Kruger_CM_132E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[186]),
	Xian_1980_3_degree_Gauss_Kruger_CM_135E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[187]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_25(EVWellKnownProjCSTypeHelper.ENUM_VALUES[188]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_26(EVWellKnownProjCSTypeHelper.ENUM_VALUES[189]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_27(EVWellKnownProjCSTypeHelper.ENUM_VALUES[190]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_28(EVWellKnownProjCSTypeHelper.ENUM_VALUES[191]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_29(EVWellKnownProjCSTypeHelper.ENUM_VALUES[192]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_30(EVWellKnownProjCSTypeHelper.ENUM_VALUES[193]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_31(EVWellKnownProjCSTypeHelper.ENUM_VALUES[194]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_32(EVWellKnownProjCSTypeHelper.ENUM_VALUES[195]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_33(EVWellKnownProjCSTypeHelper.ENUM_VALUES[196]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_34(EVWellKnownProjCSTypeHelper.ENUM_VALUES[197]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_35(EVWellKnownProjCSTypeHelper.ENUM_VALUES[198]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_36(EVWellKnownProjCSTypeHelper.ENUM_VALUES[199]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_37(EVWellKnownProjCSTypeHelper.ENUM_VALUES[200]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_38(EVWellKnownProjCSTypeHelper.ENUM_VALUES[201]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_39(EVWellKnownProjCSTypeHelper.ENUM_VALUES[202]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_40(EVWellKnownProjCSTypeHelper.ENUM_VALUES[203]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_41(EVWellKnownProjCSTypeHelper.ENUM_VALUES[204]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_42(EVWellKnownProjCSTypeHelper.ENUM_VALUES[205]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_43(EVWellKnownProjCSTypeHelper.ENUM_VALUES[206]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_44(EVWellKnownProjCSTypeHelper.ENUM_VALUES[207]),
	Beijing_1954_3_degree_Gauss_Kruger_zone_45(EVWellKnownProjCSTypeHelper.ENUM_VALUES[208]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_75E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[209]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_78E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[210]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_81E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[211]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_84E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[212]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_87E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[213]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_90E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[214]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_93E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[215]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_96E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[216]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_99E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[217]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_102E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[218]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_105E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[219]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_108E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[220]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_111E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[221]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_114E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[222]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_117E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[223]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_120E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[224]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_123E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[225]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_126E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[226]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_129E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[227]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_132E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[228]),
	Beijing_1954_3_degree_Gauss_Kruger_CM_135E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[229]),
	Beijing_1954_Gauss_Kruger_Zone_13(EVWellKnownProjCSTypeHelper.ENUM_VALUES[230]),
	Beijing_1954_Gauss_Kruger_Zone_14(EVWellKnownProjCSTypeHelper.ENUM_VALUES[231]),
	Beijing_1954_Gauss_Kruger_Zone_15(EVWellKnownProjCSTypeHelper.ENUM_VALUES[232]),
	Beijing_1954_Gauss_Kruger_Zone_16(EVWellKnownProjCSTypeHelper.ENUM_VALUES[233]),
	Beijing_1954_Gauss_Kruger_Zone_17(EVWellKnownProjCSTypeHelper.ENUM_VALUES[234]),
	Beijing_1954_Gauss_Kruger_Zone_18(EVWellKnownProjCSTypeHelper.ENUM_VALUES[235]),
	Beijing_1954_Gauss_Kruger_Zone_19(EVWellKnownProjCSTypeHelper.ENUM_VALUES[236]),
	Beijing_1954_Gauss_Kruger_Zone_20(EVWellKnownProjCSTypeHelper.ENUM_VALUES[237]),
	Beijing_1954_Gauss_Kruger_Zone_21(EVWellKnownProjCSTypeHelper.ENUM_VALUES[238]),
	Beijing_1954_Gauss_Kruger_Zone_22(EVWellKnownProjCSTypeHelper.ENUM_VALUES[239]),
	Beijing_1954_Gauss_Kruger_Zone_23(EVWellKnownProjCSTypeHelper.ENUM_VALUES[240]),
	Beijing_1954_Gauss_Kruger_Zone_13N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[241]),
	Beijing_1954_Gauss_Kruger_Zone_14N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[242]),
	Beijing_1954_Gauss_Kruger_Zone_15N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[243]),
	Beijing_1954_Gauss_Kruger_Zone_16N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[244]),
	Beijing_1954_Gauss_Kruger_Zone_17N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[245]),
	Beijing_1954_Gauss_Kruger_Zone_18N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[246]),
	Beijing_1954_Gauss_Kruger_Zone_19N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[247]),
	Beijing_1954_Gauss_Kruger_Zone_20N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[248]),
	Beijing_1954_Gauss_Kruger_Zone_21N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[249]),
	Beijing_1954_Gauss_Kruger_Zone_22N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[250]),
	Beijing_1954_Gauss_Kruger_Zone_23N(EVWellKnownProjCSTypeHelper.ENUM_VALUES[251]),
	CGCS2000_Gauss_Kruger_zone_13(EVWellKnownProjCSTypeHelper.ENUM_VALUES[252]),
	CGCS2000_Gauss_Kruger_zone_14(EVWellKnownProjCSTypeHelper.ENUM_VALUES[253]),
	CGCS2000_Gauss_Kruger_zone_15(EVWellKnownProjCSTypeHelper.ENUM_VALUES[254]),
	CGCS2000_Gauss_Kruger_zone_16(EVWellKnownProjCSTypeHelper.ENUM_VALUES[255]),
	CGCS2000_Gauss_Kruger_zone_17(EVWellKnownProjCSTypeHelper.ENUM_VALUES[256]),
	CGCS2000_Gauss_Kruger_zone_18(EVWellKnownProjCSTypeHelper.ENUM_VALUES[257]),
	CGCS2000_Gauss_Kruger_zone_19(EVWellKnownProjCSTypeHelper.ENUM_VALUES[258]),
	CGCS2000_Gauss_Kruger_zone_20(EVWellKnownProjCSTypeHelper.ENUM_VALUES[259]),
	CGCS2000_Gauss_Kruger_zone_21(EVWellKnownProjCSTypeHelper.ENUM_VALUES[260]),
	CGCS2000_Gauss_Kruger_zone_22(EVWellKnownProjCSTypeHelper.ENUM_VALUES[261]),
	CGCS2000_Gauss_Kruger_zone_23(EVWellKnownProjCSTypeHelper.ENUM_VALUES[262]),
	CGCS2000_Gauss_Kruger_CM_75E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[263]),
	CGCS2000_Gauss_Kruger_CM_81E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[264]),
	CGCS2000_Gauss_Kruger_CM_87E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[265]),
	CGCS2000_Gauss_Kruger_CM_93E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[266]),
	CGCS2000_Gauss_Kruger_CM_99E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[267]),
	CGCS2000_Gauss_Kruger_CM_105E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[268]),
	CGCS2000_Gauss_Kruger_CM_111E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[269]),
	CGCS2000_Gauss_Kruger_CM_117E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[270]),
	CGCS2000_Gauss_Kruger_CM_123E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[271]),
	CGCS2000_Gauss_Kruger_CM_129E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[272]),
	CGCS2000_Gauss_Kruger_CM_135E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[273]),
	CGCS2000_3_degree_Gauss_Kruger_zone_25(EVWellKnownProjCSTypeHelper.ENUM_VALUES[274]),
	CGCS2000_3_degree_Gauss_Kruger_zone_26(EVWellKnownProjCSTypeHelper.ENUM_VALUES[275]),
	CGCS2000_3_degree_Gauss_Kruger_zone_27(EVWellKnownProjCSTypeHelper.ENUM_VALUES[276]),
	CGCS2000_3_degree_Gauss_Kruger_zone_28(EVWellKnownProjCSTypeHelper.ENUM_VALUES[277]),
	CGCS2000_3_degree_Gauss_Kruger_zone_29(EVWellKnownProjCSTypeHelper.ENUM_VALUES[278]),
	CGCS2000_3_degree_Gauss_Kruger_zone_30(EVWellKnownProjCSTypeHelper.ENUM_VALUES[279]),
	CGCS2000_3_degree_Gauss_Kruger_zone_31(EVWellKnownProjCSTypeHelper.ENUM_VALUES[280]),
	CGCS2000_3_degree_Gauss_Kruger_zone_32(EVWellKnownProjCSTypeHelper.ENUM_VALUES[281]),
	CGCS2000_3_degree_Gauss_Kruger_zone_33(EVWellKnownProjCSTypeHelper.ENUM_VALUES[282]),
	CGCS2000_3_degree_Gauss_Kruger_zone_34(EVWellKnownProjCSTypeHelper.ENUM_VALUES[283]),
	CGCS2000_3_degree_Gauss_Kruger_zone_35(EVWellKnownProjCSTypeHelper.ENUM_VALUES[284]),
	CGCS2000_3_degree_Gauss_Kruger_zone_36(EVWellKnownProjCSTypeHelper.ENUM_VALUES[285]),
	CGCS2000_3_degree_Gauss_Kruger_zone_37(EVWellKnownProjCSTypeHelper.ENUM_VALUES[286]),
	CGCS2000_3_degree_Gauss_Kruger_zone_38(EVWellKnownProjCSTypeHelper.ENUM_VALUES[287]),
	CGCS2000_3_degree_Gauss_Kruger_zone_39(EVWellKnownProjCSTypeHelper.ENUM_VALUES[288]),
	CGCS2000_3_degree_Gauss_Kruger_zone_40(EVWellKnownProjCSTypeHelper.ENUM_VALUES[289]),
	CGCS2000_3_degree_Gauss_Kruger_zone_41(EVWellKnownProjCSTypeHelper.ENUM_VALUES[290]),
	CGCS2000_3_degree_Gauss_Kruger_zone_42(EVWellKnownProjCSTypeHelper.ENUM_VALUES[291]),
	CGCS2000_3_degree_Gauss_Kruger_zone_43(EVWellKnownProjCSTypeHelper.ENUM_VALUES[292]),
	CGCS2000_3_degree_Gauss_Kruger_zone_44(EVWellKnownProjCSTypeHelper.ENUM_VALUES[293]),
	CGCS2000_3_degree_Gauss_Kruger_zone_45(EVWellKnownProjCSTypeHelper.ENUM_VALUES[294]),
	CGCS2000_3_degree_Gauss_Kruger_CM_75E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[295]),
	CGCS2000_3_degree_Gauss_Kruger_CM_78E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[296]),
	CGCS2000_3_degree_Gauss_Kruger_CM_81E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[297]),
	CGCS2000_3_degree_Gauss_Kruger_CM_84E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[298]),
	CGCS2000_3_degree_Gauss_Kruger_CM_87E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[299]),
	CGCS2000_3_degree_Gauss_Kruger_CM_90E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[300]),
	CGCS2000_3_degree_Gauss_Kruger_CM_93E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[301]),
	CGCS2000_3_degree_Gauss_Kruger_CM_96E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[302]),
	CGCS2000_3_degree_Gauss_Kruger_CM_99E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[303]),
	CGCS2000_3_degree_Gauss_Kruger_CM_102E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[304]),
	CGCS2000_3_degree_Gauss_Kruger_CM_105E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[305]),
	CGCS2000_3_degree_Gauss_Kruger_CM_108E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[306]),
	CGCS2000_3_degree_Gauss_Kruger_CM_111E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[307]),
	CGCS2000_3_degree_Gauss_Kruger_CM_114E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[308]),
	CGCS2000_3_degree_Gauss_Kruger_CM_117E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[309]),
	CGCS2000_3_degree_Gauss_Kruger_CM_120E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[310]),
	CGCS2000_3_degree_Gauss_Kruger_CM_123E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[311]),
	CGCS2000_3_degree_Gauss_Kruger_CM_126E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[312]),
	CGCS2000_3_degree_Gauss_Kruger_CM_129E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[313]),
	CGCS2000_3_degree_Gauss_Kruger_CM_132E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[314]),
	CGCS2000_3_degree_Gauss_Kruger_CM_135E(EVWellKnownProjCSTypeHelper.ENUM_VALUES[315]);
	private int value;
	EVWellKnownProjCSType(int i) {
		this.value = i;
	}
	public EVWellKnownProjCSType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWellKnownProjCSType toEnum(int retval) {
		if(retval == evgsProjectedCoordinateSystemTypeUnknow.value){
			return evgsProjectedCoordinateSystemTypeUnknow;
		}
		else if(retval == WGS1984_World_Mercator.value){
			return WGS1984_World_Mercator;
		}
		else if(retval == WGS1984_SphereWeb_Mercator.value){
			return WGS1984_SphereWeb_Mercator;
		}
		else if(retval == WGS_84_UTM_Zone_1N.value){
			return WGS_84_UTM_Zone_1N;
		}
		else if(retval == WGS_84_UTM_Zone_2N.value){
			return WGS_84_UTM_Zone_2N;
		}
		else if(retval == WGS_84_UTM_Zone_3N.value){
			return WGS_84_UTM_Zone_3N;
		}
		else if(retval == WGS_84_UTM_Zone_4N.value){
			return WGS_84_UTM_Zone_4N;
		}
		else if(retval == WGS_84_UTM_Zone_5N.value){
			return WGS_84_UTM_Zone_5N;
		}
		else if(retval == WGS_84_UTM_Zone_6N.value){
			return WGS_84_UTM_Zone_6N;
		}
		else if(retval == WGS_84_UTM_Zone_7N.value){
			return WGS_84_UTM_Zone_7N;
		}
		else if(retval == WGS_84_UTM_Zone_8N.value){
			return WGS_84_UTM_Zone_8N;
		}
		else if(retval == WGS_84_UTM_Zone_9N.value){
			return WGS_84_UTM_Zone_9N;
		}
		else if(retval == WGS_84_UTM_Zone_10N.value){
			return WGS_84_UTM_Zone_10N;
		}
		else if(retval == WGS_84_UTM_Zone_11N.value){
			return WGS_84_UTM_Zone_11N;
		}
		else if(retval == WGS_84_UTM_Zone_12N.value){
			return WGS_84_UTM_Zone_12N;
		}
		else if(retval == WGS_84_UTM_Zone_13N.value){
			return WGS_84_UTM_Zone_13N;
		}
		else if(retval == WGS_84_UTM_Zone_14N.value){
			return WGS_84_UTM_Zone_14N;
		}
		else if(retval == WGS_84_UTM_Zone_15N.value){
			return WGS_84_UTM_Zone_15N;
		}
		else if(retval == WGS_84_UTM_Zone_16N.value){
			return WGS_84_UTM_Zone_16N;
		}
		else if(retval == WGS_84_UTM_Zone_17N.value){
			return WGS_84_UTM_Zone_17N;
		}
		else if(retval == WGS_84_UTM_Zone_18N.value){
			return WGS_84_UTM_Zone_18N;
		}
		else if(retval == WGS_84_UTM_Zone_19N.value){
			return WGS_84_UTM_Zone_19N;
		}
		else if(retval == WGS_84_UTM_Zone_20N.value){
			return WGS_84_UTM_Zone_20N;
		}
		else if(retval == WGS_84_UTM_Zone_21N.value){
			return WGS_84_UTM_Zone_21N;
		}
		else if(retval == WGS_84_UTM_Zone_22N.value){
			return WGS_84_UTM_Zone_22N;
		}
		else if(retval == WGS_84_UTM_Zone_23N.value){
			return WGS_84_UTM_Zone_23N;
		}
		else if(retval == WGS_84_UTM_Zone_24N.value){
			return WGS_84_UTM_Zone_24N;
		}
		else if(retval == WGS_84_UTM_Zone_25N.value){
			return WGS_84_UTM_Zone_25N;
		}
		else if(retval == WGS_84_UTM_Zone_26N.value){
			return WGS_84_UTM_Zone_26N;
		}
		else if(retval == WGS_84_UTM_Zone_27N.value){
			return WGS_84_UTM_Zone_27N;
		}
		else if(retval == WGS_84_UTM_Zone_28N.value){
			return WGS_84_UTM_Zone_28N;
		}
		else if(retval == WGS_84_UTM_Zone_29N.value){
			return WGS_84_UTM_Zone_29N;
		}
		else if(retval == WGS_84_UTM_Zone_30N.value){
			return WGS_84_UTM_Zone_30N;
		}
		else if(retval == WGS_84_UTM_Zone_31N.value){
			return WGS_84_UTM_Zone_31N;
		}
		else if(retval == WGS_84_UTM_Zone_32N.value){
			return WGS_84_UTM_Zone_32N;
		}
		else if(retval == WGS_84_UTM_Zone_33N.value){
			return WGS_84_UTM_Zone_33N;
		}
		else if(retval == WGS_84_UTM_Zone_34N.value){
			return WGS_84_UTM_Zone_34N;
		}
		else if(retval == WGS_84_UTM_Zone_35N.value){
			return WGS_84_UTM_Zone_35N;
		}
		else if(retval == WGS_84_UTM_Zone_36N.value){
			return WGS_84_UTM_Zone_36N;
		}
		else if(retval == WGS_84_UTM_Zone_37N.value){
			return WGS_84_UTM_Zone_37N;
		}
		else if(retval == WGS_84_UTM_Zone_38N.value){
			return WGS_84_UTM_Zone_38N;
		}
		else if(retval == WGS_84_UTM_Zone_39N.value){
			return WGS_84_UTM_Zone_39N;
		}
		else if(retval == WGS_84_UTM_Zone_40N.value){
			return WGS_84_UTM_Zone_40N;
		}
		else if(retval == WGS_84_UTM_Zone_41N.value){
			return WGS_84_UTM_Zone_41N;
		}
		else if(retval == WGS_84_UTM_Zone_42N.value){
			return WGS_84_UTM_Zone_42N;
		}
		else if(retval == WGS_84_UTM_Zone_43N.value){
			return WGS_84_UTM_Zone_43N;
		}
		else if(retval == WGS_84_UTM_Zone_44N.value){
			return WGS_84_UTM_Zone_44N;
		}
		else if(retval == WGS_84_UTM_Zone_45N.value){
			return WGS_84_UTM_Zone_45N;
		}
		else if(retval == WGS_84_UTM_Zone_46N.value){
			return WGS_84_UTM_Zone_46N;
		}
		else if(retval == WGS_84_UTM_Zone_47N.value){
			return WGS_84_UTM_Zone_47N;
		}
		else if(retval == WGS_84_UTM_Zone_48N.value){
			return WGS_84_UTM_Zone_48N;
		}
		else if(retval == WGS_84_UTM_Zone_49N.value){
			return WGS_84_UTM_Zone_49N;
		}
		else if(retval == WGS_84_UTM_Zone_50N.value){
			return WGS_84_UTM_Zone_50N;
		}
		else if(retval == WGS_84_UTM_Zone_51N.value){
			return WGS_84_UTM_Zone_51N;
		}
		else if(retval == WGS_84_UTM_Zone_52N.value){
			return WGS_84_UTM_Zone_52N;
		}
		else if(retval == WGS_84_UTM_Zone_53N.value){
			return WGS_84_UTM_Zone_53N;
		}
		else if(retval == WGS_84_UTM_Zone_54N.value){
			return WGS_84_UTM_Zone_54N;
		}
		else if(retval == WGS_84_UTM_Zone_55N.value){
			return WGS_84_UTM_Zone_55N;
		}
		else if(retval == WGS_84_UTM_Zone_56N.value){
			return WGS_84_UTM_Zone_56N;
		}
		else if(retval == WGS_84_UTM_Zone_57N.value){
			return WGS_84_UTM_Zone_57N;
		}
		else if(retval == WGS_84_UTM_Zone_58N.value){
			return WGS_84_UTM_Zone_58N;
		}
		else if(retval == WGS_84_UTM_Zone_59N.value){
			return WGS_84_UTM_Zone_59N;
		}
		else if(retval == WGS_84_UTM_Zone_60N.value){
			return WGS_84_UTM_Zone_60N;
		}
		else if(retval == WGS_84_UTM_Grid_System_Southern_Hemisphere.value){
			return WGS_84_UTM_Grid_System_Southern_Hemisphere;
		}
		else if(retval == WGS_84_UTM_zone_1S.value){
			return WGS_84_UTM_zone_1S;
		}
		else if(retval == WGS_84_UTM_zone_2S.value){
			return WGS_84_UTM_zone_2S;
		}
		else if(retval == WGS_84_UTM_zone_3S.value){
			return WGS_84_UTM_zone_3S;
		}
		else if(retval == WGS_84_UTM_zone_4S.value){
			return WGS_84_UTM_zone_4S;
		}
		else if(retval == WGS_84_UTM_zone_5S.value){
			return WGS_84_UTM_zone_5S;
		}
		else if(retval == WGS_84_UTM_zone_6S.value){
			return WGS_84_UTM_zone_6S;
		}
		else if(retval == WGS_84_UTM_zone_7S.value){
			return WGS_84_UTM_zone_7S;
		}
		else if(retval == WGS_84_UTM_zone_8S.value){
			return WGS_84_UTM_zone_8S;
		}
		else if(retval == WGS_84_UTM_zone_9S.value){
			return WGS_84_UTM_zone_9S;
		}
		else if(retval == WGS_84_UTM_zone_10S.value){
			return WGS_84_UTM_zone_10S;
		}
		else if(retval == WGS_84_UTM_zone_11S.value){
			return WGS_84_UTM_zone_11S;
		}
		else if(retval == WGS_84_UTM_zone_12S.value){
			return WGS_84_UTM_zone_12S;
		}
		else if(retval == WGS_84_UTM_zone_13S.value){
			return WGS_84_UTM_zone_13S;
		}
		else if(retval == WGS_84_UTM_zone_14S.value){
			return WGS_84_UTM_zone_14S;
		}
		else if(retval == WGS_84_UTM_zone_15S.value){
			return WGS_84_UTM_zone_15S;
		}
		else if(retval == WGS_84_UTM_zone_16S.value){
			return WGS_84_UTM_zone_16S;
		}
		else if(retval == WGS_84_UTM_zone_17S.value){
			return WGS_84_UTM_zone_17S;
		}
		else if(retval == WGS_84_UTM_zone_18S.value){
			return WGS_84_UTM_zone_18S;
		}
		else if(retval == WGS_84_UTM_zone_19S.value){
			return WGS_84_UTM_zone_19S;
		}
		else if(retval == WGS_84_UTM_zone_20S.value){
			return WGS_84_UTM_zone_20S;
		}
		else if(retval == WGS_84_UTM_zone_21S.value){
			return WGS_84_UTM_zone_21S;
		}
		else if(retval == WGS_84_UTM_zone_22S.value){
			return WGS_84_UTM_zone_22S;
		}
		else if(retval == WGS_84_UTM_zone_23S.value){
			return WGS_84_UTM_zone_23S;
		}
		else if(retval == WGS_84_UTM_zone_24S.value){
			return WGS_84_UTM_zone_24S;
		}
		else if(retval == WGS_84_UTM_zone_25S.value){
			return WGS_84_UTM_zone_25S;
		}
		else if(retval == WGS_84_UTM_zone_26S.value){
			return WGS_84_UTM_zone_26S;
		}
		else if(retval == WGS_84_UTM_zone_27S.value){
			return WGS_84_UTM_zone_27S;
		}
		else if(retval == WGS_84_UTM_zone_28S.value){
			return WGS_84_UTM_zone_28S;
		}
		else if(retval == WGS_84_UTM_zone_29S.value){
			return WGS_84_UTM_zone_29S;
		}
		else if(retval == WGS_84_UTM_zone_30S.value){
			return WGS_84_UTM_zone_30S;
		}
		else if(retval == WGS_84_UTM_zone_31S.value){
			return WGS_84_UTM_zone_31S;
		}
		else if(retval == WGS_84_UTM_zone_32S.value){
			return WGS_84_UTM_zone_32S;
		}
		else if(retval == WGS_84_UTM_zone_33S.value){
			return WGS_84_UTM_zone_33S;
		}
		else if(retval == WGS_84_UTM_zone_34S.value){
			return WGS_84_UTM_zone_34S;
		}
		else if(retval == WGS_84_UTM_zone_35S.value){
			return WGS_84_UTM_zone_35S;
		}
		else if(retval == WGS_84_UTM_zone_36S.value){
			return WGS_84_UTM_zone_36S;
		}
		else if(retval == WGS_84_UTM_zone_37S.value){
			return WGS_84_UTM_zone_37S;
		}
		else if(retval == WGS_84_UTM_zone_38S.value){
			return WGS_84_UTM_zone_38S;
		}
		else if(retval == WGS_84_UTM_zone_39S.value){
			return WGS_84_UTM_zone_39S;
		}
		else if(retval == WGS_84_UTM_zone_40S.value){
			return WGS_84_UTM_zone_40S;
		}
		else if(retval == WGS_84_UTM_zone_41S.value){
			return WGS_84_UTM_zone_41S;
		}
		else if(retval == WGS_84_UTM_zone_42S.value){
			return WGS_84_UTM_zone_42S;
		}
		else if(retval == WGS_84_UTM_zone_43S.value){
			return WGS_84_UTM_zone_43S;
		}
		else if(retval == WGS_84_UTM_zone_44S.value){
			return WGS_84_UTM_zone_44S;
		}
		else if(retval == WGS_84_UTM_zone_45S.value){
			return WGS_84_UTM_zone_45S;
		}
		else if(retval == WGS_84_UTM_zone_46S.value){
			return WGS_84_UTM_zone_46S;
		}
		else if(retval == WGS_84_UTM_zone_47S.value){
			return WGS_84_UTM_zone_47S;
		}
		else if(retval == WGS_84_UTM_zone_48S.value){
			return WGS_84_UTM_zone_48S;
		}
		else if(retval == WGS_84_UTM_zone_49S.value){
			return WGS_84_UTM_zone_49S;
		}
		else if(retval == WGS_84_UTM_zone_50S.value){
			return WGS_84_UTM_zone_50S;
		}
		else if(retval == WGS_84_UTM_zone_51S.value){
			return WGS_84_UTM_zone_51S;
		}
		else if(retval == WGS_84_UTM_zone_52S.value){
			return WGS_84_UTM_zone_52S;
		}
		else if(retval == WGS_84_UTM_zone_53S.value){
			return WGS_84_UTM_zone_53S;
		}
		else if(retval == WGS_84_UTM_zone_54S.value){
			return WGS_84_UTM_zone_54S;
		}
		else if(retval == WGS_84_UTM_zone_55S.value){
			return WGS_84_UTM_zone_55S;
		}
		else if(retval == WGS_84_UTM_zone_56S.value){
			return WGS_84_UTM_zone_56S;
		}
		else if(retval == WGS_84_UTM_zone_57S.value){
			return WGS_84_UTM_zone_57S;
		}
		else if(retval == WGS_84_UTM_zone_58S.value){
			return WGS_84_UTM_zone_58S;
		}
		else if(retval == WGS_84_UTM_zone_59S.value){
			return WGS_84_UTM_zone_59S;
		}
		else if(retval == WGS_84_UTM_zone_60S.value){
			return WGS_84_UTM_zone_60S;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_13.value){
			return Xian_1980_Gauss_Kruger_zone_13;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_14.value){
			return Xian_1980_Gauss_Kruger_zone_14;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_15.value){
			return Xian_1980_Gauss_Kruger_zone_15;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_16.value){
			return Xian_1980_Gauss_Kruger_zone_16;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_17.value){
			return Xian_1980_Gauss_Kruger_zone_17;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_18.value){
			return Xian_1980_Gauss_Kruger_zone_18;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_19.value){
			return Xian_1980_Gauss_Kruger_zone_19;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_20.value){
			return Xian_1980_Gauss_Kruger_zone_20;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_21.value){
			return Xian_1980_Gauss_Kruger_zone_21;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_22.value){
			return Xian_1980_Gauss_Kruger_zone_22;
		}
		else if(retval == Xian_1980_Gauss_Kruger_zone_23.value){
			return Xian_1980_Gauss_Kruger_zone_23;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_75E.value){
			return Xian_1980_Gauss_Kruger_CM_75E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_81E.value){
			return Xian_1980_Gauss_Kruger_CM_81E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_87E.value){
			return Xian_1980_Gauss_Kruger_CM_87E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_93E.value){
			return Xian_1980_Gauss_Kruger_CM_93E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_99E.value){
			return Xian_1980_Gauss_Kruger_CM_99E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_105E.value){
			return Xian_1980_Gauss_Kruger_CM_105E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_111E.value){
			return Xian_1980_Gauss_Kruger_CM_111E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_117E.value){
			return Xian_1980_Gauss_Kruger_CM_117E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_123E.value){
			return Xian_1980_Gauss_Kruger_CM_123E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_129E.value){
			return Xian_1980_Gauss_Kruger_CM_129E;
		}
		else if(retval == Xian_1980_Gauss_Kruger_CM_135E.value){
			return Xian_1980_Gauss_Kruger_CM_135E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_25.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_25;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_26.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_26;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_27.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_27;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_28.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_28;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_29.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_29;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_30.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_30;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_31.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_31;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_32.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_32;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_33.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_33;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_34.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_34;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_35.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_35;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_36.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_36;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_37.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_37;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_38.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_38;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_39.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_39;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_40.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_40;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_41.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_41;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_42.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_42;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_43.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_43;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_44.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_44;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_zone_45.value){
			return Xian_1980_3_degree_Gauss_Kruger_zone_45;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_75E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_75E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_78E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_78E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_81E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_81E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_84E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_84E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_87E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_87E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_90E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_90E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_93E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_93E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_96E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_96E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_99E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_99E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_102E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_102E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_105E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_105E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_108E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_108E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_111E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_111E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_114E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_114E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_117E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_117E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_120E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_120E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_123E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_123E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_126E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_126E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_129E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_129E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_132E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_132E;
		}
		else if(retval == Xian_1980_3_degree_Gauss_Kruger_CM_135E.value){
			return Xian_1980_3_degree_Gauss_Kruger_CM_135E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_25.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_25;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_26.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_26;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_27.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_27;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_28.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_28;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_29.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_29;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_30.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_30;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_31.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_31;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_32.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_32;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_33.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_33;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_34.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_34;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_35.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_35;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_36.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_36;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_37.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_37;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_38.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_38;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_39.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_39;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_40.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_40;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_41.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_41;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_42.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_42;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_43.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_43;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_44.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_44;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_zone_45.value){
			return Beijing_1954_3_degree_Gauss_Kruger_zone_45;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_75E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_75E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_78E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_78E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_81E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_81E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_84E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_84E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_87E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_87E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_90E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_90E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_93E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_93E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_96E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_96E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_99E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_99E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_102E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_102E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_105E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_105E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_108E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_108E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_111E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_111E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_114E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_114E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_117E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_117E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_120E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_120E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_123E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_123E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_126E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_126E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_129E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_129E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_132E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_132E;
		}
		else if(retval == Beijing_1954_3_degree_Gauss_Kruger_CM_135E.value){
			return Beijing_1954_3_degree_Gauss_Kruger_CM_135E;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_13.value){
			return Beijing_1954_Gauss_Kruger_Zone_13;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_14.value){
			return Beijing_1954_Gauss_Kruger_Zone_14;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_15.value){
			return Beijing_1954_Gauss_Kruger_Zone_15;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_16.value){
			return Beijing_1954_Gauss_Kruger_Zone_16;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_17.value){
			return Beijing_1954_Gauss_Kruger_Zone_17;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_18.value){
			return Beijing_1954_Gauss_Kruger_Zone_18;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_19.value){
			return Beijing_1954_Gauss_Kruger_Zone_19;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_20.value){
			return Beijing_1954_Gauss_Kruger_Zone_20;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_21.value){
			return Beijing_1954_Gauss_Kruger_Zone_21;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_22.value){
			return Beijing_1954_Gauss_Kruger_Zone_22;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_23.value){
			return Beijing_1954_Gauss_Kruger_Zone_23;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_13N.value){
			return Beijing_1954_Gauss_Kruger_Zone_13N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_14N.value){
			return Beijing_1954_Gauss_Kruger_Zone_14N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_15N.value){
			return Beijing_1954_Gauss_Kruger_Zone_15N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_16N.value){
			return Beijing_1954_Gauss_Kruger_Zone_16N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_17N.value){
			return Beijing_1954_Gauss_Kruger_Zone_17N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_18N.value){
			return Beijing_1954_Gauss_Kruger_Zone_18N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_19N.value){
			return Beijing_1954_Gauss_Kruger_Zone_19N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_20N.value){
			return Beijing_1954_Gauss_Kruger_Zone_20N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_21N.value){
			return Beijing_1954_Gauss_Kruger_Zone_21N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_22N.value){
			return Beijing_1954_Gauss_Kruger_Zone_22N;
		}
		else if(retval == Beijing_1954_Gauss_Kruger_Zone_23N.value){
			return Beijing_1954_Gauss_Kruger_Zone_23N;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_13.value){
			return CGCS2000_Gauss_Kruger_zone_13;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_14.value){
			return CGCS2000_Gauss_Kruger_zone_14;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_15.value){
			return CGCS2000_Gauss_Kruger_zone_15;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_16.value){
			return CGCS2000_Gauss_Kruger_zone_16;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_17.value){
			return CGCS2000_Gauss_Kruger_zone_17;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_18.value){
			return CGCS2000_Gauss_Kruger_zone_18;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_19.value){
			return CGCS2000_Gauss_Kruger_zone_19;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_20.value){
			return CGCS2000_Gauss_Kruger_zone_20;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_21.value){
			return CGCS2000_Gauss_Kruger_zone_21;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_22.value){
			return CGCS2000_Gauss_Kruger_zone_22;
		}
		else if(retval == CGCS2000_Gauss_Kruger_zone_23.value){
			return CGCS2000_Gauss_Kruger_zone_23;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_75E.value){
			return CGCS2000_Gauss_Kruger_CM_75E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_81E.value){
			return CGCS2000_Gauss_Kruger_CM_81E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_87E.value){
			return CGCS2000_Gauss_Kruger_CM_87E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_93E.value){
			return CGCS2000_Gauss_Kruger_CM_93E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_99E.value){
			return CGCS2000_Gauss_Kruger_CM_99E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_105E.value){
			return CGCS2000_Gauss_Kruger_CM_105E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_111E.value){
			return CGCS2000_Gauss_Kruger_CM_111E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_117E.value){
			return CGCS2000_Gauss_Kruger_CM_117E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_123E.value){
			return CGCS2000_Gauss_Kruger_CM_123E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_129E.value){
			return CGCS2000_Gauss_Kruger_CM_129E;
		}
		else if(retval == CGCS2000_Gauss_Kruger_CM_135E.value){
			return CGCS2000_Gauss_Kruger_CM_135E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_25.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_25;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_26.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_26;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_27.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_27;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_28.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_28;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_29.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_29;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_30.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_30;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_31.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_31;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_32.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_32;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_33.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_33;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_34.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_34;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_35.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_35;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_36.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_36;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_37.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_37;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_38.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_38;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_39.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_39;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_40.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_40;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_41.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_41;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_42.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_42;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_43.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_43;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_44.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_44;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_zone_45.value){
			return CGCS2000_3_degree_Gauss_Kruger_zone_45;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_75E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_75E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_78E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_78E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_81E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_81E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_84E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_84E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_87E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_87E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_90E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_90E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_93E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_93E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_96E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_96E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_99E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_99E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_102E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_102E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_105E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_105E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_108E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_108E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_111E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_111E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_114E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_114E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_117E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_117E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_120E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_120E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_123E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_123E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_126E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_126E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_129E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_129E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_132E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_132E;
		}
		else if(retval == CGCS2000_3_degree_Gauss_Kruger_CM_135E.value){
			return CGCS2000_3_degree_Gauss_Kruger_CM_135E;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWellKnownProjCSTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
