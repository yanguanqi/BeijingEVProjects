package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVEVPredefinedProjection预定义投影
 */
public enum EVPredefinedProjection implements INativeEnum<EVPredefinedProjection> {
	EV_Gauss_Kruger_6_degree_zone_13(EVPredefinedProjectionHelper.ENUM_VALUES[0]),
	EV_Gauss_Kruger_6_degree_zone_14(EVPredefinedProjectionHelper.ENUM_VALUES[1]),
	EV_Gauss_Kruger_6_degree_zone_15(EVPredefinedProjectionHelper.ENUM_VALUES[2]),
	EV_Gauss_Kruger_6_degree_zone_16(EVPredefinedProjectionHelper.ENUM_VALUES[3]),
	EV_Gauss_Kruger_6_degree_zone_17(EVPredefinedProjectionHelper.ENUM_VALUES[4]),
	EV_Gauss_Kruger_6_degree_zone_18(EVPredefinedProjectionHelper.ENUM_VALUES[5]),
	EV_Gauss_Kruger_6_degree_zone_19(EVPredefinedProjectionHelper.ENUM_VALUES[6]),
	EV_Gauss_Kruger_6_degree_zone_20(EVPredefinedProjectionHelper.ENUM_VALUES[7]),
	EV_Gauss_Kruger_6_degree_zone_21(EVPredefinedProjectionHelper.ENUM_VALUES[8]),
	EV_Gauss_Kruger_6_degree_zone_22(EVPredefinedProjectionHelper.ENUM_VALUES[9]),
	EV_Gauss_Kruger_6_degree_zone_23(EVPredefinedProjectionHelper.ENUM_VALUES[10]),
	EV_Gauss_Kruger_3_degree_zone_25(EVPredefinedProjectionHelper.ENUM_VALUES[11]),
	EV_Gauss_Kruger_3_degree_zone_26(EVPredefinedProjectionHelper.ENUM_VALUES[12]),
	EV_Gauss_Kruger_3_degree_zone_27(EVPredefinedProjectionHelper.ENUM_VALUES[13]),
	EV_Gauss_Kruger_3_degree_zone_28(EVPredefinedProjectionHelper.ENUM_VALUES[14]),
	EV_Gauss_Kruger_3_degree_zone_29(EVPredefinedProjectionHelper.ENUM_VALUES[15]),
	EV_Gauss_Kruger_3_degree_zone_30(EVPredefinedProjectionHelper.ENUM_VALUES[16]),
	EV_Gauss_Kruger_3_degree_zone_31(EVPredefinedProjectionHelper.ENUM_VALUES[17]),
	EV_Gauss_Kruger_3_degree_zone_32(EVPredefinedProjectionHelper.ENUM_VALUES[18]),
	EV_Gauss_Kruger_3_degree_zone_33(EVPredefinedProjectionHelper.ENUM_VALUES[19]),
	EV_Gauss_Kruger_3_degree_zone_34(EVPredefinedProjectionHelper.ENUM_VALUES[20]),
	EV_Gauss_Kruger_3_degree_zone_35(EVPredefinedProjectionHelper.ENUM_VALUES[21]),
	EV_Gauss_Kruger_3_degree_zone_36(EVPredefinedProjectionHelper.ENUM_VALUES[22]),
	EV_Gauss_Kruger_3_degree_zone_37(EVPredefinedProjectionHelper.ENUM_VALUES[23]),
	EV_Gauss_Kruger_3_degree_zone_38(EVPredefinedProjectionHelper.ENUM_VALUES[24]),
	EV_Gauss_Kruger_3_degree_zone_39(EVPredefinedProjectionHelper.ENUM_VALUES[25]),
	EV_Gauss_Kruger_3_degree_zone_40(EVPredefinedProjectionHelper.ENUM_VALUES[26]),
	EV_Gauss_Kruger_3_degree_zone_41(EVPredefinedProjectionHelper.ENUM_VALUES[27]),
	EV_Gauss_Kruger_3_degree_zone_42(EVPredefinedProjectionHelper.ENUM_VALUES[28]),
	EV_Gauss_Kruger_3_degree_zone_43(EVPredefinedProjectionHelper.ENUM_VALUES[29]),
	EV_Gauss_Kruger_3_degree_zone_44(EVPredefinedProjectionHelper.ENUM_VALUES[30]),
	EV_Gauss_Kruger_3_degree_zone_45(EVPredefinedProjectionHelper.ENUM_VALUES[31]),
	EV_UTM_zone_1N(EVPredefinedProjectionHelper.ENUM_VALUES[32]),
	EV_UTM_zone_2N(EVPredefinedProjectionHelper.ENUM_VALUES[33]),
	EV_UTM_zone_3N(EVPredefinedProjectionHelper.ENUM_VALUES[34]),
	EV_UTM_zone_4N(EVPredefinedProjectionHelper.ENUM_VALUES[35]),
	EV_UTM_zone_5N(EVPredefinedProjectionHelper.ENUM_VALUES[36]),
	EV_UTM_zone_6N(EVPredefinedProjectionHelper.ENUM_VALUES[37]),
	EV_UTM_zone_7N(EVPredefinedProjectionHelper.ENUM_VALUES[38]),
	EV_UTM_zone_8N(EVPredefinedProjectionHelper.ENUM_VALUES[39]),
	EV_UTM_zone_9N(EVPredefinedProjectionHelper.ENUM_VALUES[40]),
	EV_UTM_zone_10N(EVPredefinedProjectionHelper.ENUM_VALUES[41]),
	EV_UTM_zone_11N(EVPredefinedProjectionHelper.ENUM_VALUES[42]),
	EV_UTM_zone_12N(EVPredefinedProjectionHelper.ENUM_VALUES[43]),
	EV_UTM_zone_13N(EVPredefinedProjectionHelper.ENUM_VALUES[44]),
	EV_UTM_zone_14N(EVPredefinedProjectionHelper.ENUM_VALUES[45]),
	EV_UTM_zone_15N(EVPredefinedProjectionHelper.ENUM_VALUES[46]),
	EV_UTM_zone_16N(EVPredefinedProjectionHelper.ENUM_VALUES[47]),
	EV_UTM_zone_17N(EVPredefinedProjectionHelper.ENUM_VALUES[48]),
	EV_UTM_zone_18N(EVPredefinedProjectionHelper.ENUM_VALUES[49]),
	EV_UTM_zone_19N(EVPredefinedProjectionHelper.ENUM_VALUES[50]),
	EV_UTM_zone_20N(EVPredefinedProjectionHelper.ENUM_VALUES[51]),
	EV_UTM_zone_21N(EVPredefinedProjectionHelper.ENUM_VALUES[52]),
	EV_UTM_zone_22N(EVPredefinedProjectionHelper.ENUM_VALUES[53]),
	EV_UTM_zone_23N(EVPredefinedProjectionHelper.ENUM_VALUES[54]),
	EV_UTM_zone_24N(EVPredefinedProjectionHelper.ENUM_VALUES[55]),
	EV_UTM_zone_25N(EVPredefinedProjectionHelper.ENUM_VALUES[56]),
	EV_UTM_zone_26N(EVPredefinedProjectionHelper.ENUM_VALUES[57]),
	EV_UTM_zone_27N(EVPredefinedProjectionHelper.ENUM_VALUES[58]),
	EV_UTM_zone_28N(EVPredefinedProjectionHelper.ENUM_VALUES[59]),
	EV_UTM_zone_29N(EVPredefinedProjectionHelper.ENUM_VALUES[60]),
	EV_UTM_zone_30N(EVPredefinedProjectionHelper.ENUM_VALUES[61]),
	EV_UTM_zone_31N(EVPredefinedProjectionHelper.ENUM_VALUES[62]),
	EV_UTM_zone_32N(EVPredefinedProjectionHelper.ENUM_VALUES[63]),
	EV_UTM_zone_33N(EVPredefinedProjectionHelper.ENUM_VALUES[64]),
	EV_UTM_zone_34N(EVPredefinedProjectionHelper.ENUM_VALUES[65]),
	EV_UTM_zone_35N(EVPredefinedProjectionHelper.ENUM_VALUES[66]),
	EV_UTM_zone_36N(EVPredefinedProjectionHelper.ENUM_VALUES[67]),
	EV_UTM_zone_37N(EVPredefinedProjectionHelper.ENUM_VALUES[68]),
	EV_UTM_zone_38N(EVPredefinedProjectionHelper.ENUM_VALUES[69]),
	EV_UTM_zone_39N(EVPredefinedProjectionHelper.ENUM_VALUES[70]),
	EV_UTM_zone_40N(EVPredefinedProjectionHelper.ENUM_VALUES[71]),
	EV_UTM_zone_41N(EVPredefinedProjectionHelper.ENUM_VALUES[72]),
	EV_UTM_zone_42N(EVPredefinedProjectionHelper.ENUM_VALUES[73]),
	EV_UTM_zone_43N(EVPredefinedProjectionHelper.ENUM_VALUES[74]),
	EV_UTM_zone_44N(EVPredefinedProjectionHelper.ENUM_VALUES[75]),
	EV_UTM_zone_45N(EVPredefinedProjectionHelper.ENUM_VALUES[76]),
	EV_UTM_zone_46N(EVPredefinedProjectionHelper.ENUM_VALUES[77]),
	EV_UTM_zone_47N(EVPredefinedProjectionHelper.ENUM_VALUES[78]),
	EV_UTM_zone_48N(EVPredefinedProjectionHelper.ENUM_VALUES[79]),
	EV_UTM_zone_49N(EVPredefinedProjectionHelper.ENUM_VALUES[80]),
	EV_UTM_zone_50N(EVPredefinedProjectionHelper.ENUM_VALUES[81]),
	EV_UTM_zone_51N(EVPredefinedProjectionHelper.ENUM_VALUES[82]),
	EV_UTM_zone_52N(EVPredefinedProjectionHelper.ENUM_VALUES[83]),
	EV_UTM_zone_53N(EVPredefinedProjectionHelper.ENUM_VALUES[84]),
	EV_UTM_zone_54N(EVPredefinedProjectionHelper.ENUM_VALUES[85]),
	EV_UTM_zone_55N(EVPredefinedProjectionHelper.ENUM_VALUES[86]),
	EV_UTM_zone_56N(EVPredefinedProjectionHelper.ENUM_VALUES[87]),
	EV_UTM_zone_57N(EVPredefinedProjectionHelper.ENUM_VALUES[88]),
	EV_UTM_zone_58N(EVPredefinedProjectionHelper.ENUM_VALUES[89]),
	EV_UTM_zone_59N(EVPredefinedProjectionHelper.ENUM_VALUES[90]),
	EV_UTM_zone_60N(EVPredefinedProjectionHelper.ENUM_VALUES[91]),
	EV_UTM_zone_1S(EVPredefinedProjectionHelper.ENUM_VALUES[92]),
	EV_UTM_zone_2S(EVPredefinedProjectionHelper.ENUM_VALUES[93]),
	EV_UTM_zone_3S(EVPredefinedProjectionHelper.ENUM_VALUES[94]),
	EV_UTM_zone_4S(EVPredefinedProjectionHelper.ENUM_VALUES[95]),
	EV_UTM_zone_5S(EVPredefinedProjectionHelper.ENUM_VALUES[96]),
	EV_UTM_zone_6S(EVPredefinedProjectionHelper.ENUM_VALUES[97]),
	EV_UTM_zone_7S(EVPredefinedProjectionHelper.ENUM_VALUES[98]),
	EV_UTM_zone_8S(EVPredefinedProjectionHelper.ENUM_VALUES[99]),
	EV_UTM_zone_9S(EVPredefinedProjectionHelper.ENUM_VALUES[100]),
	EV_UTM_zone_10S(EVPredefinedProjectionHelper.ENUM_VALUES[101]),
	EV_UTM_zone_11S(EVPredefinedProjectionHelper.ENUM_VALUES[102]),
	EV_UTM_zone_12S(EVPredefinedProjectionHelper.ENUM_VALUES[103]),
	EV_UTM_zone_13S(EVPredefinedProjectionHelper.ENUM_VALUES[104]),
	EV_UTM_zone_14S(EVPredefinedProjectionHelper.ENUM_VALUES[105]),
	EV_UTM_zone_15S(EVPredefinedProjectionHelper.ENUM_VALUES[106]),
	EV_UTM_zone_16S(EVPredefinedProjectionHelper.ENUM_VALUES[107]),
	EV_UTM_zone_17S(EVPredefinedProjectionHelper.ENUM_VALUES[108]),
	EV_UTM_zone_18S(EVPredefinedProjectionHelper.ENUM_VALUES[109]),
	EV_UTM_zone_19S(EVPredefinedProjectionHelper.ENUM_VALUES[110]),
	EV_UTM_zone_20S(EVPredefinedProjectionHelper.ENUM_VALUES[111]),
	EV_UTM_zone_21S(EVPredefinedProjectionHelper.ENUM_VALUES[112]),
	EV_UTM_zone_22S(EVPredefinedProjectionHelper.ENUM_VALUES[113]),
	EV_UTM_zone_23S(EVPredefinedProjectionHelper.ENUM_VALUES[114]),
	EV_UTM_zone_24S(EVPredefinedProjectionHelper.ENUM_VALUES[115]),
	EV_UTM_zone_25S(EVPredefinedProjectionHelper.ENUM_VALUES[116]),
	EV_UTM_zone_26S(EVPredefinedProjectionHelper.ENUM_VALUES[117]),
	EV_UTM_zone_27S(EVPredefinedProjectionHelper.ENUM_VALUES[118]),
	EV_UTM_zone_28S(EVPredefinedProjectionHelper.ENUM_VALUES[119]),
	EV_UTM_zone_29S(EVPredefinedProjectionHelper.ENUM_VALUES[120]),
	EV_UTM_zone_30S(EVPredefinedProjectionHelper.ENUM_VALUES[121]),
	EV_UTM_zone_31S(EVPredefinedProjectionHelper.ENUM_VALUES[122]),
	EV_UTM_zone_32S(EVPredefinedProjectionHelper.ENUM_VALUES[123]),
	EV_UTM_zone_33S(EVPredefinedProjectionHelper.ENUM_VALUES[124]),
	EV_UTM_zone_34S(EVPredefinedProjectionHelper.ENUM_VALUES[125]),
	EV_UTM_zone_35S(EVPredefinedProjectionHelper.ENUM_VALUES[126]),
	EV_UTM_zone_36S(EVPredefinedProjectionHelper.ENUM_VALUES[127]),
	EV_UTM_zone_37S(EVPredefinedProjectionHelper.ENUM_VALUES[128]),
	EV_UTM_zone_38S(EVPredefinedProjectionHelper.ENUM_VALUES[129]),
	EV_UTM_zone_39S(EVPredefinedProjectionHelper.ENUM_VALUES[130]),
	EV_UTM_zone_40S(EVPredefinedProjectionHelper.ENUM_VALUES[131]),
	EV_UTM_zone_41S(EVPredefinedProjectionHelper.ENUM_VALUES[132]),
	EV_UTM_zone_42S(EVPredefinedProjectionHelper.ENUM_VALUES[133]),
	EV_UTM_zone_43S(EVPredefinedProjectionHelper.ENUM_VALUES[134]),
	EV_UTM_zone_44S(EVPredefinedProjectionHelper.ENUM_VALUES[135]),
	EV_UTM_zone_45S(EVPredefinedProjectionHelper.ENUM_VALUES[136]),
	EV_UTM_zone_46S(EVPredefinedProjectionHelper.ENUM_VALUES[137]),
	EV_UTM_zone_47S(EVPredefinedProjectionHelper.ENUM_VALUES[138]),
	EV_UTM_zone_48S(EVPredefinedProjectionHelper.ENUM_VALUES[139]),
	EV_UTM_zone_49S(EVPredefinedProjectionHelper.ENUM_VALUES[140]),
	EV_UTM_zone_50S(EVPredefinedProjectionHelper.ENUM_VALUES[141]),
	EV_UTM_zone_51S(EVPredefinedProjectionHelper.ENUM_VALUES[142]),
	EV_UTM_zone_52S(EVPredefinedProjectionHelper.ENUM_VALUES[143]),
	EV_UTM_zone_53S(EVPredefinedProjectionHelper.ENUM_VALUES[144]),
	EV_UTM_zone_54S(EVPredefinedProjectionHelper.ENUM_VALUES[145]),
	EV_UTM_zone_55S(EVPredefinedProjectionHelper.ENUM_VALUES[146]),
	EV_UTM_zone_56S(EVPredefinedProjectionHelper.ENUM_VALUES[147]),
	EV_UTM_zone_57S(EVPredefinedProjectionHelper.ENUM_VALUES[148]),
	EV_UTM_zone_58S(EVPredefinedProjectionHelper.ENUM_VALUES[149]),
	EV_UTM_zone_59S(EVPredefinedProjectionHelper.ENUM_VALUES[150]),
	EV_UTM_zone_60S(EVPredefinedProjectionHelper.ENUM_VALUES[151]);
	private int value;
	EVPredefinedProjection(int i) {
		this.value = i;
	}
	public EVPredefinedProjection getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPredefinedProjection toEnum(int retval) {
		if(retval == EV_Gauss_Kruger_6_degree_zone_13.value){
			return EV_Gauss_Kruger_6_degree_zone_13;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_14.value){
			return EV_Gauss_Kruger_6_degree_zone_14;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_15.value){
			return EV_Gauss_Kruger_6_degree_zone_15;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_16.value){
			return EV_Gauss_Kruger_6_degree_zone_16;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_17.value){
			return EV_Gauss_Kruger_6_degree_zone_17;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_18.value){
			return EV_Gauss_Kruger_6_degree_zone_18;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_19.value){
			return EV_Gauss_Kruger_6_degree_zone_19;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_20.value){
			return EV_Gauss_Kruger_6_degree_zone_20;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_21.value){
			return EV_Gauss_Kruger_6_degree_zone_21;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_22.value){
			return EV_Gauss_Kruger_6_degree_zone_22;
		}
		else if(retval == EV_Gauss_Kruger_6_degree_zone_23.value){
			return EV_Gauss_Kruger_6_degree_zone_23;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_25.value){
			return EV_Gauss_Kruger_3_degree_zone_25;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_26.value){
			return EV_Gauss_Kruger_3_degree_zone_26;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_27.value){
			return EV_Gauss_Kruger_3_degree_zone_27;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_28.value){
			return EV_Gauss_Kruger_3_degree_zone_28;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_29.value){
			return EV_Gauss_Kruger_3_degree_zone_29;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_30.value){
			return EV_Gauss_Kruger_3_degree_zone_30;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_31.value){
			return EV_Gauss_Kruger_3_degree_zone_31;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_32.value){
			return EV_Gauss_Kruger_3_degree_zone_32;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_33.value){
			return EV_Gauss_Kruger_3_degree_zone_33;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_34.value){
			return EV_Gauss_Kruger_3_degree_zone_34;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_35.value){
			return EV_Gauss_Kruger_3_degree_zone_35;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_36.value){
			return EV_Gauss_Kruger_3_degree_zone_36;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_37.value){
			return EV_Gauss_Kruger_3_degree_zone_37;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_38.value){
			return EV_Gauss_Kruger_3_degree_zone_38;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_39.value){
			return EV_Gauss_Kruger_3_degree_zone_39;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_40.value){
			return EV_Gauss_Kruger_3_degree_zone_40;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_41.value){
			return EV_Gauss_Kruger_3_degree_zone_41;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_42.value){
			return EV_Gauss_Kruger_3_degree_zone_42;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_43.value){
			return EV_Gauss_Kruger_3_degree_zone_43;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_44.value){
			return EV_Gauss_Kruger_3_degree_zone_44;
		}
		else if(retval == EV_Gauss_Kruger_3_degree_zone_45.value){
			return EV_Gauss_Kruger_3_degree_zone_45;
		}
		else if(retval == EV_UTM_zone_1N.value){
			return EV_UTM_zone_1N;
		}
		else if(retval == EV_UTM_zone_2N.value){
			return EV_UTM_zone_2N;
		}
		else if(retval == EV_UTM_zone_3N.value){
			return EV_UTM_zone_3N;
		}
		else if(retval == EV_UTM_zone_4N.value){
			return EV_UTM_zone_4N;
		}
		else if(retval == EV_UTM_zone_5N.value){
			return EV_UTM_zone_5N;
		}
		else if(retval == EV_UTM_zone_6N.value){
			return EV_UTM_zone_6N;
		}
		else if(retval == EV_UTM_zone_7N.value){
			return EV_UTM_zone_7N;
		}
		else if(retval == EV_UTM_zone_8N.value){
			return EV_UTM_zone_8N;
		}
		else if(retval == EV_UTM_zone_9N.value){
			return EV_UTM_zone_9N;
		}
		else if(retval == EV_UTM_zone_10N.value){
			return EV_UTM_zone_10N;
		}
		else if(retval == EV_UTM_zone_11N.value){
			return EV_UTM_zone_11N;
		}
		else if(retval == EV_UTM_zone_12N.value){
			return EV_UTM_zone_12N;
		}
		else if(retval == EV_UTM_zone_13N.value){
			return EV_UTM_zone_13N;
		}
		else if(retval == EV_UTM_zone_14N.value){
			return EV_UTM_zone_14N;
		}
		else if(retval == EV_UTM_zone_15N.value){
			return EV_UTM_zone_15N;
		}
		else if(retval == EV_UTM_zone_16N.value){
			return EV_UTM_zone_16N;
		}
		else if(retval == EV_UTM_zone_17N.value){
			return EV_UTM_zone_17N;
		}
		else if(retval == EV_UTM_zone_18N.value){
			return EV_UTM_zone_18N;
		}
		else if(retval == EV_UTM_zone_19N.value){
			return EV_UTM_zone_19N;
		}
		else if(retval == EV_UTM_zone_20N.value){
			return EV_UTM_zone_20N;
		}
		else if(retval == EV_UTM_zone_21N.value){
			return EV_UTM_zone_21N;
		}
		else if(retval == EV_UTM_zone_22N.value){
			return EV_UTM_zone_22N;
		}
		else if(retval == EV_UTM_zone_23N.value){
			return EV_UTM_zone_23N;
		}
		else if(retval == EV_UTM_zone_24N.value){
			return EV_UTM_zone_24N;
		}
		else if(retval == EV_UTM_zone_25N.value){
			return EV_UTM_zone_25N;
		}
		else if(retval == EV_UTM_zone_26N.value){
			return EV_UTM_zone_26N;
		}
		else if(retval == EV_UTM_zone_27N.value){
			return EV_UTM_zone_27N;
		}
		else if(retval == EV_UTM_zone_28N.value){
			return EV_UTM_zone_28N;
		}
		else if(retval == EV_UTM_zone_29N.value){
			return EV_UTM_zone_29N;
		}
		else if(retval == EV_UTM_zone_30N.value){
			return EV_UTM_zone_30N;
		}
		else if(retval == EV_UTM_zone_31N.value){
			return EV_UTM_zone_31N;
		}
		else if(retval == EV_UTM_zone_32N.value){
			return EV_UTM_zone_32N;
		}
		else if(retval == EV_UTM_zone_33N.value){
			return EV_UTM_zone_33N;
		}
		else if(retval == EV_UTM_zone_34N.value){
			return EV_UTM_zone_34N;
		}
		else if(retval == EV_UTM_zone_35N.value){
			return EV_UTM_zone_35N;
		}
		else if(retval == EV_UTM_zone_36N.value){
			return EV_UTM_zone_36N;
		}
		else if(retval == EV_UTM_zone_37N.value){
			return EV_UTM_zone_37N;
		}
		else if(retval == EV_UTM_zone_38N.value){
			return EV_UTM_zone_38N;
		}
		else if(retval == EV_UTM_zone_39N.value){
			return EV_UTM_zone_39N;
		}
		else if(retval == EV_UTM_zone_40N.value){
			return EV_UTM_zone_40N;
		}
		else if(retval == EV_UTM_zone_41N.value){
			return EV_UTM_zone_41N;
		}
		else if(retval == EV_UTM_zone_42N.value){
			return EV_UTM_zone_42N;
		}
		else if(retval == EV_UTM_zone_43N.value){
			return EV_UTM_zone_43N;
		}
		else if(retval == EV_UTM_zone_44N.value){
			return EV_UTM_zone_44N;
		}
		else if(retval == EV_UTM_zone_45N.value){
			return EV_UTM_zone_45N;
		}
		else if(retval == EV_UTM_zone_46N.value){
			return EV_UTM_zone_46N;
		}
		else if(retval == EV_UTM_zone_47N.value){
			return EV_UTM_zone_47N;
		}
		else if(retval == EV_UTM_zone_48N.value){
			return EV_UTM_zone_48N;
		}
		else if(retval == EV_UTM_zone_49N.value){
			return EV_UTM_zone_49N;
		}
		else if(retval == EV_UTM_zone_50N.value){
			return EV_UTM_zone_50N;
		}
		else if(retval == EV_UTM_zone_51N.value){
			return EV_UTM_zone_51N;
		}
		else if(retval == EV_UTM_zone_52N.value){
			return EV_UTM_zone_52N;
		}
		else if(retval == EV_UTM_zone_53N.value){
			return EV_UTM_zone_53N;
		}
		else if(retval == EV_UTM_zone_54N.value){
			return EV_UTM_zone_54N;
		}
		else if(retval == EV_UTM_zone_55N.value){
			return EV_UTM_zone_55N;
		}
		else if(retval == EV_UTM_zone_56N.value){
			return EV_UTM_zone_56N;
		}
		else if(retval == EV_UTM_zone_57N.value){
			return EV_UTM_zone_57N;
		}
		else if(retval == EV_UTM_zone_58N.value){
			return EV_UTM_zone_58N;
		}
		else if(retval == EV_UTM_zone_59N.value){
			return EV_UTM_zone_59N;
		}
		else if(retval == EV_UTM_zone_60N.value){
			return EV_UTM_zone_60N;
		}
		else if(retval == EV_UTM_zone_1S.value){
			return EV_UTM_zone_1S;
		}
		else if(retval == EV_UTM_zone_2S.value){
			return EV_UTM_zone_2S;
		}
		else if(retval == EV_UTM_zone_3S.value){
			return EV_UTM_zone_3S;
		}
		else if(retval == EV_UTM_zone_4S.value){
			return EV_UTM_zone_4S;
		}
		else if(retval == EV_UTM_zone_5S.value){
			return EV_UTM_zone_5S;
		}
		else if(retval == EV_UTM_zone_6S.value){
			return EV_UTM_zone_6S;
		}
		else if(retval == EV_UTM_zone_7S.value){
			return EV_UTM_zone_7S;
		}
		else if(retval == EV_UTM_zone_8S.value){
			return EV_UTM_zone_8S;
		}
		else if(retval == EV_UTM_zone_9S.value){
			return EV_UTM_zone_9S;
		}
		else if(retval == EV_UTM_zone_10S.value){
			return EV_UTM_zone_10S;
		}
		else if(retval == EV_UTM_zone_11S.value){
			return EV_UTM_zone_11S;
		}
		else if(retval == EV_UTM_zone_12S.value){
			return EV_UTM_zone_12S;
		}
		else if(retval == EV_UTM_zone_13S.value){
			return EV_UTM_zone_13S;
		}
		else if(retval == EV_UTM_zone_14S.value){
			return EV_UTM_zone_14S;
		}
		else if(retval == EV_UTM_zone_15S.value){
			return EV_UTM_zone_15S;
		}
		else if(retval == EV_UTM_zone_16S.value){
			return EV_UTM_zone_16S;
		}
		else if(retval == EV_UTM_zone_17S.value){
			return EV_UTM_zone_17S;
		}
		else if(retval == EV_UTM_zone_18S.value){
			return EV_UTM_zone_18S;
		}
		else if(retval == EV_UTM_zone_19S.value){
			return EV_UTM_zone_19S;
		}
		else if(retval == EV_UTM_zone_20S.value){
			return EV_UTM_zone_20S;
		}
		else if(retval == EV_UTM_zone_21S.value){
			return EV_UTM_zone_21S;
		}
		else if(retval == EV_UTM_zone_22S.value){
			return EV_UTM_zone_22S;
		}
		else if(retval == EV_UTM_zone_23S.value){
			return EV_UTM_zone_23S;
		}
		else if(retval == EV_UTM_zone_24S.value){
			return EV_UTM_zone_24S;
		}
		else if(retval == EV_UTM_zone_25S.value){
			return EV_UTM_zone_25S;
		}
		else if(retval == EV_UTM_zone_26S.value){
			return EV_UTM_zone_26S;
		}
		else if(retval == EV_UTM_zone_27S.value){
			return EV_UTM_zone_27S;
		}
		else if(retval == EV_UTM_zone_28S.value){
			return EV_UTM_zone_28S;
		}
		else if(retval == EV_UTM_zone_29S.value){
			return EV_UTM_zone_29S;
		}
		else if(retval == EV_UTM_zone_30S.value){
			return EV_UTM_zone_30S;
		}
		else if(retval == EV_UTM_zone_31S.value){
			return EV_UTM_zone_31S;
		}
		else if(retval == EV_UTM_zone_32S.value){
			return EV_UTM_zone_32S;
		}
		else if(retval == EV_UTM_zone_33S.value){
			return EV_UTM_zone_33S;
		}
		else if(retval == EV_UTM_zone_34S.value){
			return EV_UTM_zone_34S;
		}
		else if(retval == EV_UTM_zone_35S.value){
			return EV_UTM_zone_35S;
		}
		else if(retval == EV_UTM_zone_36S.value){
			return EV_UTM_zone_36S;
		}
		else if(retval == EV_UTM_zone_37S.value){
			return EV_UTM_zone_37S;
		}
		else if(retval == EV_UTM_zone_38S.value){
			return EV_UTM_zone_38S;
		}
		else if(retval == EV_UTM_zone_39S.value){
			return EV_UTM_zone_39S;
		}
		else if(retval == EV_UTM_zone_40S.value){
			return EV_UTM_zone_40S;
		}
		else if(retval == EV_UTM_zone_41S.value){
			return EV_UTM_zone_41S;
		}
		else if(retval == EV_UTM_zone_42S.value){
			return EV_UTM_zone_42S;
		}
		else if(retval == EV_UTM_zone_43S.value){
			return EV_UTM_zone_43S;
		}
		else if(retval == EV_UTM_zone_44S.value){
			return EV_UTM_zone_44S;
		}
		else if(retval == EV_UTM_zone_45S.value){
			return EV_UTM_zone_45S;
		}
		else if(retval == EV_UTM_zone_46S.value){
			return EV_UTM_zone_46S;
		}
		else if(retval == EV_UTM_zone_47S.value){
			return EV_UTM_zone_47S;
		}
		else if(retval == EV_UTM_zone_48S.value){
			return EV_UTM_zone_48S;
		}
		else if(retval == EV_UTM_zone_49S.value){
			return EV_UTM_zone_49S;
		}
		else if(retval == EV_UTM_zone_50S.value){
			return EV_UTM_zone_50S;
		}
		else if(retval == EV_UTM_zone_51S.value){
			return EV_UTM_zone_51S;
		}
		else if(retval == EV_UTM_zone_52S.value){
			return EV_UTM_zone_52S;
		}
		else if(retval == EV_UTM_zone_53S.value){
			return EV_UTM_zone_53S;
		}
		else if(retval == EV_UTM_zone_54S.value){
			return EV_UTM_zone_54S;
		}
		else if(retval == EV_UTM_zone_55S.value){
			return EV_UTM_zone_55S;
		}
		else if(retval == EV_UTM_zone_56S.value){
			return EV_UTM_zone_56S;
		}
		else if(retval == EV_UTM_zone_57S.value){
			return EV_UTM_zone_57S;
		}
		else if(retval == EV_UTM_zone_58S.value){
			return EV_UTM_zone_58S;
		}
		else if(retval == EV_UTM_zone_59S.value){
			return EV_UTM_zone_59S;
		}
		else if(retval == EV_UTM_zone_60S.value){
			return EV_UTM_zone_60S;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPredefinedProjectionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
