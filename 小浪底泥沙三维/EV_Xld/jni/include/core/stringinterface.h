#ifndef __StringInterface_H__
#define __StringInterface_H__

#include "core/commonstringpairlist.h"
#include "core/stringvector.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            //// List of parameter types available
            enum ParameterType
            {
                PT_BOOL,
                PT_REAL,
                PT_INT,
                PT_UNSIGNED_INT,
                PT_SHORT,
                PT_UNSIGNED_SHORT,
                PT_LONG,
                PT_UNSIGNED_LONG,
                PT_STRING,
                PT_VECTOR3,
                PT_MATRIX3,
                PT_MATRIX4,
                PT_QUATERNION,
                PT_COLOURVALUE,
				PT_FONT,
				PT_ENUM,
				PT_DATETIME,
				PT_MATERIAL,
				PT_PICTURE,
				PT_UNKNOW
				
            };
            //// Definition of a parameter supported by a CStringInterface class, for introspection
            class EV_CORE_DLL CParameterDef : public EarthView::World::Core::CBaseObject
            {
            public:
                EVString name;
                EVString description;
                EarthView::World::Core::ParameterType paramType;
				ev_bool mbReadOnly;
				ev_bool mbEnabled;
                CParameterDef();
                CParameterDef(const EVString &newName, const EVString &newDescription, EarthView::World::Core::ParameterType newType);
                CParameterDef(const EVString &newName, const EVString &newDescription, EarthView::World::Core::ParameterType newType, ev_bool readonly, ev_bool enabled);
				~CParameterDef();
				void release();
				void setParameter(ev_int32 min, ev_int32 max, ev_int32 singleStep);
				void setParameter(ev_real64 min, ev_real64 max, ev_uint8 decimals, ev_real64 singleStep);
				void setParameter(EarthView::World::Core::StringVector options);
            ev_private:
                CParameterDef( _in EarthView::World::Core::CNameValuePairList *pList );
				typedef CSharedPtr<CNameValuePairList> NameValuePairListPtr;
				NameValuePairListPtr mNameValueList;
            };
            ////typedef vector<EarthView::World::Core::CParameterDef> EarthView::World::Core::ParameterList;
            class EV_CORE_DLL ParameterList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Core::CParameterDef> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Core::CParameterDef const &t);
            private:
                InternalList mList;
            ev_private:
                ParameterList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ParameterList();
                void push_back(EarthView::World::Core::CParameterDef const &t);
                void pop_back();
                EarthView::World::Core::CParameterDef &front();
                EarthView::World::Core::CParameterDef &back();
                void insert(ev_uint32 pos, EarthView::World::Core::CParameterDef const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Core::CParameterDef &operator[](ev_size_t n);
                EarthView::World::Core::CParameterDef const &operator[](ev_size_t n) const;
                EarthView::World::Core::CParameterDef &at(ev_size_t n);
                EarthView::World::Core::CParameterDef const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            /****** Abstract class which is command object which gets/sets parameters.*****/
            class EV_CORE_DLL CParamCommand : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CParamCommand(_in EarthView::World::Core::CNameValuePairList *pList );
            public:
                CParamCommand();
                virtual EVString doGet(const void *target) const;
                virtual void doSet(void *target, const EVString &val);

				// 在doSet之前测试一次值是否有效。
                virtual ev_bool trySet(void *target, const EVString &val, EVString& reason)
				{
					return true;
				}

                virtual ~CParamCommand() {}
            };
            ////typedef map<EVString, EarthView::World::Core::CParamCommand* > ParamCommandMap;
            class EV_CORE_DLL ParamCommandMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                ParamCommandMap(_in EarthView::World::Core::CNameValuePairList *pList );
            public:
                ParamCommandMap();
                ev_bool push(const EVString &key, const EarthView::World::Core::CParamCommand*& val);
                ev_bool exist(const EVString &key);
                EarthView::World::Core::CParamCommand*& operator[](const EVString &key);
                EarthView::World::Core::CParamCommand*& get(const EVString &key);
                void erase(const EVString &key);
                ev_size_t size() const;
                void clear();
                ev_bool empty() const;
            ev_private:
                typedef map<EVString, EarthView::World::Core::CParamCommand *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			//// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                _Pairib insert(const value_type &val) ;
                iterator find(const EVString &key);
                const_iterator find(const EVString &key) const;
            private:
                InternalList mList;
            };
            /****** Class to hold a dictionary of parameters for a single class. *****/
            class EV_CORE_DLL CParamDictionary : public EarthView::World::Core::CBaseObject
            {
            protected:
                friend class CStringInterface;
                //// Definitions of parameters
                EarthView::World::Core::ParameterList mParamDefs;
                //// Command objects to get/set
                ParamCommandMap mParamCommands;
                /****** Retrieves the parameter command object for a named parameter. *****/
                EarthView::World::Core::CParamCommand *getParamCommand(const EVString &name);
                const EarthView::World::Core::CParamCommand *getParamCommand(const EVString &name) const;

            ev_private:
                CParamDictionary( _in EarthView::World::Core::CNameValuePairList *pList ) {}
            public:
                CParamDictionary() {}

                /****** Method for adding a parameter definition for this class.
                @param paramDef A EarthView::World::Core::CParameterDef object defining the parameter
                @param paramCmd Pointer to a CParamCommand subclass to handle the getting / setting of this parameter.
                    NB this class will not destroy this on shutdown, please ensure you do

                *****/
                void addParameter(const EarthView::World::Core::CParameterDef &paramDef, EarthView::World::Core::CParamCommand *paramCmd);
                /****** Retrieves a list of parameters valid for this object.
                @returns
                    A reference to a static list of EarthView::World::Core::CParameterDef objects.

                *****/
                const EarthView::World::Core::ParameterList &getParameters() const;
            };
            ////typedef map<EVString, EarthView::World::Core::CParamDictionary> ParamDictionaryMap;
            class EV_CORE_DLL ParamDictionaryMap : public EarthView::World::Core::CBaseObject
            {
				friend class CStringInterface;
            ev_private:
                ParamDictionaryMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ParamDictionaryMap() {}
                ev_bool push(const EVString &key, const EarthView::World::Core::CParamDictionary &val);
                ev_bool exist(const EVString &key);
                EarthView::World::Core::CParamDictionary &operator[](const EVString &key);
                EarthView::World::Core::CParamDictionary &get(const EVString &key);
                void erase(const EVString &key);
                ev_size_t size() const;
                void clear();
                ev_bool empty() const;
            ev_private:
                typedef map<EVString, EarthView::World::Core::CParamDictionary> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			//// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                _Pairib insert(const value_type &val);
                iterator find(const EVString &key);
                const_iterator find(const EVString &key) const;
            private:
                InternalList mList;
            };
            /****** Class defining the common interface which classes can use to
                present a reflection-style, self-defining parameter set to callers.
            @remarks
                This class also holds a static map of class name to parameter dictionaries
                for each subclass to use. See CParamDictionary for details.
            @remarks
                In order to use this class, each subclass must call createParamDictionary in their constructors
                which will create a parameter dictionary for the class if it does not exist yet.
            *****/
			enum ParamStatus
			{
				PS_HIDDEN,
				PS_DISABLED,
				PS_READWRITE
			};

			class EV_CORE_DLL IStringInterfaceObserver : public EarthView::World::Core::CBaseObject
			{
ev_private:
				IStringInterfaceObserver(_in EarthView::World::Core::CNameValuePairList* pList){}
			public:
				IStringInterfaceObserver(){}
				~IStringInterfaceObserver(){}
				virtual void valueChanged(const EVString &name){} 
				virtual void destroyed(){}
				virtual void statusChanged(const EVString &name, EarthView::World::Core::ParamStatus status){}
				virtual void valueModified(const EVString &name){}
			};

            class EV_CORE_DLL CStringInterface : public EarthView::World::Core::CAllocatedObject
            {
            private:
                EV_STATIC_MUTEX( msDictionaryMutex )
                //// Dictionary of parameters
                static ParamDictionaryMap msDictionary;
                //// Class name for this instance to be used as a lookup (must be initialised by subclasses)
                EVString mParamDictName;
                EarthView::World::Core::CParamDictionary *mParamDict;
                void *mParentObj;
				map<EVString,EVString> mOldKeyValueMap;
				ev_bool mbImmediate;
				ev_bool mbRestoreable;
				set<EarthView::World::Core::IStringInterfaceObserver *> mObservers;
				ev_bool mbEditStarted;
				EVString errorMessage;
				////vector<IStringInterfaceNotify *> vViewlist;
                /////protected:
            public:
                /****** Internal method for creating a parameter dictionary for the class, if it does not already exist.
                @remarks
                    This method will check to see if a parameter dictionary exist for this class yet,
                    and if not will create one. NB you must supply the name of the class (RTTI is not
                    used or performance).
                @param
                @returns
                    true if a new dictionary was created, false if it was already there
                *****/

			/*****	ev_void addObserver(IStringInterfaceNotify* val);
				ev_void removeObserver(IStringInterfaceNotify* val);*****/
				void startEdit(ev_bool immediate, bool restoreable);
				void endEdit(ev_bool apply);
				ev_bool hasValueChanged();
				void appendObserver(EarthView::World::Core::IStringInterfaceObserver *observer);
				void removeObserver(EarthView::World::Core::IStringInterfaceObserver *observer);
				void notifyValueChanged(const EVString &name);
				void notifyStatusChanged(const EVString &name, EarthView::World::Core::ParamStatus status);
                ev_bool createParamDictionary(const EVString &className);
				EVString getLastErrorMessage() const;
			protected:
				////保存现有StringInterface值，以便恢复使用
				ev_void storekeyvalues();
				////恢复保存的旧值
				ev_void restorekeyvalues();

				ev_bool setParameter(const EVString &name, const EVString &value, ev_bool immediate);
				EVString getParameter(const EVString &name, ev_bool immediate) const;
            ev_private:
                CStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CStringInterface();
                CStringInterface(void *parent);				
              
                /****** Virtual destructor, see Effective C++ *****/
                virtual ~CStringInterface();
                /****** Retrieves the parameter dictionary for this class.
                @remarks
                    Only valid to call this after createParamDictionary.
                @returns
                    Pointer to CParamDictionary shared by all instances of this class
                    which you can add parameters to, retrieve parameters etc.
                *****/
                EarthView::World::Core::CParamDictionary *getParamDictionary();
                const EarthView::World::Core::CParamDictionary *getParamDictionary() const;
                /****** Retrieves a list of parameters valid for this object.
                @returns
                    A reference to a static list of EarthView::World::Core::CParameterDef objects.

                *****/
                const EarthView::World::Core::ParameterList &getParameters() const;
                /****** Generic parameter setting method.
                @remarks
                    Call this method with the name of a parameter and a string version of the value
                    to set. The implementor will convert the string to a native type internally.
                    If in doubt, check the parameter definition in the list returned from
                    CStringInterface::getParameters.
                @param
                    name The name of the parameter to set
                @param
                    value EVString value. Must be in the right format for the type specified in the parameter definition.
                    See the CStringConverter class for more information.
                @returns
                    true if set was successful, false otherwise (NB no exceptions thrown - tolerant method)
                *****/
				virtual ev_bool setParameter(const EVString &name, const EVString &value);
				virtual ev_bool setParameter(const EVString &name, ev_bool readOnly,ev_bool enable);
                /****** Generic multiple parameter setting method.
                @remarks
                    Call this method with a list of name / value pairs
                    to set. The implementor will convert the string to a native type internally.
                    If in doubt, check the parameter definition in the list returned from
                    CStringInterface::getParameters.
                @param
                    paramList Name/value pair list
                *****/
                virtual void setParameterList(const NameValuePairList &paramList);
                /****** Generic parameter retrieval method.
                @remarks
                    Call this method with the name of a parameter to retrieve a string-format value of
                    the parameter in question. If in doubt, check the parameter definition in the
                    list returned from getParameters for the type of this parameter. If you
                    like you can use CStringConverter to convert this string back into a native type.
                @param
                    name The name of the parameter to get
                @returns
                    EVString value of parameter, blank if not found
                *****/
                virtual EVString getParameter(const EVString &name) const;

				
                /****** Method for copying this object's parameters to another object.
                @remarks
                    This method takes the values of all the object's parameters and tries to set the
                    same values on the destination object. This provides a completely type independent
                    way to copy parameters to other objects. Note that because of the EVString manipulation
                    involved, this should not be regarded as an efficient process and should be saved for
                    times outside of the rendering loop.
                @par
                    CAny unrecognised parameters will be ignored as with setParameter method.
                @param dest Pointer to object to have it's parameters set the same as this object.

                *****/
                virtual void copyParametersTo(EarthView::World::Core::CStringInterface *dest) const;
                static void cleanupDictionary () ;
            };
        }
    }
}

#endif

