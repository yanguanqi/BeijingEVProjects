#ifndef _GEOMETRY_DEFINE_H
#define _GEOMETRY_DEFINE_H

#define EV_NAMESPACE_ENABLE 1

#ifndef EV_NAMESPACE_ENABLE

#define EV_USING_NAMESPACE_CORE

#define EV_USING_NAMESPACE_GEOMETRY
#define EV_USING_NAMESPACE_GEOMETRY_ALGORITHM
#define EV_USING_NAMESPACE_GEOMETRY_PRIVATE
#define EV_USING_NAMESPACE_GEOMETRY_UTILITY

#define EV_NAMESPACE_GEOMETRY_BEGIN
#define EV_NAMESPACE_GEOMETRY_END

#define EV_NAMESPACE_GEOMETRY_ALGORITHM_BEGIN

#define EV_NAMESPACE_GEOMETRY_ALGORITHM_END

#define EV_NAMESPACE_GEOMETRY_PRIVATE_BEGIN

#define EV_NAMESPACE_GEOMETRY_PRIVATE_END

#define EV_NAMESPACE_GEOMETRY_UTILITY_BEGIN

#define EV_NAMESPACE_GEOMETRY_UTILITY_END

#else

#define EV_USING_NAMESPACE_GEOMETRY using namespace EarthView::World::Spatial::Geometry

#define EV_USING_NAMESPACE_GEOMETRY_ALGORITHM  EV_USING_NAMESPACE_GEOMETRY::Algorithm

#define EV_USING_NAMESPACE_GEOMETRY_PRIVATE    EV_USING_NAMESPACE_GEOMETRY::Private

#define EV_USING_NAMESPACE_GEOMETRY_UTILITY    EV_USING_NAMESPACE_GEOMETRY::Utility

#define EV_NAMESPACE_GEOMETRY_BEGIN  namespace EarthView{  \
                                     namespace World{      \
							         namespace Spatial{    \
							         namespace Geometry{   
#define EV_NAMESPACE_GEOMETRY_END    }}}}

#define EV_GEOMETY_PREFIX EarthView::World::Spatial::Geometry

#define EV_GEOMETY_PRIVATE_PREFIX EarthView::World::Spatial::Geometry::Private

#define EV_NAMESPACE_GEOMETRY_PRIVATE_BEGIN  EV_NAMESPACE_GEOMETRY_BEGIN namespace Private{

#define EV_NAMESPACE_GEOMETRY_PRIVATE_END EV_NAMESPACE_GEOMETRY_END }

#define EV_NAMESPACE_GEOMETRY_ALGORITHM_BEGIN  EV_NAMESPACE_GEOMETRY_BEGIN namespace Algorithm{

#define EV_NAMESPACE_GEOMETRY_ALGORITHM_END EV_NAMESPACE_GEOMETRY_END }

#define EV_NAMESPACE_GEOMETRY_UTILITY_BEGIN  EV_NAMESPACE_GEOMETRY_BEGIN namespace Utility{

#define EV_NAMESPACE_GEOMETRY_UTILITY_END EV_NAMESPACE_GEOMETRY_END }

#endif

#define EV_DECLARE_CLASS(Name)   class Name;
#define EV_DECLARE_CLASS_PRIVATE(Name) class Name##Private;
#define EV_DECLARE_ENUM(Name)    enum Name;

#define EV_DECLARE_GEOMETRY_CLASS_PRIVATE(Name) \
	EV_NAMESPACE_GEOMETRY_PRIVATE_BEGIN \
	EV_DECLARE_CLASS_PRIVATE( Name ) \
	EV_NAMESPACE_GEOMETRY_PRIVATE_END
	//EV_USING_NAMESPACE_GEOMETRY_PRIVATE

#define EV_DECLARE_GEOMETRY_CLASS_UTILITY(Name) \
	EV_NAMESPACE_GEOMETRY_UTILITY_BEGIN \
	EV_DECLARE_CLASS( Name ) \
	EV_NAMESPACE_GEOMETRY_UTILITY_END
	//EV_USING_NAMESPACE_GEOMETRY_UTILITY

#define EV_DECLARE_CLASS_PRIVATE_FUNCTION(Name)    \
	inline EV_GEOMETY_PRIVATE_PREFIX::Name##Private* getPrivate() { return mpPrivate;}          \
	inline const EV_GEOMETY_PRIVATE_PREFIX::Name##Private* getPrivate() const {return mpPrivate;}

#define EV_DECLARE_CLASS_PARENT_PRIVATE_FUNCTION(Name,Parent)    \
	virtual Parent##Private* getPrivate();\
	virtual const Parent##Private* getPrivate() const;

#define EV_IMPLEMENT_CLASS_PARENT_PRIVATE_FUNCTION(Name,Parent)  \
	Parent##Private* Name::getPrivate() {return static_cast<Parent##Private*>(mp##Name##Private);} \
	const Parent##Private* Name::getPrivate() const {return static_cast<Parent##Private*>(mp##Name##Private);}

#define EV_FRIEND_CLASS(Name)   friend class Name;
#define EV_DECLARE_FRIEND_CLASS_PRIVATE(Name) friend class Name##Private;
#define EV_DEFINE_CLASS_PRIVATE(Name) \
	EV_GEOMETY_PRIVATE_PREFIX::Name##Private* mpPrivate;\
	EV_DECLARE_CLASS_PRIVATE_FUNCTION( Name)
//#define EV_DECLARE_CLASS_PRIVATE_2(Name) class Name##Private{};
//#define EV_DECLARE_GEOMETRY_CLASS_PRIVATE(Name) class Name##Private:public CGeometryPrivate{};
//#define EV_DECLARE_GEOMETRY_PRIVATE_FUNCTION(Name) \
//    Name##Private* getObjectPrivate(); \
//	const Name##Private* getObjectPrivate() const;

//#define EV_IMPLEMENT_GEOMETRY_PRIVATE_FUNCTION(Name)  \
//	Name##Private* Name::getObjectPrivate() {return dynamic_cast<Name##Private*>(mpCGeometryPrivate);} \
//    const Name##Private* Name::getObjectPrivate() const {return dynamic_cast<const Name##Private*>(mpCGeometryPrivate);}

#define EV_DECLARE_CONSTRUCT_FUNCTION_PRIVATE(Name)   \
	Name(Name##Private* obj); \
	Name(const Name##Private& obj);

//#define EV_IMPLEMENT_CONSTRUCT_FUNCTION_PRIVATE(Name)   \
//	Name::Name(Name##Private* obj) { mp##Name##Private = obj;}  \
//	Name::Name(const Name##Private& obj) { mp##Name##Private = obj.clone();}

#define EV_IMPLEMENT_CONSTRUCT_FUNCTION_PRIVATE(Name)    \
	Name::Name(Name##Private* obj) { mp##Name##Private = obj;mp##Name##Private->addRef();}  \
	Name::Name(const Name##Private& obj) { mp##Name##Private = dynamic_cast<Name##Private*>(obj.clone());}

#define EV_GEOMETRY_PRIVATE_INIT(Name) mp##Name##Private = EV_NEW Name##Private()
#define GEOMETRY_PRIVATE(Name) mp##Name##Private
#define EV_GEOMETRY_PRIVATE_DESTORY(Name)  if(mpPrivate && mpPrivate->deRef() == 0) \
	                                              EV_DELETE mpPrivate;

//#define EV_IMPLEMENT_COPY_FUNCTION(Name)   \
//	Name::Name(const Name& obj) {mp##Name##Private = obj.mp##Name##Private; mp##Name##Private->addRef();} \
//	Name& Name::operator=(const Name& obj) {if(mp##Name##Private && mp##Name##Private->deRef() == 0){EV_DELETE mp##Name##Private;}  \
//                                            mp##Name##Private = obj.mp##Name##Private; mp##Name##Private->addRef();  \
//                                            return *this; }

#define EV_IMPLEMENT_COPY_FUNCTION(Name)   \
	Name::Name(const Name& obj) {mpPrivate = obj.mpPrivate; mpPrivate->addRef();} \
	Name& Name::operator=(const Name& obj) {if(mpPrivate == obj.mpPrivate) return *this;\
	                                        if(mpPrivate && mpPrivate->deRef() == 0) EV_DELETE mpPrivate; \
                                            mpPrivate = obj.mpPrivate; mpPrivate->addRef();  \
                                            return *this; }

#define EV_IMPLEMENT_GEOMETRY_COPY_FUNCTION(Name,Parent)   \
	Name::Name(const Name& obj):Parent(obj) {mpPrivate = obj.mpPrivate; mpPrivate->addRef();} \
	Name& Name::operator=(const Name& obj) {Parent::operator=(obj);\
                                            if(mpPrivate == obj.mpPrivate) return *this;\
	                                        if(mpPrivate && mpPrivate->deRef() == 0) EV_DELETE mpPrivate; \
                                            mpPrivate = obj.mpPrivate; mpPrivate->addRef();  \
                                            return *this; }

#define EV_IMPLEMENT_DETACH_FUNCTION(Name)   \
	ev_void Name::detach()                          \
    {\
	    GEOMETRY_CHECK_EMPTY;   \
		\
		if(mpPrivate->getRefCount() == 1)\
			return;\
		else\
		{mpPrivate->deRef();mpPrivate = EV_NEW Name##Private(*mpPrivate);}\
	}

#define EV_IMPLEMENT_GEOMETRY_DETACH_FUNCTION(Name,Parent)   \
	ev_void Name::detach()                          \
    {\
	    GEOMETRY_CHECK_EMPTY;   \
		\
		if(isDirty())\
			update();\
		\
		Parent::detach();\
		\
		if(mpPrivate->getRefCount() == 1)\
			return;\
		else\
		{mpPrivate->deRef();mpPrivate = EV_NEW Name##Private(*mpPrivate);}\
	}

//#define EV_GEOMETRY_DETACH( Name )   \
//	CGeometryHelper::detach( ## Name ## );

#ifdef __GNUC__
#define EV_GEOMETRY_DETACH_PTR( Name )   \
	EVPrivatePtrDetach( Name->mpPrivate);

#define EV_GEOMETRY_DETACH_OBJECT( Name )   \
	EVPrivatePtrDetach( Name.mpPrivate);
#else
#define EV_GEOMETRY_DETACH_PTR( Name )   \
	EVPrivatePtrDetach( ## Name ## ->mpPrivate);

#define EV_GEOMETRY_DETACH_OBJECT( Name )   \
	EVPrivatePtrDetach( ## Name ## .mpPrivate);
#endif
#define EV_GEOMETRY_DETACH EV_GEOMETRY_DETACH_PTR

#endif

