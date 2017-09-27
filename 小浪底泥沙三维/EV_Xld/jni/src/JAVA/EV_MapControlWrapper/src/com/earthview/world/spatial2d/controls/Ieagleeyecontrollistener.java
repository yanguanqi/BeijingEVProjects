package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * µØÍ¼¿Ø¼şµÄÊÂ¼ş¼àÌı
 */
public class Ieagleeyecontrollistener extends com.earthview.world.spatial.atlas.Imaplistener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::IEagleEyeControlListener", new IeagleeyecontrollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JIEagleEyeControlListenerProxy", new IeagleeyecontrollistenerClassFactory());
	}

	/**
	 * Ä¬ÈÏ¹¹Ôìº¯Êı
	 */
	public Ieagleeyecontrollistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIEagleEyeControlListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.Ieagleeyecontrollistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * Êó±ê°´ÏÂÊÂ¼ş´¥·¢											
	 * @param button ¼üµÄ±êÊ¶(1´ú±í×ó¼ü£¬2´ú±íÓÒ¼ü£¬4´ú±íÖĞ¼ü)
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @param x ¹â±êÎ»ÖÃx
	 * @param y ¹â±êÎ»ÖÃy
	 * @param geoX µØÀíÎ»ÖÃx
	 * @param geoY µØÀíÎ»ÖÃy
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onMouseDown(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseDown_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * Êó±êµ¯ÆğÊÂ¼ş´¥·¢
	 * @param button ¼üµÄ±êÊ¶(1´ú±í×ó¼ü£¬2´ú±íÓÒ¼ü£¬4´ú±íÖĞ¼ü)
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @param x ¹â±êÎ»ÖÃx
	 * @param y ¹â±êÎ»ÖÃy
	 * @param geoX µØÀíÎ»ÖÃx
	 * @param geoY µØÀíÎ»ÖÃy
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onMouseUp(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseUp_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * Êó±êÒÆ¶¯ÊÂ¼ş´¥·¢
	 * @param button ¼üµÄ±êÊ¶(1´ú±í×ó¼ü£¬2´ú±íÓÒ¼ü£¬4´ú±íÖĞ¼ü)
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @param x ¹â±êÎ»ÖÃx
	 * @param y ¹â±êÎ»ÖÃy
	 * @param geoX µØÀíÎ»ÖÃx
	 * @param geoY µØÀíÎ»ÖÃy
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onMouseMove(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseMove_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * Êó±êË«»÷ÊÂ¼ş´¥·¢
	 * @param button ¼üµÄ±êÊ¶(1´ú±í×ó¼ü£¬2´ú±íÓÒ¼ü£¬4´ú±íÖĞ¼ü)
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @param x ¹â±êÎ»ÖÃx
	 * @param y ¹â±êÎ»ÖÃy
	 * @param geoX µØÀíÎ»ÖÃx
	 * @param geoY µØÀíÎ»ÖÃy
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onDoubleClick(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onDoubleClick_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel(deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(long pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);
	/**
	 * Êó±ê¹öÂÖÊÂ¼ş´¥·¢
	 * @param delta ¹öÂÖ×ª¹ıµÄ½Ç¶È
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @param x ¹â±êÎ»ÖÃx
	 * @param y ¹â±êÎ»ÖÃy
	 * @param geoX µØÀíÎ»ÖÃx
	 * @param geoY µØÀíÎ»ÖÃy
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onMouseWheel(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		return returnValue;
	}
	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(long pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);
	protected boolean onMouseWheel_NoVirtual(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		return returnValue;
	}

	protected  boolean onKeyDown_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ¼üÅÌ°´ÏÂÊÂ¼ş´¥·¢
	 * @param key °´ÏÂµÄ¼ü
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyDown_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyDown_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	protected  boolean onKeyUp_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * ¼üÅÌµ¯ÆğÊÂ¼ş´¥·¢
	 * @param key °´ÏÂµÄ¼ü
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @return true,±íÊ¾ÊÂ¼ş´¦ÀíÍê±Ï£¬²»ÔÙĞèÒªMapControl´¦Àí¡£false£¬±íÊ¾ÊÂ¼ş´¦Àíºó£¬»¹ĞèÒªMapControl´¦Àí
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyUp_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyUp_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	protected  boolean onResize_ev_int32_ev_int32_callback(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize(widthParamValue, heightParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onResize_ev_int32_ev_int32(long pNativeObject, int width, int height);
	/**
	 * ´°¿Ú´óĞ¡·¢Éú±ä»¯
	 * @param width ´°¿Ú¿í¶È
	 * @param height ´°¿Ú¸ß¶È
	 */
	public boolean onResize(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize_ev_int32_ev_int32(this.nativeObject.pointer, widthParamValue, heightParamValue);
		return returnValue;
	}
	native private boolean onResize_ev_int32_ev_int32_NoVirtual(long pNativeObject, int width, int height);
	protected boolean onResize_NoVirtual(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
		return returnValue;
	}

	protected  void onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(long display, long viewportEnvelope)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope viewportEnvelopeParamValue = (viewportEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportEnvelopeParamValue != null)
		{
		viewportEnvelopeParamValue.setDelegate(true);
		viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		IClassFactory viewportEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(viewportEnvelopeParamValue.getCppInstanceTypeName());
		if (viewportEnvelopeParamValueClassFactory != null)
		{
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)viewportEnvelopeParamValueClassFactory.create();
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		}
		}
		onBeforeRefresh(displayParamValue, viewportEnvelopeParamValue);
	}

	native private void onBeforeRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, long display, long viewportEnvelope);
	/**
	 * µØÍ¼Ë¢ĞÂÖ®Ç°µÄÊÂ¼ş
	 * @param display ÏÔÊ¾²ÎÊı
	 * @param viewportEnvelope ĞÂµÄÊÓ¿Ú·¶Î§
	 */
	public void onBeforeRefresh(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onBeforeRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}
	native private void onBeforeRefresh_ISpatialDisplay_IEnvelope_NoVirtual(long pNativeObject, long display, long viewportEnvelope);
	protected void onBeforeRefresh_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onBeforeRefresh_ISpatialDisplay_IEnvelope_NoVirtual(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}

	protected  void onAfterRefresh_ISpatialDisplay_IEnvelope_callback(long display, long viewportEnvelope)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope viewportEnvelopeParamValue = (viewportEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportEnvelopeParamValue != null)
		{
		viewportEnvelopeParamValue.setDelegate(true);
		viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		IClassFactory viewportEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(viewportEnvelopeParamValue.getCppInstanceTypeName());
		if (viewportEnvelopeParamValueClassFactory != null)
		{
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)viewportEnvelopeParamValueClassFactory.create();
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		}
		}
		onAfterRefresh(displayParamValue, viewportEnvelopeParamValue);
	}

	native private void onAfterRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, long display, long viewportEnvelope);
	/**
	 * µØÍ¼Ë¢ĞÂÖ®ºóµÄÊÂ¼ş
	 * @param display ÏÔÊ¾²ÎÊı
	 * @param viewportEnvelope ĞÂµÄÊÓ¿Ú·¶Î§
	 */
	public void onAfterRefresh(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onAfterRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}
	native private void onAfterRefresh_ISpatialDisplay_IEnvelope_NoVirtual(long pNativeObject, long display, long viewportEnvelope);
	protected void onAfterRefresh_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onAfterRefresh_ISpatialDisplay_IEnvelope_NoVirtual(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}

	public Ieagleeyecontrollistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ieagleeyecontrollistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * åœ¨æ·»åŠ å›¾å±‚ä¹‹å‰çš„äº‹ä»¶
	 * @param layer å¾…æ·»åŠ çš„å›¾å±‚
	 */
	public void onBeforeAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.onBeforeAddLayer_NoVirtual(layer);
	}
	/**
	 * åœ¨æ·»åŠ å›¾å±‚ä¹‹åçš„äº‹ä»¶
	 * @param layer å·±æ·»åŠ çš„å›¾å±‚
	 */
	public void onAfterAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.onAfterAddLayer_NoVirtual(layer);
	}
	/**
	 * åœ¨ç§»é™¤å›¾å±‚ä¹‹å‰çš„äº‹ä»¶
	 * @param layer å¾…ç§»é™¤çš„å›¾å±‚
	 */
	public void onBeforeRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.onBeforeRemoveLayer_NoVirtual(layer);
	}
	/**
	 * åœ¨ç§»é™¤å›¾å±‚ä¹‹åçš„äº‹ä»¶
	 * @param layer å·±ç§»é™¤çš„å›¾å±‚
	 */
	public void onAfterRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		super.onAfterRemoveLayer_NoVirtual(layer);
	}
	/**
	 * åœ¨ç§»åŠ¨å›¾å±‚ä¹‹å‰çš„äº‹ä»¶
	 * @param oldIndex åŸæ¥çš„ç´¢å¼•
	 * @param newIndex æ–°çš„ç´¢å¼•
	 */
	public void onBeforeMoveLayer(int oldIndex, int newIndex)
	{
		super.onBeforeMoveLayer_NoVirtual(oldIndex, newIndex);
	}
	/**
	 * åœ¨ç§»åŠ¨å›¾å±‚ä¹‹åçš„äº‹ä»¶
	 * @param oldIndex åŸæ¥çš„ç´¢å¼•
	 * @param newIndex æ–°çš„ç´¢å¼•
	 */
	public void onAfterMoveLayer(int oldIndex, int newIndex)
	{
		super.onAfterMoveLayer_NoVirtual(oldIndex, newIndex);
	}
	/**
	 * åœ°å›¾çš„é€‰ä¸­é›†åˆå‘ç”Ÿå˜åŒ–çš„äº‹ä»¶
	 * @param  
	 */
	public void onMapSelectionChanged()
	{
		super.onMapSelectionChanged_NoVirtual();
	}
	/**
	 * åœ°å›¾ç»˜åˆ¶äº‹ä»¶
	 * @param display æ˜¾ç¤ºå‚æ•°
	 * @param layer æ­£åœ¨ç»˜åˆ¶çš„å›¾å±‚
	 * @param type æ­£åœ¨ç»˜åˆ¶çš„ç±»å‹
	 */
	public void onMapDraw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		super.onMapDraw_NoVirtual(display, layer, type);
	}
	
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onResize_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onBeforeRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, String method);
	native protected void register_onAfterRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, String method);
	native protected void register_onBeforeAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onAfterMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMapSelectionChanged_void(long pNativeObject, String method);
	native protected void register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, "onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback");
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
			this.register_onResize_ev_int32_ev_int32(this.nativeObject.pointer, "onResize_ev_int32_ev_int32_callback");
			this.register_onBeforeRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, "onBeforeRefresh_ISpatialDisplay_IEnvelope_callback");
			this.register_onAfterRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, "onAfterRefresh_ISpatialDisplay_IEnvelope_callback");
			this.register_onBeforeAddLayer_ILayer(this.nativeObject.pointer, "onBeforeAddLayer_ILayer_callback");
			this.register_onAfterAddLayer_ILayer(this.nativeObject.pointer, "onAfterAddLayer_ILayer_callback");
			this.register_onBeforeRemoveLayer_ILayer(this.nativeObject.pointer, "onBeforeRemoveLayer_ILayer_callback");
			this.register_onAfterRemoveLayer_ILayer(this.nativeObject.pointer, "onAfterRemoveLayer_ILayer_callback");
			this.register_onBeforeMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onBeforeMoveLayer_ev_int32_ev_int32_callback");
			this.register_onAfterMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onAfterMoveLayer_ev_int32_ev_int32_callback");
			this.register_onMapSelectionChanged_void(this.nativeObject.pointer, "onMapSelectionChanged_void_callback");
			this.register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.nativeObject.pointer, "onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback");
		}
	}
	
	public static Ieagleeyecontrollistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ieagleeyecontrollistener obj = null;
 		if(baseObj instanceof Ieagleeyecontrollistener)
		{
			obj = (Ieagleeyecontrollistener)baseObj;
		} else {
			obj = new Ieagleeyecontrollistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IEagleEyeControlListener");
			obj.increaseCast();
		}

		return obj;
	}
}
