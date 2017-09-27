package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum TokenID implements INativeEnum<TokenID> {
	TID_LBRACKET(TokenIDHelper.ENUM_VALUES[0]),
	TID_RBRACKET(TokenIDHelper.ENUM_VALUES[1]),
	TID_COLON(TokenIDHelper.ENUM_VALUES[2]),
	TID_VARIABLE(TokenIDHelper.ENUM_VALUES[3]),
	TID_WORD(TokenIDHelper.ENUM_VALUES[4]),
	TID_QUOTE(TokenIDHelper.ENUM_VALUES[5]),
	TID_NEWLINE(TokenIDHelper.ENUM_VALUES[6]),
	TID_UNKNOWN(TokenIDHelper.ENUM_VALUES[7]),
	TID_END(TokenIDHelper.ENUM_VALUES[8]);
	private int value;
	TokenID(int i) {
		this.value = i;
	}
	public TokenID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TokenID toEnum(int retval) {
		if(retval == TID_LBRACKET.value){
			return TID_LBRACKET;
		}
		else if(retval == TID_RBRACKET.value){
			return TID_RBRACKET;
		}
		else if(retval == TID_COLON.value){
			return TID_COLON;
		}
		else if(retval == TID_VARIABLE.value){
			return TID_VARIABLE;
		}
		else if(retval == TID_WORD.value){
			return TID_WORD;
		}
		else if(retval == TID_QUOTE.value){
			return TID_QUOTE;
		}
		else if(retval == TID_NEWLINE.value){
			return TID_NEWLINE;
		}
		else if(retval == TID_UNKNOWN.value){
			return TID_UNKNOWN;
		}
		else if(retval == TID_END.value){
			return TID_END;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TokenIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
