/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/datapath.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 radius);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2, _in ev_real64 x3, _in ev_real64 y3, _in ev_real64 x4, _in ev_real64 y4);
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& x, _out ev_real64& y, _out ev_real64& width, _out ev_real64& height);
			typedef ev_bool  ( _stdcall EarthView_World_Display_CDataPath_closePath_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback)(_in const ev_real64 rotateAngle);
			typedef ev_real64  ( _stdcall EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback)();
			class CDataPathProxy : public EarthView::World::Display::CDataPath
			{
			private:
				EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CDataPath_closePath_ev_bool_Callback* m_EarthView_World_Display_CDataPath_closePath_ev_bool_Callback;
				EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback* m_EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback;
				EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback* m_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback;
				EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback* m_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback;
			public:
				CDataPathProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataPath(pList)
				{
					m_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_closePath_ev_bool_Callback = NULL;
					m_EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback = NULL;
					m_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_closePath_ev_bool(EarthView_World_Display_CDataPath_closePath_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_closePath_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_clearPath_ev_bool(EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback = pCallback;
				}
				virtual void addPathLine(_in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2)
				{
					if(m_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x1, y1, x2, y2);
					}
					else
						return this->CDataPath::addPathLine(x1, y1, x2, y2);
				}
				virtual void addPathArc(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle)
				{
					if(m_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					}
					else
						return this->CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
				virtual void addPathPie(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle)
				{
					if(m_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					}
					else
						return this->CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
				virtual void addPathEllipse(_in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe)
				{
					if(m_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x, y, majorAxe, minorAxe);
					}
					else
						return this->CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
				}
				virtual void addPathCircle(_in ev_real64 x, _in ev_real64 y, _in ev_real64 radius)
				{
					if(m_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback(x, y, radius);
					}
					else
						return this->CDataPath::addPathCircle(x, y, radius);
				}
				virtual void addPathBezier(_in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2, _in ev_real64 x3, _in ev_real64 y3, _in ev_real64 x4, _in ev_real64 y4)
				{
					if(m_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x1, y1, x2, y2, x3, y3, x4, y4);
					}
					else
						return this->CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
				}
				virtual void getBound(_out ev_real64& x, _out ev_real64& y, _out ev_real64& width, _out ev_real64& height) const
				{
					if(m_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(x, y, width, height);
					}
					else
						return this->CDataPath::getBound(x, y, width, height);
				}
				virtual ev_bool closePath() const
				{
					if(m_EarthView_World_Display_CDataPath_closePath_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_CDataPath_closePath_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDataPath::closePath();
				}
				virtual ev_bool clearPath()
				{
					if(m_EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDataPath::clearPath();
				}
				virtual void setRotateAngle(_in const ev_real64 rotateAngle)
				{
					if(m_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback(rotateAngle);
					}
					else
						return this->CDataPath::setRotateAngle(rotateAngle);
				}
				virtual ev_real64 getRotateAngle() const
				{
					if(m_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CDataPath::getRotateAngle();
				}
			};
			REGISTER_FACTORY_CLASS(CDataPathProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathLine(x1, y1, x2, y2);
				else
					ptrNativeObject->addPathLine(x1, y1, x2, y2);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathLine(x1, y1, x2, y2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				else
					ptrNativeObject->addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				else
					ptrNativeObject->addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe, _in ev_real64 startAngle, _in ev_real64 sweepAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
				else
					ptrNativeObject->addPathEllipse(x, y, majorAxe, minorAxe);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 majorAxe, _in ev_real64 minorAxe )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 radius )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathCircle(x, y, radius);
				else
					ptrNativeObject->addPathCircle(x, y, radius);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 radius )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathCircle(x, y, radius);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2, _in ev_real64 x3, _in ev_real64 y3, _in ev_real64 x4, _in ev_real64 y4 )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
				else
					ptrNativeObject->addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2, _in ev_real64 x3, _in ev_real64 y3, _in ev_real64 x4, _in ev_real64 y4 )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->addRect(x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& x, _out ev_real64& y, _out ev_real64& width, _out ev_real64& height )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::getBound(x, y, width, height);
				else
					ptrNativeObject->getBound(x, y, width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& x, _out ev_real64& y, _out ev_real64& width, _out ev_real64& height )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::getBound(x, y, width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CDataPath_closePath_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::closePath();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->closePath();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_closePath_ev_bool( void *pObjectXXXX, EarthView_World_Display_CDataPath_closePath_ev_bool_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_closePath_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CDataPath_closePath_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::closePath();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CDataPath_clearPath_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::clearPath();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->clearPath();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_clearPath_ev_bool( void *pObjectXXXX, EarthView_World_Display_CDataPath_clearPath_ev_bool_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_clearPath_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CDataPath_clearPath_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::clearPath();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(void *pObjectXXXX, _in const ev_real64 rotateAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CDataPath::setRotateAngle(rotateAngle);
				else
					ptrNativeObject->setRotateAngle(rotateAngle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64 rotateAngle )
			{
				EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CDataPath::setRotateAngle(rotateAngle);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				if (dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::getRotateAngle();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getRotateAngle();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64( void *pObjectXXXX, EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Callback* pCallback )
			{
				CDataPathProxy* ptr = dynamic_cast<CDataPathProxy*>((EarthView::World::Display::CDataPath*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Display::CDataPath::getRotateAngle();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CDataPath_getNativePath_void(void *pObjectXXXX )
			{
				const EarthView::World::Display::CDataPath* ptrNativeObject = (EarthView::World::Display::CDataPath*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getNativePath();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataRegion_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64_EVCombineMode(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in int mode )
			{
				EarthView::World::Display::CDataRegion* ptrNativeObject = (EarthView::World::Display::CDataRegion*) pObjectXXXX;
				ptrNativeObject->addRect(x, y, w, h, (EarthView::World::Display::EVCombineMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataRegion_addPath_void_CDataPath_EVCombineMode(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* path, _in int mode )
			{
				EarthView::World::Display::CDataRegion* ptrNativeObject = (EarthView::World::Display::CDataRegion*) pObjectXXXX;
				ptrNativeObject->addPath(path, (EarthView::World::Display::EVCombineMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataRegion_addRegion_void_CDataRegion_EVCombineMode(void *pObjectXXXX, _in EarthView::World::Display::CDataRegion* region, _in int mode )
			{
				EarthView::World::Display::CDataRegion* ptrNativeObject = (EarthView::World::Display::CDataRegion*) pObjectXXXX;
				ptrNativeObject->addRegion(region, (EarthView::World::Display::EVCombineMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CDataRegion_makeEmpty_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CDataRegion* ptrNativeObject = (EarthView::World::Display::CDataRegion*) pObjectXXXX;
				ptrNativeObject->makeEmpty();
			}
		}
	}
}
